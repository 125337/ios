// FUN_00ff980c @ 00ff980c

void FUN_00ff980c(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_drainPendingRecordsIfPossible_026ad6c0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

