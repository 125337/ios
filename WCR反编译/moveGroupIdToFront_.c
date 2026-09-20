// moveGroupIdToFront: @ 00f2e23c

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonGroupStore::moveGroupIdToFront_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_indexOfGroupId__026a1070,local_30);
  local_38 = IVar1;
  if ((IVar1 == 0x7fffffffffffffff) || (IVar1 == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectAtIndex__0269d530,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_insertObject_atIndex__0269eac0,local_50,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCREG_commitOrderedGroups__026abf60,local_48);
    local_11 = 1;
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

