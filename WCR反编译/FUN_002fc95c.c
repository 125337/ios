// FUN_002fc95c @ 002fc95c

void FUN_002fc95c(long param_1)

{
  ulong uVar1;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCancelled_026a1c20);
  if (((uVar1 & 1) == 0) && (FUN_002f8b50(), (uVar1 & 1) != 0)) {
    FUN_002fc504(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_20,0);
  return;
}

