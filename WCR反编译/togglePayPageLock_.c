// togglePayPageLock: @ 016f3128

/* Function Stack Size: 0x18 bytes */

void SpecificPageLockViewController::togglePayPageLock_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPayPageLockEnabled__026b3568,0);
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_canUseBiometric_026b3560);
    IVar1 = local_18;
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&cf_YN_ecuir_RRel_T_udkR,&cf_nx_,&PTR___NSConcreteGlobalBlock_02588390
                );
      _objc_unsafeClaimAutoreleasedReturnValue();
      local_2c = 1;
      goto LAB_016f3318;
    }
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_016f337c;
    local_48 = &DAT_02583fe0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_28;
    local_40 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_authenticateBeforeEnable__026b3578,&local_60);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = 0;
LAB_016f3318:
  _objc_storeStrong(&local_28,0);
  return;
}

