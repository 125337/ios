// FUN_002238b8 @ 002238b8

byte FUN_002238b8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_38;
  long local_30;
  uint local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    do {
      if (local_30 == 0) {
        local_11 = 0;
        local_24 = 1;
        break;
      }
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar2,PTR_s_rangeOfString__0269d838,&cf_WCC2CImageScrollView);
      bVar1 = true;
      if (lVar2 == 0x7fffffffffffffff) {
        lVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_rangeOfString__0269d838,&cf_MsgImgFullScreenContainer);
        bVar1 = lVar2 != 0x7fffffffffffffff;
      }
      if (!bVar1) {
        lVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_30;
        local_30 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      else {
        local_11 = 1;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_38,0);
    } while (local_24 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

