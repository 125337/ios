// _WCRefineEnhancedAdBlockObjectIsFinderCommentAd @ 00f5420c

byte _WCRefineEnhancedAdBlockObjectIsFinderCommentAd(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_00f543b8;
  }
  uVar1 = local_20;
  FUN_00f53ff4(local_20,PTR_s_commentInfo_026ac588);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
LAB_00f542dc:
    uVar1 = local_20;
    FUN_00f53ff4(local_20,PTR_s_commentAdImageUrl_026ac598);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       uVar1 == 0)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    FUN_00f53ff4(uVar1,PTR_s_advertisementInfo_026ac590);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      local_11 = 1;
    }
    local_24 = (uint)(uVar1 != 0);
    local_38 = uVar1;
    _objc_storeStrong(&local_38,0);
    if (local_24 == 0) goto LAB_00f542dc;
  }
  _objc_storeStrong(&local_30,0);
LAB_00f543b8:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

