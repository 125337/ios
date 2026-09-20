// wcrMaskedAPIKey: @ 017e1434

/* Function Stack Size: 0x18 bytes */

ID WCRefineAISettingsViewController::wcrMaskedAPIKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_c8;
  ulong local_a8;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gn_;
    local_3c = 1;
  }
  else {
    local_50 = 4;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    local_68 = local_38;
    local_a8 = uVar2;
    if (local_50 < uVar2) {
      local_a8 = local_50;
    }
    local_60 = local_a8;
    local_48 = local_a8;
    uVar3 = local_38;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_substringFromIndex__0269d120,uVar3 - local_48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    uVar2 = local_38;
    if (uVar3 < 9) {
      pcVar4 = &cf_____;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_____,PTR_s_stringByAppendingString__0269d398,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_18 = pcVar4;
    }
    else {
      local_c8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_c8 = local_c8 - local_48;
      if (4 < local_c8) {
        local_c8 = 4;
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,local_c8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_70 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_18 = pcVar4;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

