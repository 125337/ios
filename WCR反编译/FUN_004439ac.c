// FUN_004439ac @ 004439ac

void FUN_004439ac(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028caa70)(local_18,local_20,local_28);
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar2 & 1) == 0) || (uVar3 = local_18, FUN_0045867c(), (uVar3 & 1) == 0)) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x2c63f);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
    }
    FUN_00458884(local_18,0);
    _objc_storeStrong(local_40,0);
  }
  else {
    uVar4 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026e0388);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = local_18;
    uVar1 = DAT_026e0388;
    if (uVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar1,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRLE_reloadLocalChips_026a3bb0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

