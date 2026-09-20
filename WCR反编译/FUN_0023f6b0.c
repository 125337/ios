// FUN_0023f6b0 @ 0023f6b0

void FUN_0023f6b0(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_shouldSilenceIncomingRing_026a0d18);
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028c9320)(param_1,param_2);
  }
  else {
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_setMute__026a0d20);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setMute__026a0d20,1);
    }
  }
  return;
}

