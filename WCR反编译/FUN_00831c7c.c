// FUN_00831c7c @ 00831c7c

byte FUN_00831c7c(double param_1,undefined8 param_2)

{
  long lVar1;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  if (local_20 == 0) {
    local_11 = true;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha(lVar1);
    local_11 = param_1 <= DAT_02323d38;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

