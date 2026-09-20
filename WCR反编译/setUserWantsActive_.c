// setUserWantsActive: @ 00f23360

/* Function Stack Size: 0x14 bytes */

void WCRefineDoNotDisturbSupport::setUserWantsActive_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDoNotDisturbActive__026abe18,local_21 & 1);
  if ((local_21 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isInScheduleWindow_026abde0);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0,local_30,PTR_s_setDoNotDisturbSchedulePausedUnt_026abe20);
    }
    else {
      FUN_00f23488(local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setDoNotDisturbSchedulePausedUnt_026abe20);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0,local_30,PTR_s_setDoNotDisturbSchedulePausedUnt_026abe20);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
  _objc_storeStrong(&local_30,0);
  return;
}

