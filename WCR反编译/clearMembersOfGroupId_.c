// clearMembersOfGroupId: @ 00f2e5d0

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonGroupStore::clearMembersOfGroupId_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (((uVar1 == 0) ||
      (uVar1 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf___all__),
      (uVar1 & 1) != 0)) ||
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__), (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_indexOfGroupId__026a1070,local_38);
    if (IVar2 == 0x7fffffffffffffff) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_membership_026abf38);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allKeysForObject__026abf68,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
      if (IVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_removeObjectsForKeys__026a35f0,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setMembership__026abf70,local_48);
        FUN_00f2c2e0();
      }
      local_11 = 1;
      local_3c = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

