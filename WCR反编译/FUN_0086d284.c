// FUN_0086d284 @ 0086d284

void FUN_0086d284(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (*DAT_028cd6d8)(param_1,param_2);
  if ((DAT_028cd865 & 1) != 0) {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0087ddf0();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((DAT_028cd866 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0087e290();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

