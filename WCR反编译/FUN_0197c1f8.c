// FUN_0197c1f8 @ 0197c1f8

void FUN_0197c1f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_24 = 1;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
    local_24 = (uint)uVar1;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3,local_24 & 1);
  return;
}

