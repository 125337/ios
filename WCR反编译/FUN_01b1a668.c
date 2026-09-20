// FUN_01b1a668 @ 01b1a668

void FUN_01b1a668(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  uVar2 = DAT_02323e70;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(0,*(undefined8 *)(param_1 + 0x28),PTR_s_setAlpha__026ca860);
  _CGAffineTransformMakeScale(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _memcpy(auStack_80,auStack_50,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_80);
  return;
}

