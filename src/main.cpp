#include "PapyrusRegistration.h"

SKSEPluginLoad(const SKSE::LoadInterface *skse) {
    SKSE::Init(skse);

     auto papyrus = SKSE::GetPapyrusInterface();
    if (!papyrus->Register(BindPapyrusFunctions)) {
        SKSE::log::error("Failed to register Papyrus functions.");
        RE::DebugNotification("Failed to register Papyrus functions.");  // Envia uma notificação no jogo
        return false;
    }

    RE::DebugNotification("Plugin loaded successfully.");  // Envia uma notificação no jogo
    SKSE::log::info("Plugin loaded successfully.");
    return true;
}