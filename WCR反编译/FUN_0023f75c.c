// FUN_0023f75c @ 0023f75c

void FUN_0023f75c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_shouldSilenceIncomingRing_026a0d18);
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028c9328)(param_1,param_2);
  }
  return;
}

