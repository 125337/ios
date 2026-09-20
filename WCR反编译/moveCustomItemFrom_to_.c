// moveCustomItemFrom:to: @ 01133738

/* Function Stack Size: 0x20 bytes */

void WCRefineQuickReplyStore::moveCustomItemFrom_to_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  long_long lVar1;
  long_long lVar2;
  ID IVar3;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_customItems_026af318);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = IVar3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  lVar2 = local_28;
  if (((((long)local_28 < 0) || ((long)local_30 < 0)) ||
      (IVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
      lVar1 = local_30, (long)IVar3 <= (long)lVar2)) ||
     ((IVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
      (long)IVar3 <= (long)lVar1 || (local_28 == local_30)))) {
    local_3c = 1;
  }
  else {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_insertObject_atIndex__0269eac0,local_48,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomItems__026af320,local_38);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

