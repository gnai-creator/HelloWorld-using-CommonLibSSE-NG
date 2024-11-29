#include "PapyrusRegistration.h"
#include "KeyLogger.h"

bool BindPapyrusFunctions(RE::BSScript::IVirtualMachine* vm) {
    if (!vm) {
        SKSE::log::error("Virtual Machine not initialized.");
        return false;
    }

 
    vm->RegisterFunction("LogPressedKey", "aapAirCheckScript", LogPressedKeyPapyrus);

    RE::DebugNotification("Plugin loaded successfully.");  // Envia uma notificação no jogo

    SKSE::log::info("Functions registered successfully in aapAirCheckScript.");
    return true;
}
