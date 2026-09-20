// titleForBallGestureKey: @ 01614570

/* Function Stack Size: 0x18 bytes */

ID WCRSuperFloatProfileStore::titleForBallGestureKey_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_80;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_tap);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_doubleTap);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_longPress);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_swipeUp);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_swipeDown);
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_swipeLeft);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,&cf_swipeRight);
              if (((ulong)pcVar1 & 1) == 0) {
                if (local_30 == (cfstringStruct *)0x0) {
                  local_80 = &::cf___;
                }
                else {
                  local_80 = local_30;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = local_80;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_SnKbR;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf__nKbR;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_NnKbR;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_NnKbR;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__cKbR;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_SQKbR;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_pQKbR;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

