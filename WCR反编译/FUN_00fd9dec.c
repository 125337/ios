// FUN_00fd9dec @ 00fd9dec

void FUN_00fd9dec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  uVar2 = DAT_02323e70;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _CGAffineTransformMakeScale(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_80,auStack_50,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_80);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

