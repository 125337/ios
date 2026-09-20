// moveGroupIdToEnd: @ 00f2e3f4

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonGroupStore::moveGroupIdToEnd_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  ID local_40;
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
  IVar2 = local_20;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_38;
  local_40 = IVar2;
  if ((local_38 == 0x7fffffffffffffff) ||
     ((*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0), IVar1 == IVar2 - 1)) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectAtIndex__0269d530,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_58);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCREG_commitOrderedGroups__026abf60,local_50);
    local_11 = 1;
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

