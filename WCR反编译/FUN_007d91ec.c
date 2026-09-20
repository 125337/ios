// FUN_007d91ec @ 007d91ec

void FUN_007d91ec(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_getAssociatedObject(uVar1,&DAT_028cce68);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_isEqualToNumber__026a7b80,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    FUN_007d3c04(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

