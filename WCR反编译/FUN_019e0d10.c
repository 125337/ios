// FUN_019e0d10 @ 019e0d10

void FUN_019e0d10(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  uint local_74;
  cfstringStruct *local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_019e0bec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf___;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_extralight);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_ultralight)
       , (uVar1 & 1) == 0)) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_thin);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_hairline)
         , (uVar1 & 1) == 0)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_light);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_containsString__0269d0b0,&cf_demibold);
          if (((uVar1 & 1) == 0) &&
             (uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_containsString__0269d0b0,&cf_semibold), (uVar1 & 1) == 0)) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_containsString__0269d0b0,&cf_extrabold);
            if (((uVar1 & 1) == 0) &&
               (uVar1 = local_28,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_28,PTR_s_containsString__0269d0b0,&cf_ultrabold), (uVar1 & 1) == 0))
            {
              uVar1 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_containsString__0269d0b0,&cf_black);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_containsString__0269d0b0,&cf_heavy);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_28;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_containsString__0269d0b0,&cf_bold);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = local_28;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_28,PTR_s_containsString__0269d0b0,&cf_medium);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = local_28;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_28,PTR_s_containsString__0269d0b0,&cf_regular);
                      if ((((uVar1 & 1) != 0) ||
                          (uVar1 = local_28,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_28,PTR_s_containsString__0269d0b0,&cf_normal),
                          (uVar1 & 1) != 0)) ||
                         (uVar1 = local_28,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_28,PTR_s_containsString__0269d0b0,&cf_book),
                         (uVar1 & 1) != 0)) {
                        _objc_storeStrong(&local_38,&cf_Regular);
                      }
                    }
                    else {
                      _objc_storeStrong(&local_38,&cf_Medium);
                    }
                  }
                  else {
                    _objc_storeStrong(&local_38,&cf_Bold);
                  }
                }
                else {
                  _objc_storeStrong(&local_38,&cf_Heavy);
                }
              }
              else {
                _objc_storeStrong(&local_38,&cf_Black);
              }
            }
            else {
              _objc_storeStrong(&local_38,&cf_ExtraBold);
            }
          }
          else {
            _objc_storeStrong(&local_38,&cf_SemiBold);
          }
        }
        else {
          _objc_storeStrong(&local_38,&cf_Light);
        }
      }
      else {
        _objc_storeStrong(&local_38,&cf_Thin);
      }
    }
    else {
      _objc_storeStrong(&local_38,&cf_ExtraLight);
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_italic);
    local_74 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_oblique);
      local_74 = (uint)uVar1;
    }
    if (((local_74 & 1) == 0) ||
       (pcVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       pcVar4 == (cfstringStruct *)0x0)) {
      pcVar4 = local_38;
      if ((local_74 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar4;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_Italic;
      }
    }
    else {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingString__0269d398,&cf_Italic);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

