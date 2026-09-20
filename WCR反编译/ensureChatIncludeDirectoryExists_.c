// ensureChatIncludeDirectoryExists: @ 015beb94

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoicePackStore::ensureChatIncludeDirectoryExists_(ID param_1,SEL param_2,ID *param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID local_60;
  undefined *local_58;
  ID local_50;
  byte local_41;
  ID local_40;
  ID local_38;
  ID *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureRootDirectoryExists__026a3c70,param_3);
  if ((param_1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatIncludeDirectoryAbsolutePath_026b0d68);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 0;
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_40;
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_40,local_50);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar2 = local_40;
    local_41 = (byte)puVar4;
    if ((((ulong)puVar4 & 1) == 0) && (local_30 != (ID *)0x0)) {
      _objc_retainAutorelease();
      *local_30 = IVar2;
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    if ((local_41 & 1) != 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bookmarksFilePath_026b0c90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithContentsOfFile__026a3348);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_loadBookmarksMutable_026b0c98);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_58;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_60 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = true;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar3 == (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveBookmarks__026b0ca8,local_60);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    local_11 = local_41 & 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return local_11 & 1;
}

