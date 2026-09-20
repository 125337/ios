// FUN_002e3844 @ 002e3844

void FUN_002e3844(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  (*DAT_028c9938)(local_18,param_2);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    FUN_002e71b4(local_18,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

