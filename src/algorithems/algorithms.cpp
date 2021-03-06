

#include "algorithms.h"
#include "imgui/imgui.h"
namespace algo
{
    algorithms_menu::algorithms_menu(algorithms *&currentAgloPointer)
        : m_CurrentAlgo(currentAgloPointer)
    {
    }
    void algorithms_menu::OnImGuiRender()
    {
        for (const auto &algo: m_Algorithms)
        {
            if (ImGui::Button(algo.first.c_str()))
                m_CurrentAlgo = algo.second();
            m_CurrentAlgo->generateRandNum();
        }
    }
}// namespace algo