// FUN_00ee85ec @ 00ee85ec

void FUN_00ee85ec(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    bVar1 = (*(byte *)(param_1 + 0x30) & 1) == 0;
    if (bVar1) {
      local_48 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
      local_28 = local_48;
    }
    else {
      local_48 = 0;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,local_48);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
  }
  return;
}

