// FUN_015881dc @ 015881dc

void FUN_015881dc(long param_1,byte param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];
  long local_28;
  byte local_19;
  long local_18;
  
  if ((param_2 & 1) != 0) {
    local_28 = param_1;
    local_19 = param_2;
    local_18 = param_1;
    _memcpy(auStack_58,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _memcpy(auStack_88,auStack_58,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_88);
  }
  return;
}

