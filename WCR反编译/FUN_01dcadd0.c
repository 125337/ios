// FUN_01dcadd0 @ 01dcadd0

void FUN_01dcadd0(long param_1)

{
  long lVar1;
  
  if (1000000000.0 < *(double *)(param_1 + 0x30)) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_WCRefineSessionStatsEngine_026ced48,
                 PTR_s_setManualGroupJoinTime_forRoom__026c53b0,*(undefined8 *)(param_1 + 0x20));
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  return;
}

