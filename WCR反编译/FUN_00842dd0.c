// FUN_00842dd0 @ 00842dd0

void FUN_00842dd0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028cd420)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    FUN_00849810(param_1);
  }
  return;
}

