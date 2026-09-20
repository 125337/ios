// FUN_001bd474 @ 001bd474

void FUN_001bd474(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  
  (*DAT_028c8bc0)(param_1,param_2);
  uVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar2 != 0) {
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    FUN_001ecdb0();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    FUN_001edc3c();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_recordButton_026a0330);
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recordButton_026a0330);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (bVar1) {
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recordButton_026a0330);
    _objc_retainAutoreleasedReturnValue();
    FUN_001f18bc();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recordButton_026a0330);
    _objc_retainAutoreleasedReturnValue();
    FUN_001f1a80();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = param_1;
  FUN_001f2c14();
  FUN_001f3300();
  if ((uVar2 & 1) != 0) {
    FUN_001f339c(param_1);
  }
  return;
}

