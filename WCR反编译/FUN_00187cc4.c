// FUN_00187cc4 @ 00187cc4

void FUN_00187cc4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_d0;
  bool local_69;
  cfstringStruct *local_68;
  ushort local_5a;
  ulong local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_section;
    local_48 = 1;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithCapacity__0269fc10,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    for (local_58 = 0; uVar2 = local_58, uVar4 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0), uVar2 < uVar4;
        local_58 = local_58 + 1) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,local_58);
      pcVar3 = local_50;
      local_5a = (ushort)uVar2;
      if ((((((local_5a < 0x41) || (bVar1 = true, 0x5a < local_5a)) &&
            ((local_5a < 0x61 || (bVar1 = true, 0x7a < local_5a)))) &&
           ((local_5a < 0x30 || (bVar1 = true, 0x39 < local_5a)))) &&
          ((local_5a < 0x4e00 || (bVar1 = true, 0x9fff < local_5a)))) &&
         (bVar1 = true, local_5a != 0x5f)) {
        bVar1 = local_5a == 0x2d;
      }
      if (!bVar1) {
        local_d0 = &cf__;
      }
      else {
        local_d0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithCharacters_length__0269fc18,
                   &local_5a,1);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_d0;
      }
      local_69 = bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_appendString__0269ccb0,local_d0);
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
    }
    pcVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (pcVar5 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hash_0269ec90);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_s__lx);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar3;
    }
    else {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
      local_28 = pcVar3;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

