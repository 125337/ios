// FUN_016ad17c @ 016ad17c

ulong FUN_016ad17c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_120;
  ulong local_100;
  ulong local_c8;
  undefined *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined *local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined *local_68;
  undefined4 local_60;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar1 < 8) {
    local_48 = 0xffffffffffffffff;
    local_60 = 1;
  }
  else {
    uVar1 = local_50;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&cf_<appmsg);
    local_100 = uVar1;
    if (uVar1 == 0x7fffffffffffffff) {
      local_100 = 0;
    }
    local_78 = local_100;
    local_89 = 0;
    uVar2 = local_50;
    local_70 = uVar1;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (local_100 < uVar2) {
      local_120 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_120;
    }
    else {
      local_120 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_120;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    uVar1 = local_80;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString__0269d838,&cf_<type>);
    uVar2 = local_80;
    puVar4 = PTR_s_rangeOfString__0269d838;
    local_a0 = uVar1;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString__0269d838,&cf_<_type>);
    local_b0 = uVar2;
    local_a8 = puVar4;
    if (((local_a0 == 0x7fffffffffffffff) || (uVar2 == 0x7fffffffffffffff)) || (uVar2 <= local_a0))
    {
      local_48 = 0xffffffffffffffff;
      local_60 = 1;
    }
    else {
      local_c0 = local_98 + local_a0;
      uStack_b8 = (uVar2 - local_a0) - (long)local_98;
      local_40 = uStack_b8;
      local_38 = local_c0;
      local_30 = local_c0;
      local_28 = uStack_b8;
      if (uStack_b8 < 0x41) {
        uVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_substringWithRange__0269d138,local_c0,uStack_b8);
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
        local_c8 = uVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_integerValue_026ca750);
        local_60 = 1;
        local_48 = uVar1;
        _objc_storeStrong(&local_c8,0);
      }
      else {
        local_48 = 0xffffffffffffffff;
        local_60 = 1;
      }
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_50,0);
  return local_48;
}

