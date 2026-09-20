// FUN_00fbaa64 @ 00fbaa64

cfstringStruct * FUN_00fbaa64(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  undefined *local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  bool local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  pcVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_e8 = &cf___;
  }
  else {
    local_e8 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  if (local_e8 < (cfstringStruct *)0x8) {
    local_48 = (cfstringStruct *)0xffffffffffffffff;
    local_5c = 1;
  }
  else {
    pcVar2 = local_58;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_f8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      local_f8 = (cfstringStruct *)0x0;
    }
    local_78 = local_f8;
    pcVar3 = local_58;
    local_70 = pcVar2;
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_89 = false;
    if (pcVar3 <= local_f8) {
      local_108 = local_58;
    }
    else {
      local_108 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringFromIndex__0269d120,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_108;
    }
    local_89 = pcVar3 > local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_108;
    if ((local_89 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    pcVar2 = local_80;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
    local_a0 = pcVar2;
    local_98 = puVar1;
    if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
      pcVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_substringToIndex__0269d6c0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_80;
      local_80 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_80;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString_options__0269d118,&cf_<type>)
    ;
    pcVar3 = local_80;
    puVar4 = PTR_s_rangeOfString_options__0269d118;
    local_b0 = pcVar2;
    local_a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_rangeOfString_options__0269d118,&cf_<_type>,1);
    local_c0 = pcVar3;
    local_b8 = puVar4;
    if (((local_b0 == (cfstringStruct *)0x7fffffffffffffff) ||
        (pcVar3 == (cfstringStruct *)0x7fffffffffffffff)) || (pcVar3 <= local_b0)) {
      local_48 = (cfstringStruct *)0xffffffffffffffff;
      local_5c = 1;
    }
    else {
      local_d0 = local_a8 + (long)local_b0;
      local_c8 = (long)pcVar3 + (-(long)local_a8 - (long)local_b0);
      local_40 = local_c8;
      local_38 = local_d0;
      local_30 = local_d0;
      local_28 = local_c8;
      if (local_c8 < 0x41) {
        pcVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_substringWithRange__0269d138,local_d0,local_c8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_integerValue_026ca750);
        local_5c = 1;
        local_48 = pcVar2;
        _objc_storeStrong(&local_d8,0);
      }
      else {
        local_48 = (cfstringStruct *)0xffffffffffffffff;
        local_5c = 1;
      }
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return local_48;
}

