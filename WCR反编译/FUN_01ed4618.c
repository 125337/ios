// FUN_01ed4618 @ 01ed4618

void FUN_01ed4618(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _memcpy(auStack_50,PTR__CGAffineTransformIdentity_025782d8,0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _memcpy(auStack_80,auStack_50,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_80);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__026ca860);
  return;
}

