// FUN_0112ab88 @ 0112ab88

void FUN_0112ab88(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  long local_30;
  long local_28;
  
  uVar1 = DAT_02323d00;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__026ca860);
  _CGAffineTransformMakeScale(uVar1);
  _CGAffineTransformMakeTranslation(0,0xc049000000000000);
  _CGAffineTransformConcat(auStack_90,auStack_c0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _memcpy(auStack_f0,auStack_60,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_f0);
  return;
}

