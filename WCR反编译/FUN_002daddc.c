// FUN_002daddc @ 002daddc

void FUN_002daddc(long param_1)

{
  ulong uVar1;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCancelled_026a1c20);
  if (((uVar1 & 1) != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    FUN_002dab68(*(undefined8 *)(param_1 + 0x20),&cf_MMTabBarBase_cancelledTransition);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

