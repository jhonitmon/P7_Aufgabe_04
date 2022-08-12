#-------------------------------------------------
#
# Project created by QtCreator 2018-11-04T18:10:38
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Chat
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        chat.cpp

HEADERS += \
        chat.h

FORMS += \
        chat.ui
        ##########################################################################################################
        # Add needed Libarys to Output Directory
        # found on: https://stackoverflow.com/questions/6771039/automatic-copy-of-dependent-files-in-qt-creator
        ##########################################################################################################
        # Anmerkungen (Be):
        # Ergaenzung der Profile-Datei unter Qt Creator zum Erstellen von stand-alone-lauffähigen Programmen.
        # Die unten folgenden Anweisungen in der .pro-Datei anfuegen.
        # Danach: Erstellen-->Alles bereinigen und Erstellen-->qmake ausführen
        # Nach dem Erstellen/Ausführen sollten im Build-Verzeichnis eine Reihe Ordner und Dateien hinzugefuegt
        # worden und das Programm (bspw. die .exe-Datei) stand-alone ausführbar sein.
        # Wenn nur fuer eine Plattform erzeugt werden soll, koennen die Anweisungen entsprechend gekuerzt werden.
        ##########################################################################################################

        QMAKE_LFLAGS += -static -static-libgcc -static-libstdc++


        isEmpty(TARGET_EXT) {
            win32 {
                TARGET_CUSTOM_EXT = .exe
            }
            macx {
                TARGET_CUSTOM_EXT = .app
            }
        } else {
            TARGET_CUSTOM_EXT = $${TARGET_EXT}
        }

        win32 {
            CONFIG(release) {
                DEPLOY_COMMAND = windeployqt
            }
        }
        macx {
            CONFIG(release) {
                DEPLOY_COMMAND = macdeployqt
            }
        }

        CONFIG( debug, debug|release ) {
            # debug
            DEPLOY_TARGET = $$shell_quote($$shell_path($${OUT_PWD}/debug/$${TARGET}$${TARGET_CUSTOM_EXT}))
        } else {
            # release
            DEPLOY_TARGET = $$shell_quote($$shell_path($${OUT_PWD}/release/$${TARGET}$${TARGET_CUSTOM_EXT}))
        }

        #  # Uncomment the following line to help debug the deploy command when running qmake
        #  warning($${DEPLOY_COMMAND} $${DEPLOY_TARGET})

        # Use += instead of = if you use multiple QMAKE_POST_LINKs
        QMAKE_POST_LINK = $${DEPLOY_COMMAND} $${DEPLOY_TARGET}
