// FUN_0183a48c @ 0183a48c

long FUN_0183a48c(undefined8 param_1)

{
  long lVar1;
  long local_58;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGImage_0269e0e8);
  if (lVar1 == 0) {
    local_18 = 1;
  }
  else {
    local_58 = lVar1;
    _CGImageGetBytesPerRow();
    _CGImageGetHeight();
    local_58 = local_58 * lVar1;
    if (local_58 == 0) {
      local_58 = 1;
    }
    local_18 = local_58;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

