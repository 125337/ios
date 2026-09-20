// FUN_00fd9aa0 @ 00fd9aa0

void FUN_00fd9aa0(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  long local_38;
  undefined1 local_29;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_38 = param_1;
  local_29 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memcpy(auStack_68,PTR__CGAffineTransformIdentity_025782d8,0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_98,auStack_68,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_98);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__026ca970,0);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPillMovedDuringPan__026ad318,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_snapPillToEdgeAnimated__026ad320,1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__026ca970,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_refreshChrome_026ad2a8);
  return;
}

