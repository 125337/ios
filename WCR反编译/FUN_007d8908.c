// FUN_007d8908 @ 007d8908

void FUN_007d8908(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined1 local_7c;
  undefined1 local_7b;
  ushort local_7a;
  ulong local_78;
  undefined *local_70;
  ulong local_68;
  undefined4 local_60;
  ulong local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_48 = (undefined *)0x0;
    local_60 = 1;
  }
  else {
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar1;
    for (local_78 = 0; uVar2 = local_78, uVar3 = local_68,
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0), uVar2 < uVar3;
        local_78 = local_78 + 1) {
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_characterAtIndex__0269fa18,local_78);
      local_7a = (ushort)uVar2;
      local_7b = 0x60 < local_7a && local_7a < 0x7b;
      local_7c = 0x2f < local_7a && local_7a < 0x3a;
      if (((bool)local_7b) || ((bool)local_7c)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_appendFormat__0269d148,&cf__c);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_appendString__0269ccb0,&cf__);
      }
    }
    while (puVar4 = local_70,
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf___),
          puVar1 = local_70, ((ulong)puVar4 & 1) != 0) {
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_90 = 0;
      local_88 = puVar4;
      local_40 = puVar4;
      local_28 = puVar4;
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
    local_98 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      local_48 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_custom_plugin_legacy___);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar1;
    }
    local_60 = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

