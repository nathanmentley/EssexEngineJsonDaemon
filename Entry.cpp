/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEngineJsonDaemon/JsonDaemon.h>

extern "C" {
    void daemon_init(EssexEngine::Context* context) {
        context->RegisterDaemon<EssexEngine::Daemons::Json::JsonDaemon>(
            new EssexEngine::Daemons::Json::JsonDaemon(context)
        );
    }
}