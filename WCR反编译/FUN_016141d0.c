// FUN_016141d0 @ 016141d0

void FUN_016141d0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_tap);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_doubleTap);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_longPress);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_swipeUp);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_swipeDown);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_isEqualToString__0269ccc8,&cf_swipeLeft);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isEqualToString__0269ccc8,&cf_swipeRight);
              if ((uVar1 & 1) == 0) {
                local_18 = (cfstringStruct *)0x0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_ballGestureSwipeRight;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_ballGestureSwipeLeft;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_ballGestureSwipeDown;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_ballGestureSwipeUp;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_ballGestureLongPress;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_ballGestureDoubleTap;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ballGestureTap;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

