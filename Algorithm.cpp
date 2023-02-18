#include "Algorithm.h"

BOOL Algorithm::WorldToScreen(VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix)
{
	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	*Distance = (ScreenW / 100);
	if (ScreenW < 0.0001f) return FALSE;

	ScreenW = 1 / ScreenW;
	FLOAT SightX = (DX11Window::Width / 2);
	FLOAT SightY = (DX11Window::Height / 2);

	Screen.X = SightX + (ViewMatrix._11 * Position.X + ViewMatrix._21 * Position.Y + ViewMatrix._31 * Position.Z + ViewMatrix._41) * ScreenW * SightX;
	Screen.Y = SightY - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * Position.Z + ViewMatrix._42) * ScreenW * SightY;

	return TRUE;
}

BOOL Algorithm::WorldToScreenPlayer(VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix)
{
	


	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	*Distance = (ScreenW / 100);
	if (ScreenW < 0.0001f) return FALSE;

	FLOAT ScreenX = (ViewMatrix._11 * Position.X) + (ViewMatrix._21 * Position.Y) + (ViewMatrix._31 * Position.Z + ViewMatrix._41);
	FLOAT ScreenY = (ViewMatrix._12 * Position.X) + (ViewMatrix._22 * Position.Y) + (ViewMatrix._32 * (Position.Z + 85) + ViewMatrix._42);
	
	Screen.X = (DX11Window::Width / 2) + (DX11Window::Width / 2) * ScreenX / ScreenW;
	Screen.Y = (DX11Window::Height / 2) - (DX11Window::Height / 2) * ScreenY / ScreenW;
	FLOAT Y1 = (DX11Window::Height / 2) - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * (Position.Z - 95) + ViewMatrix._42) * (DX11Window::Height / 2) / ScreenW;
	Screen.Z = Y1 - Screen.Y;

	return TRUE;
}

BOOL Algorithm::WorldToScreenBone(D3DMATRIX ViewMatrix, VECTOR3 Position, VECTOR2& Screen, INT* Distance)
{
	
	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	*Distance = (ScreenW / 100);
	if (ScreenW < 0.0001f) return FALSE;

	ScreenW = 1 / ScreenW;
	FLOAT SightX = (DX11Window::Width / 2);
	FLOAT SightY = (DX11Window::Height / 2);

	Screen.X = SightX + (ViewMatrix._11 * Position.X + ViewMatrix._21 * Position.Y + ViewMatrix._31 * Position.Z + ViewMatrix._41) * ScreenW * SightX;
	Screen.Y = SightY - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * Position.Z + ViewMatrix._42) * ScreenW * SightY;

	return TRUE;
}

D3DMATRIX Algorithm::ToMatrixWithScale(VECTOR3 translation, VECTOR3 scale, VECTOR4 rot)
{
	D3DMATRIX m;
	m._41 = translation.X;
	m._42 = translation.Y;
	m._43 = translation.Z;

	float x2 = rot.X + rot.X;
	float y2 = rot.Y + rot.Y;
	float z2 = rot.Z + rot.Z;

	float xx2 = rot.X * x2;
	float yy2 = rot.Y * y2;
	float zz2 = rot.Z * z2;
	m._11 = (1.0f - (yy2 + zz2)) * scale.X;
	m._22 = (1.0f - (xx2 + zz2)) * scale.Y;
	m._33 = (1.0f - (xx2 + yy2)) * scale.Z;

	float yz2 = rot.Y * z2;
	float wx2 = rot.W * x2;
	m._32 = (yz2 - wx2) * scale.Z;
	m._23 = (yz2 + wx2) * scale.Y;

	float xy2 = rot.X * y2;
	float wz2 = rot.W * z2;
	m._21 = (xy2 - wz2) * scale.Y;
	m._12 = (xy2 + wz2) * scale.X;

	float xz2 = rot.X * z2;
	float wy2 = rot.W * y2;
	m._31 = (xz2 + wy2) * scale.Z;
	m._13 = (xz2 - wy2) * scale.X;

	m._14 = 0.0f;
	m._24 = 0.0f;
	m._34 = 0.0f;
	m._44 = 1.0f;

	return m;
}

D3DMATRIX Algorithm::MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2)
{
	D3DMATRIX pOut = 
	{
		pM1._11 * pM2._11 + pM1._12 * pM2._21 + pM1._13 * pM2._31 + pM1._14 * pM2._41,
		pM1._11 * pM2._12 + pM1._12 * pM2._22 + pM1._13 * pM2._32 + pM1._14 * pM2._42,
		pM1._11 * pM2._13 + pM1._12 * pM2._23 + pM1._13 * pM2._33 + pM1._14 * pM2._43,
		pM1._11 * pM2._14 + pM1._12 * pM2._24 + pM1._13 * pM2._34 + pM1._14 * pM2._44,
		pM1._21 * pM2._11 + pM1._22 * pM2._21 + pM1._23 * pM2._31 + pM1._24 * pM2._41,
		pM1._21 * pM2._12 + pM1._22 * pM2._22 + pM1._23 * pM2._32 + pM1._24 * pM2._42,
		pM1._21 * pM2._13 + pM1._22 * pM2._23 + pM1._23 * pM2._33 + pM1._24 * pM2._43,
		pM1._21 * pM2._14 + pM1._22 * pM2._24 + pM1._23 * pM2._34 + pM1._24 * pM2._44,
		pM1._31 * pM2._11 + pM1._32 * pM2._21 + pM1._33 * pM2._31 + pM1._34 * pM2._41,
		pM1._31 * pM2._12 + pM1._32 * pM2._22 + pM1._33 * pM2._32 + pM1._34 * pM2._42,
		pM1._31 * pM2._13 + pM1._32 * pM2._23 + pM1._33 * pM2._33 + pM1._34 * pM2._43,
		pM1._31 * pM2._14 + pM1._32 * pM2._24 + pM1._33 * pM2._34 + pM1._34 * pM2._44,
		pM1._41 * pM2._11 + pM1._42 * pM2._21 + pM1._43 * pM2._31 + pM1._44 * pM2._41,
		pM1._41 * pM2._12 + pM1._42 * pM2._22 + pM1._43 * pM2._32 + pM1._44 * pM2._42,
		pM1._41 * pM2._13 + pM1._42 * pM2._23 + pM1._43 * pM2._33 + pM1._44 * pM2._43,
		pM1._41 * pM2._14 + pM1._42 * pM2._24 + pM1._43 * pM2._34 + pM1._44 * pM2._44
	};

	return pOut;
}

VECTOR3 Algorithm::GetBoneWorldPosition(DWORD ActorAddv, DWORD BoneAddv)
{
	FTTransform Bone = Utility::ReadMemoryEx<FTTransform>(BoneAddv);
	FTTransform Actor = Utility::ReadMemoryEx<FTTransform>(ActorAddv);
	D3DMATRIX BoneMatrix = ToMatrixWithScale(Bone.Translation, Bone.Scale3D, Bone.Rotation);
	D3DMATRIX ComponentToWorldMatrix = ToMatrixWithScale(Actor.Translation, Actor.Scale3D, Actor.Rotation);
	D3DMATRIX NewMatrix = MatrixMultiplication(BoneMatrix, ComponentToWorldMatrix);

	VECTOR3 BonePos;
	BonePos.X = NewMatrix._41;
	BonePos.Y = NewMatrix._42;
	BonePos.Z = NewMatrix._43;

	return BonePos;
}