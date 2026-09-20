// FUN_01bf6288 @ 01bf6288

void FUN_01bf6288(long param_1)

{
  ulong uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(ulong *)(param_1 + 0x20);
  _WCRMomentsScheduledRescheduleTask(uVar1,local_20);
  if ((uVar1 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

