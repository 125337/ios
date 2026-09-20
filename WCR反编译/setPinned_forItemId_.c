// setPinned:forItemId: @ 0095e708

/* Function Stack Size: 0x1c bytes */

bool WCRClipboardHistoryStore::setPinned_forItemId_(ID param_1,SEL param_2,bool param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_60;
  long local_58;
  long local_50;
  ID local_48;
  undefined4 local_3c;
  long local_38;
  byte local_29;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_29 = (byte)param_3;
  local_38 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_50 = 0x7fffffffffffffff;
    local_58 = 0;
    while( true ) {
      lVar1 = local_58;
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      if ((long)IVar2 <= lVar1) break;
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar4 & 1) != 0) {
        local_50 = local_58;
        break;
      }
      local_58 = local_58 + 1;
    }
    if (local_50 == 0x7fffffffffffffff) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_29 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_pinned);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectAtIndex__0269d530,local_50);
      IVar3 = local_48;
      IVar2 = local_60;
      if ((local_29 & 1) == 0) {
        IVar4 = local_48;
        FUN_00959544(local_48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_insertObject_atIndex__0269eac0,IVar2,IVar4);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_insertObject_atIndex__0269eac0,local_60,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setItems__026a17a8,local_48);
      local_11 = 1;
      local_3c = 1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

