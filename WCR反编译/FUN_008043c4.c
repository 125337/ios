// FUN_008043c4 @ 008043c4

void FUN_008043c4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  uVar1 = DAT_02323f60;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__026ca860);
  _CGAffineTransformMakeScale(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _memcpy(auStack_80,auStack_50,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_80);
  return;
}

