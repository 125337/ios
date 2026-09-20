// addFavoriteRelativePath: @ 015b52e0

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackStore::addFavoriteRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID local_48;
  ID local_40;
  uint local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadBookmarksMutable_026b0c98);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_18;
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_normalizedPathList__026b0ca0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObject__0269d678,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_insertObject_atIndex__0269eac0,local_30,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,&cf_favorites);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveBookmarks__026b0ca8,local_40);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

