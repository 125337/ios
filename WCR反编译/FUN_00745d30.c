// FUN_00745d30 @ 00745d30

long FUN_00745d30(undefined8 param_1)

{
  long local_48;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_48 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026f45b0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = local_48;
  if (local_48 == 0) {
    local_48 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_unsignedLongLongValue_0269d6b8);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_48;
}

