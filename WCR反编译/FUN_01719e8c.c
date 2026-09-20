// FUN_01719e8c @ 01719e8c

void FUN_01719e8c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_58;
  undefined *local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar4 = local_30, uVar2 == 0)) {
    local_18 = (undefined *)0x0;
    local_40 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    if (uVar4 == 0) {
      local_18 = (undefined *)0x0;
      local_40 = 1;
    }
    else {
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithCapacity__0269fc10,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      for (local_58 = 0; uVar4 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0), local_58 < uVar4;
          local_58 = local_58 + 1) {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_characterAtIndex__0269fa18,local_58);
        uVar1 = (ushort)uVar4;
        if (((0x2f < uVar1 && uVar1 < 0x3a) || (0x40 < uVar1 && uVar1 < 0x5b)) ||
           (0x60 < uVar1 && uVar1 < 0x7b)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendFormat__0269d148,&cf__C);
        }
      }
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isThemeBoxCode__026b3a00,local_50);
      if ((uVar4 & 1) == 0) {
        local_18 = (undefined *)0x0;
      }
      else {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
        local_18 = puVar3;
      }
      local_40 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

