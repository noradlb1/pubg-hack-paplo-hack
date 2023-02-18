#pragma once

#include "Includes.h"
#include "DX11Window.h"
#include "Utility.h"

struct VECTOR2
{
	FLOAT X;
	FLOAT Y;
};

struct VECTOR3
{
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
};

struct VECTOR4
{
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
	FLOAT W;
};

struct D3DMATRIX
{
	FLOAT _11, _12, _13, _14;
	FLOAT _21, _22, _23, _24;
	FLOAT _31, _32, _33, _34;
	FLOAT _41, _42, _43, _44;
};

struct FTTransform
{
	VECTOR4 Rotation;
	VECTOR3 Translation;
	FLOAT _Padding;
	VECTOR3 Scale3D;
};

namespace Algorithm
{
	BOOL WorldToScreen(VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix);
	BOOL WorldToScreenPlayer(VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix);
	BOOL WorldToScreenBone(D3DMATRIX ViewMatrix, VECTOR3 Position, VECTOR2& Screen, INT* Distance);
	D3DMATRIX ToMatrixWithScale(VECTOR3 Translation, VECTOR3 Scale, VECTOR4 Rot);
	D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2);
	VECTOR3 GetBoneWorldPosition(DWORD ActorAddv, DWORD BoneAddv);
}
