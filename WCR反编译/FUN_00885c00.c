// FUN_00885c00 @ 00885c00

byte FUN_00885c00(undefined8 param_1)

{
  short sVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_d1);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_d1),
       (uVar3 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      local_38 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar4;
      for (local_48 = 0; uVar3 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0), local_48 < uVar3;
          local_48 = local_48 + 1) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_characterAtIndex__0269fa18,local_48);
        sVar1 = (short)uVar3;
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterIsMember__026a20a0,sVar1);
        if ((((((ulong)puVar2 & 1) == 0) && (sVar1 != 0x200b)) && (sVar1 != 0x200c)) &&
           ((sVar1 != 0x200d && (sVar1 != -0x101)))) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendFormat__0269d148,&cf__C);
        }
      }
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_d1);
      local_11 = (byte)puVar2 & 1;
      local_30 = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_11 = 1;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

