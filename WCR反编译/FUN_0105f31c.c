// FUN_0105f31c @ 0105f31c

void FUN_0105f31c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_28;
  
  lVar3 = *(long *)(param_1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasMedia_026ada58);
  if ((uVar2 & 1) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasMedia_026ada58);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_58 = *(long *)(param_1 + 0x30);
    (**(code **)(local_58 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_58;
  }
  else {
    local_58 = 0;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,local_48,local_58);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

