// FUN_0087fb64 @ 0087fb64

void FUN_0087fb64(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00872b3c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_space_s_,&cf___);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_5u);
    if (((((uVar1 & 1) == 0) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_Kb_j),
         (uVar1 & 1) == 0)) &&
        (uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_Kb_gS),
        (uVar1 & 1) == 0)) &&
       ((uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_phone),
        (uVar1 & 1) == 0 &&
        (uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_mobile),
        (uVar1 & 1) == 0)))) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_h__);
      if ((((uVar1 & 1) == 0) &&
          ((uVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_jd_),
           (uVar1 & 1) == 0 &&
           (uVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_tags),
           (uVar1 & 1) == 0)))) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_tag),
         (uVar1 & 1) == 0)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_Y_);
        if ((((((uVar1 & 1) == 0) &&
              (uVar1 = local_28,
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_P_),
              (uVar1 & 1) == 0)) &&
             (uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_c),
             (uVar1 & 1) == 0)) &&
            ((uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_containsString__0269d0b0,&cf_description), (uVar1 & 1) == 0
             && (uVar1 = local_28,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_containsString__0269d0b0,&cf_memo), (uVar1 & 1) == 0))))
           && ((uVar1 = local_28,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_28,PTR_s_isEqualToString__0269ccc8,&cf_Yl), (uVar1 & 1) == 0 &&
               (uVar1 = local_28,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_28,PTR_s_isEqualToString__0269ccc8,&cf_P_), (uVar1 & 1) == 0)))) {
          local_18 = (cfstringStruct *)0x0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_memo;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_tag;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_phone;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

