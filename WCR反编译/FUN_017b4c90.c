// FUN_017b4c90 @ 017b4c90

void FUN_017b4c90(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  uint local_48;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_28 = 0;
    local_48 = 1;
    goto LAB_017b5154;
  }
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getUserInfoValueForKey__026a83f8);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getUserInfoValueForKey__026a83f8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    FUN_017b4a84();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
    uVar3 = local_58;
    bVar1 = uVar4 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
    }
    local_48 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_58);
    _objc_storeStrong(&local_50,0);
    if (local_48 != 0) goto LAB_017b5154;
  }
  uVar3 = local_30;
  FUN_017b53e8(local_30,&cf_userInfo);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar3 & 1) == 0) {
LAB_017b5028:
    uVar3 = local_60;
    FUN_017b53e8(local_60,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_017b4a84();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    uVar3 = local_70;
    if (uVar4 == 0) {
      local_28 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
    }
    local_48 = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKey__0269e048,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_017b4a84();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    uVar3 = local_68;
    bVar1 = uVar4 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
    }
    local_48 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_68,0);
    if (local_48 == 0) goto LAB_017b5028;
  }
  _objc_storeStrong(&local_60,0);
LAB_017b5154:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

