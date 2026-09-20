// groupIdForMd5: @ 00f2f8a8

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonGroupStore::groupIdForMd5_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_68;
  ID local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid), (uVar1 & 1) != 0)
     ) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_membership_026abf38);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_00f29cf4();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      local_18 = 0;
    }
    else {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_validGroupIdSet_026abf40);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if ((IVar3 & 1) == 0) {
        local_68 = 0;
      }
      else {
        local_68 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_68;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

