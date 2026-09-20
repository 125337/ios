// FUN_000776f4 @ 000776f4

long FUN_000776f4(undefined8 param_1)

{
  long lVar1;
  long local_78;
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
    local_78 = lVar1;
    _CGImageGetBytesPerRow();
    _CGImageGetHeight();
    local_78 = local_78 * lVar1;
    if (local_78 == 0) {
      local_78 = 1;
    }
    local_18 = local_78;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

