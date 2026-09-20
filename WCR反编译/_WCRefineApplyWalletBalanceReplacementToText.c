// _WCRefineApplyWalletBalanceReplacementToText @ 00f14800

void _WCRefineApplyWalletBalanceReplacementToText(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  long local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  pcVar1 = local_50;
  _WCRefineTextLooksLikeWalletBalanceAmount();
  if ((((ulong)pcVar1 & 1) == 0) ||
     (lVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_48 = (cfstringStruct *)0x0;
    local_5c = 1;
  }
  else {
    FUN_00f14bac();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_50;
    pcVar3 = local_50;
    local_68 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_80 = 0;
    local_78 = pcVar3;
    local_40 = pcVar3;
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_firstMatchInString_options_range_0269ef48,pcVar1,0,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar2;
    if (lVar2 == 0) {
      local_48 = (cfstringStruct *)0x0;
      local_5c = 1;
    }
    else {
      puVar4 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_rangeAtIndex__0269ef20,0);
      pcVar1 = local_50;
      local_90 = lVar2;
      local_88 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_substringWithRange__0269d138,lVar2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = &cf___;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = &cf___;
      pcVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasPrefix__0269d320,&cf__);
      if ((((ulong)pcVar1 & 1) != 0) ||
         (pcVar1 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasPrefix__0269d320,&cf__),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_substringToIndex__0269d6c0,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_a0;
        local_a0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasSuffix__0269d018,&cf_CQ);
      if (((ulong)pcVar1 & 1) != 0) {
        _objc_storeStrong(&local_a8,&cf_CQ);
      }
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_b0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByReplacingCharactersInRan_026a43b0,local_90,local_88,puVar4);
      _objc_retainAutoreleasedReturnValue();
      local_5c = 1;
      local_48 = pcVar1;
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

