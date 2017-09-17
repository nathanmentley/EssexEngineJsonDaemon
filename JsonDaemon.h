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
#pragma once

#include <EssexEngineCore/UniquePointer.h>
#include <EssexEngineCore/BaseDaemon.h>

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
				if(GetContext()->HasDriver<Core::Logging::ILogDriver>()) {
					GetContext()->GetDriver<Core::Logging::ILogDriver>()->LogLine(
						"Loading Daemon [%s] [%s]",
						GetDaemonName().c_str(),
						GetDaemonVersion().c_str()
					);
				}
			}
			std::string GetDaemonName() { return "Json"; }
            std::string GetDaemonVersion() { return ESSEX_ENGINE_VERSION; }
            
            UniquePointer<IJsonDocument> GetJsonDocument(SmartPointer<Daemons::FileSystem::IFileBuffer> data);
            UniquePointer<IJsonNode> GetJsonNode(SmartPointer<IJsonDocument> doc, std::string key);
            UniquePointer<IJsonNode> GetJsonNode(SmartPointer<IJsonNode> node, std::string key);
        
            std::list<UniquePointer<IJsonNode>> GetJsonNodeArray(SmartPointer<IJsonDocument> doc, std::string key);
            std::list<UniquePointer<IJsonNode>> GetJsonNodeArray(SmartPointer<IJsonNode> node, std::string key);
        
            Nullable<std::string> GetStringFromNode(SmartPointer<IJsonDocument> document, std::string key);
            Nullable<int> GetIntFromNode(SmartPointer<IJsonDocument> document, std::string key);
            Nullable<bool> GetBoolFromNode(SmartPointer<IJsonDocument> document, std::string key);
        
            Nullable<std::string> GetStringFromNode(SmartPointer<IJsonNode> node, std::string key);
            Nullable<int> GetIntFromNode(SmartPointer<IJsonNode> node, std::string key);
            Nullable<bool> GetBoolFromNode(SmartPointer<IJsonNode> node, std::string key);
        
            Nullable<std::string> GetStringFromNode(SmartPointer<IJsonNode> node);
            Nullable<int> GetIntFromNode(SmartPointer<IJsonNode> node);
            Nullable<bool> GetBoolFromNode(SmartPointer<IJsonNode> node);
        
            UniquePointer<IJsonNode> CreateNode();
        
            void RemoveNode(SmartPointer<IJsonDocument> doc, std::string key);
            void RemoveNode(SmartPointer<IJsonNode> node, std::string key);
        
            void AppendNode(SmartPointer<IJsonDocument> target, SmartPointer<IJsonNode> node, std::string key);
            void AppendNode(SmartPointer<IJsonNode> target, SmartPointer<IJsonNode> node, std::string key);
        
            void AppendToArray(SmartPointer<IJsonDocument> target, SmartPointer<IJsonNode> node, std::string key);
            void AppendToArray(SmartPointer<IJsonNode> target, SmartPointer<IJsonNode> node, std::string key);
        
            void SetNodeToString(SmartPointer<IJsonDocument> document, Nullable<std::string> value);
            void SetNodeToInt(SmartPointer<IJsonDocument> document, Nullable<int> value);
            void SetNodeToBool(SmartPointer<IJsonDocument> document, Nullable<bool> value);
        
            void SetNodeToString(SmartPointer<IJsonNode> node, Nullable<std::string> value);
            void SetNodeToInt(SmartPointer<IJsonNode> node, Nullable<int> value);
            void SetNodeToBool(SmartPointer<IJsonNode> node, Nullable<bool> value);
            void SetNodeToArray(SmartPointer<IJsonNode> node);
        
            std::string SerializeDocument(SmartPointer<IJsonDocument> doc);
        private:
    };
}}};