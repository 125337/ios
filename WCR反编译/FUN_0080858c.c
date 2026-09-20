// FUN_0080858c @ 0080858c

void FUN_0080858c(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObserver__0269f128,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,0);
  }
  FUN_00808658();
  _objc_storeStrong(&local_20,0);
  return;
}

