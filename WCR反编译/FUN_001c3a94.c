// FUN_001c3a94 @ 001c3a94

void FUN_001c3a94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028c8c38)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    FUN_00202e70(param_1);
  }
  return;
}

