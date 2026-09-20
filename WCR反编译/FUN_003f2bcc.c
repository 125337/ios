// FUN_003f2bcc @ 003f2bcc

byte FUN_003f2bcc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  byte local_ec;
  ulong local_78;
  ulong local_70;
  int local_64;
  ulong local_60;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_40 = uVar2;
  FUN_003f1f7c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_58[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  while (local_60 != 0 && local_60 != local_40) {
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60;
    local_70 = uVar3;
    if (local_60 == local_58[0]) {
LAB_003f2e18:
      local_21 = 0;
      local_64 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIControl_026ce2d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((uVar2 & 1) != 0) ||
          (uVar2 = local_70,
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf_Button),
          (uVar2 & 1) != 0)) ||
         (uVar2 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_70,PTR_s_containsString__0269d0b0,&cf_MMGrowDictationIconView),
         (uVar2 & 1) != 0)) goto LAB_003f2e18;
      local_64 = 0;
    }
    _objc_storeStrong(&local_70,0);
    if (local_64 != 0) goto LAB_003f2ecc;
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60;
    local_60 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_64 = 2;
LAB_003f2ecc:
  _objc_storeStrong(&local_60,0);
  iVar5 = local_64 + -2;
  if (iVar5 == 0) {
    local_ec = 0;
    bVar1 = local_40 != 0;
    if (bVar1) {
      local_78 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_ec = (byte)uVar2;
    }
    local_21 = local_ec & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    iVar5 = 1;
    local_64 = 1;
  }
  _objc_storeStrong(iVar5,local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

