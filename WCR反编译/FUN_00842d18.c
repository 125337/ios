// FUN_00842d18 @ 00842d18

void FUN_00842d18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028cd410)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    FUN_008488d0(param_1);
  }
  return;
}

