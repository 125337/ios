// wcr_itemAtAbsolutePath:isDirectory: @ 015b64b0

/* Function Stack Size: 0x1c bytes */

ID WCRefineVoicePackStore::wcr_itemAtAbsolutePath_isDirectory_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID local_c0;
  ID local_b0;
  bool local_71;
  ID local_70;
  bool local_61;
  ID local_60;
  ID local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_38 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineVoicePackItem_026cedd8;
    local_40 = puVar2;
    _objc_alloc_init();
    lVar1 = local_30;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setName__0269e0c8);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAbsolutePath__026ae2c8,local_30);
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_relativePathFromAbsolute__026ae380,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setRelativePath__026a7440);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setIsDirectory__026b0ce8,local_31 & 1);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_attributesOfItemAtPath_error__0269db08,local_30,0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileModificationDate_026b0c18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setModificationDate__026b0cf0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileSize_026a1640);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFileSize__026ac4f0,puVar2);
    IVar4 = local_20;
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_bindingForRelativePath__026b0bb0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_58 != 0) {
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_61 = (IVar5 & 1) == 0;
      if (local_61) {
        local_b0 = 0;
      }
      else {
        local_b0 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_b0;
      }
      local_61 = !local_61;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setRepositoryCode__026b0cf8,local_b0);
      if (local_61) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendOrder);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_71 = (IVar5 & 1) == 0;
      if (local_71) {
        local_c0 = 0;
      }
      else {
        local_70 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendOrder);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_71 = !local_71;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSendOrder__026b0bb8,local_c0);
      if (local_71) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_38 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

