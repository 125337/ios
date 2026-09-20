// removeRecentRelativePath: @ 015b4ed4

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackStore::removeRecentRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadBookmarksMutable_026b0c98);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_normalizedPathList__026b0ca0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObject__0269d678,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_recents);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveBookmarks__026b0ca8,local_38);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

