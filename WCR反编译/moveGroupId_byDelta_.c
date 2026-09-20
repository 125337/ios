// moveGroupId:byDelta: @ 00f2dffc

/* Function Stack Size: 0x20 bytes */

bool WCRefineEmoticonGroupStore::moveGroupId_byDelta_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID local_60;
  long local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  long_long local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  if (param_4 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_indexOfGroupId__026a1070,local_30);
    local_48 = IVar2;
    if (IVar2 == 0x7fffffffffffffff) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groups_026a1048);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      lVar1 = local_48 + local_38;
      local_58 = lVar1;
      if ((lVar1 < 0) ||
         (IVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
         (long)IVar2 <= lVar1)) {
        local_11 = 0;
        local_3c = 1;
      }
      else {
        IVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_60 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectAtIndex__0269d530,local_48)
        ;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_insertObject_atIndex__0269eac0,local_60,local_58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_WCREG_commitOrderedGroups__026abf60,local_50);
        local_11 = 1;
        local_3c = 1;
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

