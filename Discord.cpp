#include "Discord.h"
#include "chrono"
#include "Setting.h"
static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

void Discord::Initialize()
{
    DiscordEventHandlers Handle;
    memset(&Handle, 0, sizeof(Handle));
    Discord_Initialize("1049380151500222485", &Handle, 1, NULL);
}
void Discord::Update()
{
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.startTimestamp = eptime;
    discordPresence.largeImageKey = "https://share.creavite.co/SR79OShW6ZM1FZWY.gif";
    discordPresence.smallImageKey = "veriefd";
    discordPresence.details = "Version 2.3";
    discordPresence.state = "Gameloop Emulator Hack";
    discordPresence.largeImageText = "PABLO_HAX";
    discordPresence.smallImageKey = "https://c.tenor.com/WQ67K3ynhV0AAAAd/verified.gif";
    Discord_UpdatePresence(&discordPresence);
}