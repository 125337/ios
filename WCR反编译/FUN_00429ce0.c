// FUN_00429ce0 @ 00429ce0

byte FUN_00429ce0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_98;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = lVar2;
    if (lVar2 == 0) {
      local_98 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_98;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_<videomsg);
    bVar1 = true;
    if (lVar2 == 0x7fffffffffffffff) {
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_<img);
      bVar1 = true;
      if (lVar2 == 0x7fffffffffffffff) {
        lVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_<voicemsg);
        bVar1 = lVar2 != 0x7fffffffffffffff;
      }
    }
    if (bVar1) {
      local_11 = 1;
    }
    else {
      lVar2 = local_28;
      FUN_0040f778();
      local_11 = (byte)lVar2 & 1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

