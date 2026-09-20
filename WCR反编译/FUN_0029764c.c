// FUN_0029764c @ 0029764c

void FUN_0029764c(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  bVar1 = *(long *)(param_1 + 0x20) == 0;
  if (bVar1) {
    local_58 = 0xfffffffffffffffc;
    FUN_00272848(0xfffffffffffffffc,&cf__O_b_X__g_T_N);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_58;
  }
  else {
    local_58 = 0;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3,local_58);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

