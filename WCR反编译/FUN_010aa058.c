// FUN_010aa058 @ 010aa058

void FUN_010aa058(long param_1)

{
  ulong uVar1;
  undefined8 local_48;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_replaceItemId_withContentOfItem__026ae5a0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((uVar1 & 1) == 0) {
      local_48 = 0;
    }
    else {
      local_48 = *(undefined8 *)(param_1 + 0x20);
    }
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),(byte)uVar1 & 1,(byte)uVar1 & 1,local_48);
  }
  return;
}

