// FUN_01c9a7cc @ 01c9a7cc

void FUN_01c9a7cc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined1 local_64;
  undefined1 local_63;
  ushort local_62;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_38 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    for (local_60 = 0; uVar2 = local_60, uVar3 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0), uVar2 < uVar3;
        local_60 = local_60 + 1) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_characterAtIndex__0269fa18,local_60);
      local_62 = (ushort)uVar2;
      local_63 = 0x60 < local_62 && local_62 < 0x7b;
      local_64 = 0x2f < local_62 && local_62 < 0x3a;
      if (((bool)local_63) || ((bool)local_64)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_appendFormat__0269d148,&cf__c);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_appendString__0269ccb0,&cf__);
      }
    }
    while (puVar4 = local_58,
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf___),
          puVar1 = local_58, ((ulong)puVar4 & 1) != 0) {
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_78 = 0;
      local_70 = puVar4;
      local_30 = puVar4;
      local_18 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf___,&cf__,0,0,puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      local_38 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf___legacy___);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

