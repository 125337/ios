// setFavorite:atIndex: @ 01951044

/* Function Stack Size: 0x1c bytes */

void WCRefineFakeLocationHistoryStore::setFavorite_atIndex_
               (ID param_1,SEL param_2,bool param_3,unsigned_long_long param_4)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_48;
  uint local_3c;
  ID local_38;
  unsigned_long_long local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = local_30;
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (uVar1 < IVar2) {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_favorite);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,local_48,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveItems__026b9ae0,local_38);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(uVar1 >= IVar2);
  _objc_storeStrong(&local_38,0);
  return;
}

