// stripXHSImageWatermarkSuffix: @ 01020ae4

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::stripXHSImageWatermarkSuffix_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  ulong local_48;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_18 = local_30;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    puVar3 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString_options__0269d118,&::cf__,4);
    uVar1 = local_30;
    local_48 = uVar2;
    local_40 = puVar3;
    if ((uVar2 == 0x7fffffffffffffff) || (uVar2 < 0xc)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,uVar2 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_h5_);
      if (((uVar1 & 1) == 0) &&
         (((uVar1 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_nd_),
           (uVar1 & 1) == 0 &&
           (uVar1 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_containsString__0269d0b0,&cf_watermark), (uVar1 & 1) == 0)) &&
          (uVar2 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_wlteh),
          uVar1 = local_30, (uVar2 & 1) == 0)))) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

