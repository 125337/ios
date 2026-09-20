// FUN_019e8758 @ 019e8758

void FUN_019e8758(long param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_019e8870();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setCurrentColorFromUserColor__026bb128);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_canvasView_026bb0c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  pcVar1 = &cf___eQ;
  if (*(long *)(param_1 + 0x20) == 0) {
    pcVar1 = &cf_SVGr1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}

