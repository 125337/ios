// FUN_0060712c @ 0060712c

void FUN_0060712c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong local_b0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  undefined **local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40 [3];
  undefined *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileWCRefineSwitchesExpanded_026a0b60);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setProfileWCRefineSwitchesExpand_026a0c00,(uint)puVar1 ^ 1);
  uVar2 = local_18;
  FUN_00619b10();
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_40[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
  if ((uVar2 & 1) == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_getTableView_026a09c8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b0;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  ppuVar3 = &local_88;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc0000000;
  local_7c = 0;
  local_78 = FUN_0061e338;
  local_70 = &DAT_025797b0;
  local_68 = local_18;
  _objc_retainBlock();
  local_60 = ppuVar3;
  if (local_48 == 0) {
    (*(code *)ppuVar3[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,PTR__OBJC_CLASS___UIView_026cdfd8,
               PTR_s_transitionWithView_duration_opti_026a0c08,local_48,0x500004,ppuVar3,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

