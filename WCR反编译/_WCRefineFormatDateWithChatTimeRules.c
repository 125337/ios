// _WCRefineFormatDateWithChatTimeRules @ 00f1e280

void _WCRefineFormatDateWithChatTimeRules(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a8;
  undefined *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_20;
  FUN_00f1e13c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_30,&cf_yyyy_MM_ddHH_mm_ss);
  }
  local_41 = 0;
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_80 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_80;
  }
  else {
    local_80 = local_28;
  }
  local_41 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar3 = local_30;
  _WCRefineDateFormatLooksLikePattern();
  pcVar2 = local_30;
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_48 = 1;
  }
  else {
    pcVar3 = local_30;
    FUN_00f1e558();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    FUN_00f1ed60();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_58 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringFromDate__0269d1d8,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_a8 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_a8;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_60;
      FUN_00f1f09c(local_60,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 1;
      local_18 = pcVar2;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

