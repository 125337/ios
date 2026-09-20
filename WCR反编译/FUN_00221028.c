// FUN_00221028 @ 00221028

byte FUN_00221028(double param_1,undefined8 param_2)

{
  long lVar1;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha(lVar1);
    local_11 = DAT_02323e60 < param_1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

