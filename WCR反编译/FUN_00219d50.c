// FUN_00219d50 @ 00219d50

byte FUN_00219d50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  byte local_d4;
  long local_70 [2];
  long local_60;
  undefined *local_58;
  long local_50;
  undefined *local_48;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_s_rangeOfString__0269d838;
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_rangeOfString__0269d838,&cf_MJTemplateFullScreenViewController);
    local_50 = lVar1;
    local_48 = puVar3;
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = local_30;
      puVar3 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_rangeOfString__0269d838,&cf_WCPlayerConfigFullScreenViewController);
      local_60 = lVar1;
      local_58 = puVar3;
      if (lVar1 == 0x7fffffffffffffff) {
        lVar1 = local_20;
        FUN_0021a0b4(0);
        _objc_retainAutoreleasedReturnValue();
        local_d4 = 0;
        local_70[0] = lVar1;
        if (lVar1 != 0) {
          FUN_001cff98();
          local_d4 = (byte)lVar1;
        }
        local_11 = local_d4 & 1;
        local_24 = 1;
        _objc_storeStrong(local_70,0);
      }
      else {
        lVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_playerScene);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = lVar2 == 2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        local_24 = 1;
      }
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

