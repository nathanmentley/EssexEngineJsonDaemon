/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <EssexEngineCore/UniquePointer.h>
#include <EssexEngineCore/WeakPointer.h>
#include <EssexEngineCore/BaseDaemon.h>
#include <EssexEngineCore/LogDaemon.h>

#include <EssexEngineFileSystemDaemon/IFileBuffer.h>
#include <EssexEngineJsonDaemon/IJsonDriver.h>

namespace EssexEngine{
namespace Daemons{
namespace Json{
    class JsonDaemon:public BaseDaemon<IJsonDriver>
    {
        public:
            JsonDaemon(WeakPointer<Context> _context);
            ~JsonDaemon();
			
			void Init() {
				if(GetContext()->HasDaemon<Core::Logging::LogDaemon>()) {
					GetContext()->GetDaemon<Core::Logging::LogDaemon>()->LogLine(
						"Loading Daemon [%s] [%s]",
						GetDaemonName().c_str(),
						GetDaemonVersion().c_str()
					);
				}
			}
			std::string GetDaemonName() { return "Json"; }
            std::string GetDaemonVersion() { return ESSEX_ENGINE_VERSION; }
            
            UniquePointer<IJsonDocument> GetJsonDocument(WeakPointer<Daemons::FileSystem::IFileBuffer> data);
            UniquePointer<IJsonNode> GetJsonNode(WeakPointer<IJsonDocument> doc, std::string key);
            UniquePointer<IJsonNode> GetJsonNode(WeakPointer<IJsonNode> node, std::string key);
        
            std::list<UniquePointer<IJsonNode>> GetJsonNodeArray(WeakPointer<IJsonDocument> doc, std::string key);
            std::list<UniquePointer<IJsonNode>> GetJsonNodeArray(WeakPointer<IJsonNode> node, std::string key);
        
            Nullable<std::string> GetStringFromNode(WeakPointer<IJsonDocument> document, std::string key);
            Nullable<int> GetIntFromNode(WeakPointer<IJsonDocument> document, std::string key);
            Nullable<bool> GetBoolFromNode(WeakPointer<IJsonDocument> document, std::string key);
        
            Nullable<std::string> GetStringFromNode(WeakPointer<IJsonNode> node, std::string key);
            Nullable<int> GetIntFromNode(WeakPointer<IJsonNode> node, std::string key);
            Nullable<bool> GetBoolFromNode(WeakPointer<IJsonNode> node, std::string key);
        
            Nullable<std::string> GetStringFromNode(WeakPointer<IJsonNode> node);
            Nullable<int> GetIntFromNode(WeakPointer<IJsonNode> node);
            Nullable<bool> GetBoolFromNode(WeakPointer<IJsonNode> node);
        
            UniquePointer<IJsonNode> CreateNode();
        
            void RemoveNode(WeakPointer<IJsonDocument> doc, std::string key);
            void RemoveNode(WeakPointer<IJsonNode> node, std::string key);
        
            void AppendNode(WeakPointer<IJsonDocument> target, WeakPointer<IJsonNode> node, std::string key);
            void AppendNode(WeakPointer<IJsonNode> target, WeakPointer<IJsonNode> node, std::string key);
        
            void AppendToArray(WeakPointer<IJsonDocument> target, WeakPointer<IJsonNode> node, std::string key);
            void AppendToArray(WeakPointer<IJsonNode> target, WeakPointer<IJsonNode> node, std::string key);
        
            void SetNodeToString(WeakPointer<IJsonDocument> document, Nullable<std::string> value);
            void SetNodeToInt(WeakPointer<IJsonDocument> document, Nullable<int> value);
            void SetNodeToBool(WeakPointer<IJsonDocument> document, Nullable<bool> value);
        
            void SetNodeToString(WeakPointer<IJsonNode> node, Nullable<std::string> value);
            void SetNodeToInt(WeakPointer<IJsonNode> node, Nullable<int> value);
            void SetNodeToBool(WeakPointer<IJsonNode> node, Nullable<bool> value);
            void SetNodeToArray(WeakPointer<IJsonNode> node);
        
            std::string SerializeDocument(WeakPointer<IJsonDocument> doc);
        private:
    };
}}};
