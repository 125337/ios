// FUN_00ff4994 @ 00ff4994

void FUN_00ff4994(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setDrainRetryTimer__026ad710,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_drainPendingRecordsIfPossible_026ad6c0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

