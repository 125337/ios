// FUN_00443458 @ 00443458

void FUN_00443458(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_58;
  ulong local_50;
  uint local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_6;
  local_28 = param_5;
  (*DAT_028caa68)(param_5,param_6);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x2c63f);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar4 & 1) == 0) || (uVar3 = local_28, FUN_0045867c(), (uVar3 & 1) == 0)) {
    if (local_38 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
    }
    FUN_00458884(local_28,0);
    local_48 = 1;
  }
  else {
    uVar5 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026e0388);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = local_28;
    uVar2 = DAT_026e0388;
    if (uVar5 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar2,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_50 = 0;
    local_58 = 0;
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    local_50 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manageButton_026a1000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_58;
    local_58 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    if (local_50 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,param_1 < 52.0);
    }
    bVar1 = local_38 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRLE_layoutChipBar_026a3ba8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRLE_reloadLocalChips_026a3bb0);
    }
    local_48 = (uint)!bVar1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

