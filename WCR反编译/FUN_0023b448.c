// FUN_0023b448 @ 0023b448

void FUN_0023b448(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong local_b0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  undefined **local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined *local_30 [3];
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileWCRefineSwitchesExpanded_026a0b60);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30[0],PTR_s_setProfileWCRefineSwitchesExpand_026a0c00,(uint)puVar1 ^ 1);
  uVar2 = local_18;
  FUN_0022b93c();
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
  if ((uVar2 & 1) == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getTableView_026a09c8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b0;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar2 = local_18;
  ppuVar3 = &local_80;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_0023b7b4;
  local_68 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar2;
  _objc_retainBlock();
  local_58 = ppuVar3;
  if (local_40 == 0) {
    (*(code *)ppuVar3[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,PTR__OBJC_CLASS___UIView_026cdfd8,
               PTR_s_transitionWithView_duration_opti_026a0c08,local_40,0x500004,ppuVar3,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(&local_18,0);
  return;
}

