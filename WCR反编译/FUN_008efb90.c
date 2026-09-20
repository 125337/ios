// FUN_008efb90 @ 008efb90

void FUN_008efb90(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_100;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  pcVar1 = local_50;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
  }
  else {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_<_[CDATA[);
    if (((((ulong)pcVar1 & 1) != 0) &&
        (pcVar1 = local_58,
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasSuffix__0269d018,&cf___>),
        ((ulong)pcVar1 & 1) != 0)) &&
       (pcVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
       pcVar1 = local_58, (cfstringStruct *)0xb < pcVar2)) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_70 = (undefined1 *)((long)&pcVar2[-1].field2_0x10 + 4);
      local_38 = 9;
      local_30 = 9;
      local_78 = 9;
      local_40 = local_70;
      local_28 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringWithRange__0269d138,9,local_70);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__amp_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___38_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_58;
    FUN_008e5574();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_http___);
    if ((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_https___),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByRemovingPercentEncoding_0269d840)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasPrefix__0269d320,&cf_http___);
      if ((((ulong)pcVar1 & 1) != 0) ||
         (pcVar1 = local_80,
         (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasPrefix__0269d320,&cf_https___),
         ((ulong)pcVar1 & 1) != 0)) {
        _objc_storeStrong(&local_58,local_80);
      }
      _objc_storeStrong(&local_80,0);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_http___);
    if ((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_https___),
       ((ulong)pcVar1 & 1) == 0)) {
      local_100 = &cf___;
    }
    else {
      local_100 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_100;
  }
  local_68 = 1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

