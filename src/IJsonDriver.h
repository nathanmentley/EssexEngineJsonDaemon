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

#include <string>
#include <list>

#include <EssexEngineCore/UniquePointer.h>
#include <EssexEngineCore/IDriver.h>

#include <EssexEngineFileSystemDaemon/IFileBuffer.h>

#include <EssexEngineJsonDaemon/IJsonDocument.h>
#include <EssexEngineJsonDaemon/IJsonNode.h>

namespace EssexEngine{
namespace Daemons{
namespace Json{
    class IJsonDriver: public Core::IDriver
    {
        public:
            virtual UniquePointer<IJsonDocument> GetJsonDocument(SmartPointer<Daemons::FileSystem::IFileBuffer> data) = 0;
            virtual UniquePointer<IJsonNode> GetJsonNode(SmartPointer<IJsonDocument> doc, std::string key) = 0;
            virtual UniquePointer<IJsonNode> GetJsonNode(SmartPointer<IJsonNode> node, std::string key) = 0;
        
            virtual std::list<UniquePointer<IJsonNode>> GetJsonNodeArray(SmartPointer<IJsonDocument> doc, std::string key) = 0;
            virtual std::list<UniquePointer<IJsonNode>> GetJsonNodeArray(SmartPointer<IJsonNode> node, std::string key) = 0;
        
            virtual Nullable<std::string> GetStringFromNode(SmartPointer<IJsonDocument> document, std::string key) = 0;
            virtual Nullable<int> GetIntFromNode(SmartPointer<IJsonDocument> document, std::string key) = 0;
            virtual Nullable<bool> GetBoolFromNode(SmartPointer<IJsonDocument> document, std::string key) = 0;
        
            virtual Nullable<std::string> GetStringFromNode(SmartPointer<IJsonNode> node, std::string key) = 0;
            virtual Nullable<int> GetIntFromNode(SmartPointer<IJsonNode> node, std::string key) = 0;
            virtual Nullable<bool> GetBoolFromNode(SmartPointer<IJsonNode> node, std::string key) = 0;
        
            virtual Nullable<std::string> GetStringFromNode(SmartPointer<IJsonNode> node) = 0;
            virtual Nullable<int> GetIntFromNode(SmartPointer<IJsonNode> node) = 0;
            virtual Nullable<bool> GetBoolFromNode(SmartPointer<IJsonNode> node) = 0;
        
            virtual UniquePointer<IJsonNode> CreateNode() = 0;
        
            virtual void RemoveNode(SmartPointer<IJsonDocument> doc, std::string key) = 0;
            virtual void RemoveNode(SmartPointer<IJsonNode> node, std::string key) = 0;
        
            virtual void AppendNode(SmartPointer<IJsonDocument> target, SmartPointer<IJsonNode> node, std::string key) = 0;
            virtual void AppendNode(SmartPointer<IJsonNode> target, SmartPointer<IJsonNode> node, std::string key) = 0;
        
            virtual void AppendToArray(SmartPointer<IJsonDocument> target, SmartPointer<IJsonNode> node, std::string key) = 0;
            virtual void AppendToArray(SmartPointer<IJsonNode> target, SmartPointer<IJsonNode> node, std::string key) = 0;
        
            virtual void SetNodeToString(SmartPointer<IJsonDocument> document, Nullable<std::string> value) = 0;
            virtual void SetNodeToInt(SmartPointer<IJsonDocument> document, Nullable<int> value) = 0;
            virtual void SetNodeToBool(SmartPointer<IJsonDocument> document, Nullable<bool> value) = 0;
        
            virtual void SetNodeToString(SmartPointer<IJsonNode> node, Nullable<std::string> value) = 0;
            virtual void SetNodeToInt(SmartPointer<IJsonNode> node, Nullable<int> value) = 0;
            virtual void SetNodeToBool(SmartPointer<IJsonNode> node, Nullable<bool> value) = 0;
            virtual void SetNodeToArray(SmartPointer<IJsonNode> node) = 0;
        
            virtual std::string SerializeDocument(SmartPointer<IJsonDocument> doc) = 0;
        private:
    };
}}};