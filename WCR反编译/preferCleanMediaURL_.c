// preferCleanMediaURL: @ 01022a64

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::preferCleanMediaURL_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  IVar2 = local_30;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar2;
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_containsString__0269d0b0,&cf__aweme_v1_play);
    if ((((IVar2 & 1) != 0) ||
        (IVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_douyinvod)
        , (IVar2 & 1) != 0)) ||
       (IVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_playwm),
       (IVar2 & 1) != 0)) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_normalizeDouyinPlayURL__026adcf8,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_40;
      local_40 = IVar1;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stripXHSImageWatermarkSuffix__026add30,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      _objc_storeStrong(IVar2,&local_40,local_50);
    }
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_xhsRewrittenPublicImageURL__026add38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      _objc_storeStrong(IVar2,&local_40,local_58);
    }
    IVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    local_34 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

