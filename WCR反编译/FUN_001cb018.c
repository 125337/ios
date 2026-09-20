// FUN_001cb018 @ 001cb018

void FUN_001cb018(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028c8e58)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    FUN_0021c924(param_1);
  }
  return;
}

