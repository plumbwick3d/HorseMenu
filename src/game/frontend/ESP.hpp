#pragma once
#include "game/rdr/Player.hpp"
#include <imgui.h>

namespace YimMenu
{
    class ESP
    {
    public:
        static void Draw();
        static void DrawPlayer(Player& plyr, ImDrawList* const draw_list);
        static void DrawPeds(Ped ped, ImDrawList* drawList);

    private:
        static ImColor GetColorBasedOnDistance(float distance);
        static void DrawTextInfo(ImDrawList* drawList, const ImVec2& position, const std::string& text, ImColor color);
        static void DrawSkeleton(Ped ped, ImDrawList* drawList, ImColor color);
        static void DrawHorseSkeleton(Ped horse, ImDrawList* drawList, ImColor color);
        static ImVec2 boneToScreen(rage::fvector3 bone);
    };
}