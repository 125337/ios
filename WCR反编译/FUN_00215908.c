// FUN_00215908 @ 00215908

byte FUN_00215908(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_48;
  ulong local_40;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = lVar2;
  local_40 = 0;
  do {
    if (local_38 == 0 || 0x17 < local_40) {
      local_21 = 0;
      break;
    }
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_rangeOfString__0269d838,&cf_WCImageFullScreenViewContainer);
    bVar1 = true;
    if (lVar2 == 0x7fffffffffffffff) {
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_rangeOfString__0269d838,&cf_WCMediaImageScrollView);
      bVar1 = true;
      if (lVar2 == 0x7fffffffffffffff) {
        lVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_rangeOfString__0269d838,&cf_MMImgFullScreenVideoView);
        bVar1 = true;
        if (lVar2 == 0x7fffffffffffffff) {
          lVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_rangeOfString__0269d838,&cf_WCC2CVideoThumbImageView);
          bVar1 = true;
          if (lVar2 == 0x7fffffffffffffff) {
            lVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_rangeOfString__0269d838,&cf_WCPlayerView);
            bVar1 = lVar2 != 0x7fffffffffffffff;
          }
        }
      }
    }
    if (!bVar1) {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_38;
      local_38 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      local_40 = local_40 + 1;
    }
    else {
      local_21 = 1;
    }
    _objc_storeStrong(&local_48,0);
  } while (!bVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

