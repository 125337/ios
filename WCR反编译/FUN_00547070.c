// FUN_00547070 @ 00547070

void FUN_00547070(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_a8;
  ulong local_80;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || (uVar1 = local_18, FUN_0054ac0c(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cb3e8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_30 = uVar1;
    _objc_getAssociatedObject(local_18,&DAT_028cb3e9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      local_80 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_38;
    local_40 = local_80;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      local_a8 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_a8 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a8;
    DAT_028cb368 = 1;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLikeUsers__026a4e98,uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLikeCount__026a4ea0,uVar1);
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_mutableCopy_0269d8a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCommentUsers__026a4ea8,uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCommentCount__026a4eb0,uVar1);
    FUN_0054e514(local_18,0);
    DAT_028cb368 = 0;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

