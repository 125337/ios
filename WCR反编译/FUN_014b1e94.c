// FUN_014b1e94 @ 014b1e94

ulong FUN_014b1e94(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  bool local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined *local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  undefined *local_20;
  ulong local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar1 < 8) {
    local_38 = 0xffffffffffffffff;
    local_44 = 1;
  }
  else {
    uVar1 = local_40;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_<appmsg);
    local_b8 = uVar1;
    if (uVar1 == 0x7fffffffffffffff) {
      local_b8 = 0;
    }
    local_60 = local_b8;
    uVar2 = local_40;
    local_58 = uVar1;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_71 = false;
    if (uVar2 <= local_b8) {
      local_c8 = local_40;
    }
    else {
      local_c8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_c8;
    }
    local_71 = uVar2 > local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c8;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    uVar1 = local_68;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_<type>);
    uVar2 = local_68;
    puVar4 = PTR_s_rangeOfString__0269d838;
    local_88 = uVar1;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_<_type>);
    local_98 = uVar2;
    local_90 = puVar4;
    if (((local_88 == 0x7fffffffffffffff) || (uVar2 == 0x7fffffffffffffff)) || (uVar2 <= local_88))
    {
      local_38 = 0xffffffffffffffff;
      local_44 = 1;
    }
    else {
      local_a8 = local_80 + local_88;
      local_a0 = (uVar2 - local_88) - (long)local_80;
      local_30 = local_a0;
      local_28 = local_a8;
      local_20 = local_a8;
      local_18 = local_a0;
      if (local_a0 < 0x41) {
        uVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_substringWithRange__0269d138,local_a8,local_a0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_integerValue_026ca750);
        local_44 = 1;
        local_38 = uVar1;
        _objc_storeStrong(&local_b0,0);
      }
      else {
        local_38 = 0xffffffffffffffff;
        local_44 = 1;
      }
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_38;
}

