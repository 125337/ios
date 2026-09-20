// FUN_005052a8 @ 005052a8

void FUN_005052a8(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028caf98)(param_1,param_2,param_3 & 1);
  FUN_005055f8();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_prepareDebugConsoleIfNeeded_026a45e0
              );
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_prepareWKInspectable_026a45e8);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_prepareWKInspectable_026a45e8);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_prepareDebugConsoleIfNeeded_026a45e0);
    }
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_webView_026a12c0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00505768();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  return;
}

