// FUN_001ceb30 @ 001ceb30

void FUN_001ceb30(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  (*DAT_028c8f78)(param_2,param_3);
  FUN_001cf8b0();
  if ((uVar1 & 1) != 0) {
    FUN_001d597c();
    FUN_001d5a74(param_2);
    uVar1 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_2);
  }
  return;
}

