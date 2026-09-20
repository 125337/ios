// FUN_002faeac @ 002faeac

byte FUN_002faeac(undefined8 param_1)

{
  long lVar1;
  long local_30;
  undefined4 local_24;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_rangeOfString__0269d838,&cf_Backdrop);
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_rangeOfString__0269d838,&cf_VisualEffectSubview);
      local_11 = true;
      if (lVar1 == 0x7fffffffffffffff) {
        lVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_rangeOfString__0269d838,&cf_VisualEffectContentView);
        local_11 = lVar1 != 0x7fffffffffffffff;
      }
    }
    else {
      local_11 = false;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

