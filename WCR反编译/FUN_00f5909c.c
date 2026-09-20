// FUN_00f5909c @ 00f5909c

ulong FUN_00f5909c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_18 = &DAT_028e2df0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583268);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = DAT_028e2de8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e2de8,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
    local_48 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_finder);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_channels),
       (uVar1 & 1) != 0)) {
      local_48 = 1;
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_live);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_deliver),
       (uVar1 & 1) == 0)) {
      local_48 = local_48 | 2;
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_sns);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_moment),
        (uVar1 & 1) != 0)) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_containsString__0269d0b0,&cf_timeline_support_ad), (uVar1 & 1) != 0
       )) {
      local_48 = local_48 | 4;
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_wa_);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_wxa),
        (uVar1 & 1) != 0)) ||
       ((uVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_containsString__0269d0b0,&cf_miniprogram), (uVar1 & 1) != 0 ||
        ((uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_liteapp),
         (uVar1 & 1) != 0 ||
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_splash),
         (uVar1 & 1) != 0)))))) {
      local_48 = local_48 | 8;
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_search);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_websearch),
       (uVar1 & 1) != 0)) {
      local_48 = local_48 | 0x10;
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_brand);
    if (((((uVar1 & 1) != 0) ||
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_biz),
         (uVar1 & 1) != 0)) ||
        (uVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_containsString__0269d0b0,&cf_subscription), (uVar1 & 1) != 0)) ||
       ((uVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_appmsg),
        (uVar1 & 1) != 0 ||
        (uVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_mp_),
        (uVar1 & 1) != 0)))) {
      local_48 = local_48 | 0x20;
    }
    local_28 = local_48;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_unsignedIntegerValue_026cabb8);
    local_28 = uVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

