// FUN_00225608 @ 00225608

byte FUN_00225608(undefined8 param_1)

{
  long lVar1;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = false;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_rangeOfString__0269d838,&cf_onFullScreenClose);
    local_11 = true;
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_rangeOfString__0269d838,&cf_onFullScreenDragToRect);
      local_11 = lVar1 != 0x7fffffffffffffff;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

