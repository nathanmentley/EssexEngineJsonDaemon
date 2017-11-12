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
#include <EssexEngineCore/WeakPointer.h>

#include <EssexEngineCore/WeakPointer.h>
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
            virtual std::unique_ptr<IJsonDocument> GetJsonDocument(std::string data) = 0;
            virtual std::unique_ptr<IJsonNode> GetJsonNode(WeakPointer<IJsonDocument> doc, std::string key) = 0;
            virtual std::unique_ptr<IJsonNode> GetJsonNode(WeakPointer<IJsonNode> node, std::string key) = 0;
        
            virtual std::list<std::unique_ptr<IJsonNode>> GetJsonNodeArray(WeakPointer<IJsonDocument> doc, std::string key) = 0;
            virtual std::list<std::unique_ptr<IJsonNode>> GetJsonNodeArray(WeakPointer<IJsonNode> node, std::string key) = 0;
        
            virtual Nullable<std::string> GetStringFromNode(WeakPointer<IJsonDocument> document, std::string key) = 0;
            virtual Nullable<int> GetIntFromNode(WeakPointer<IJsonDocument> document, std::string key) = 0;
            virtual Nullable<bool> GetBoolFromNode(WeakPointer<IJsonDocument> document, std::string key) = 0;
        
            virtual Nullable<std::string> GetStringFromNode(WeakPointer<IJsonNode> node, std::string key) = 0;
            virtual Nullable<int> GetIntFromNode(WeakPointer<IJsonNode> node, std::string key) = 0;
            virtual Nullable<bool> GetBoolFromNode(WeakPointer<IJsonNode> node, std::string key) = 0;
        
            virtual Nullable<std::string> GetStringFromNode(WeakPointer<IJsonNode> node) = 0;
            virtual Nullable<int> GetIntFromNode(WeakPointer<IJsonNode> node) = 0;
            virtual Nullable<bool> GetBoolFromNode(WeakPointer<IJsonNode> node) = 0;
        
            virtual std::unique_ptr<IJsonNode> CreateNode() = 0;
        
            virtual void RemoveNode(WeakPointer<IJsonDocument> doc, std::string key) = 0;
            virtual void RemoveNode(WeakPointer<IJsonNode> node, std::string key) = 0;
        
            virtual void AppendNode(WeakPointer<IJsonDocument> target, WeakPointer<IJsonNode> node, std::string key) = 0;
            virtual void AppendNode(WeakPointer<IJsonNode> target, WeakPointer<IJsonNode> node, std::string key) = 0;
        
            virtual void AppendToArray(WeakPointer<IJsonDocument> target, WeakPointer<IJsonNode> node, std::string key) = 0;
            virtual void AppendToArray(WeakPointer<IJsonNode> target, WeakPointer<IJsonNode> node, std::string key) = 0;
        
            virtual void SetNodeToString(WeakPointer<IJsonDocument> document, Nullable<std::string> value) = 0;
            virtual void SetNodeToInt(WeakPointer<IJsonDocument> document, Nullable<int> value) = 0;
            virtual void SetNodeToBool(WeakPointer<IJsonDocument> document, Nullable<bool> value) = 0;
        
            virtual void SetNodeToString(WeakPointer<IJsonNode> node, Nullable<std::string> value) = 0;
            virtual void SetNodeToInt(WeakPointer<IJsonNode> node, Nullable<int> value) = 0;
            virtual void SetNodeToBool(WeakPointer<IJsonNode> node, Nullable<bool> value) = 0;
            virtual void SetNodeToArray(WeakPointer<IJsonNode> node) = 0;
        
            virtual std::string SerializeDocument(WeakPointer<IJsonDocument> doc) = 0;
        private:
    };
}}};