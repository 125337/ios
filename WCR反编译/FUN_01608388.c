// FUN_01608388 @ 01608388

void FUN_01608388(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_registered;
    local_24 = 1;
    goto LAB_01608794;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf____);
  if ((((uVar1 & 1) != 0) ||
      (uVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_http),
      (uVar1 & 1) != 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_weixin),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_url;
    local_24 = 1;
    goto LAB_01608794;
  }
  uVar1 = local_20;
  _NSClassFromString();
  local_30 = uVar1;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isSubclassOfClass__0269e590,puVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_controller;
      local_24 = 1;
      goto LAB_01608794;
    }
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_on);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__),
     (uVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_registered;
    local_24 = 1;
    goto LAB_01608794;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_switch_);
  if (((((uVar3 & 1) == 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_wcr_),
       (uVar1 & 1) == 0)) &&
      (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
      uVar1 != 2)) ||
     (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
     uVar1 < 2)) {
LAB_0160872c:
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_selector;
    local_24 = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((((uVar1 == 0) ||
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__),
         (uVar1 & 1) != 0)) || (uVar1 = local_40, _NSClassFromString(), uVar1 != 0)) ||
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_on),
       (uVar1 & 1) != 0)) {
      local_24 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_switch;
      local_24 = 1;
    }
    _objc_storeStrong(&local_40,0);
    if (local_24 == 0) goto LAB_0160872c;
  }
  _objc_storeStrong(&local_38,0);
LAB_01608794:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

