#include "KeyLogger.h"

// Fun��o chamada via Papyrus para registrar teclas pressionadas
bool LogPressedKeyPapyrus(RE::StaticFunctionTag*, int keyCode) {
    // Converter o c�digo da tecla para o caractere correspondente (exemplo simplificado)
    char key = static_cast<char>(keyCode);

    // Verifica se o c�digo � v�lido para exibi��o
    if (keyCode >= 32 && keyCode <= 126) {  // C�digos ASCII imprim�veis
        std::string message = "Tecla pressionada: ";
        message += key;

        // Exibir notifica��o no jogo
        RE::DebugNotification(message.c_str());

        // Registrar no log
        SKSE::log::info("Tecla pressionada: {}", key);
    } else {
        // Para c�digos n�o imprim�veis, apenas registra no log
        SKSE::log::info("Tecla pressionada (c�digo): {}", keyCode);
    }

    return true;
}
