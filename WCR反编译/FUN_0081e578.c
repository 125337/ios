// FUN_0081e578 @ 0081e578

void FUN_0081e578(undefined8 param_1)

{
  long lVar1;
  long local_48;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_0081daa8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

