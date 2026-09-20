// toggleRandom: @ 01deec08

/* Function Stack Size: 0x18 bytes */

void WCRefineStepCountSettingsViewController::toggleRandom_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  mach_header *pmVar4;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_58;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setStepCountRandomEnabled__026c59f0,uVar2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) != 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomMax_026a7f30);
    if (0 < (long)puVar1) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomMin_026a7f28);
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomMax_026a7f30);
      if ((long)puVar1 <= (long)puVar3) goto LAB_01deef04;
    }
    local_a0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountTarget_026a7f38);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountInitial_026a7ee0);
    if ((long)local_a0 < (long)(puVar1 + 1000)) {
      local_a0 = puVar1 + 1000;
    }
    local_38 = local_a0;
    if ((long)local_a0 < 1) {
      local_38 = (undefined *)((long)&MACH_HEADER.magic + 1);
    }
    local_a8 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountInitial_026a7ee0);
    if ((long)local_a8 < (long)(local_38 + -2000)) {
      local_a8 = local_38 + -2000;
    }
    local_58 = local_a8;
    if ((long)local_38 < (long)local_a8) {
      local_b0 = (undefined *)((long)local_38 / 2);
      if ((long)local_b0 < 2) {
        local_b0 = (undefined *)((long)&MACH_HEADER.magic + 1);
      }
      local_58 = local_b0;
    }
    pmVar4 = (mach_header *)(local_58 + -1);
    if ((long)local_58 < 1) {
      pmVar4 = (mach_header *)((long)&MACH_HEADER.magic + 1);
      local_58 = (undefined *)((long)&MACH_HEADER.magic + 1);
    }
    FUN_01deef5c(pmVar4,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setStepCountRandomMin__026c59f8,local_58);
    FUN_01deef5c(local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setStepCountRandomMax__026c5a00,local_38);
  }
LAB_01deef04:
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_invalidateTodayPlan_026c5a08);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

