// FUN_0075b8d0 @ 0075b8d0

void FUN_0075b8d0(long param_1)

{
  long local_18;
  
  FUN_0075165c();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 != 0) {
    FUN_0074998c();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_sync();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

