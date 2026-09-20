// FUN_007d80e0 @ 007d80e0

void FUN_007d80e0(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_b0;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined4 local_30;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    for (local_48 = 0; uVar3 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0), local_48 < uVar3;
        local_48 = local_48 + 1) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_characterAtIndex__0269fa18,local_48);
      uVar1 = (ushort)uVar3;
      if ((0x60 < uVar1 && uVar1 < 0x7b) || (0x2f < uVar1 && uVar1 < 0x3a)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_appendFormat__0269d148,&cf__c);
      }
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_b0 = (undefined *)0x0;
    }
    else {
      local_b0 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b0;
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

