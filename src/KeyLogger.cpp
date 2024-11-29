#include "KeyLogger.h"

// Função chamada via Papyrus para registrar teclas pressionadas
bool LogPressedKeyPapyrus(RE::StaticFunctionTag*, int keyCode) {
    // Converter o código da tecla para o caractere correspondente (exemplo simplificado)
    char key = static_cast<char>(keyCode);

    // Verifica se o código é válido para exibição
    if (keyCode >= 32 && keyCode <= 126) {  // Códigos ASCII imprimíveis
        std::string message = "Tecla pressionada: ";
        message += key;

        // Exibir notificação no jogo
        RE::DebugNotification(message.c_str());

        // Registrar no log
        SKSE::log::info("Tecla pressionada: {}", key);
    } else {
        // Para códigos não imprimíveis, apenas registra no log
        SKSE::log::info("Tecla pressionada (código): {}", keyCode);
    }

    return true;
}
