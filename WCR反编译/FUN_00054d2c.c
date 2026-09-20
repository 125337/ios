// FUN_00054d2c @ 00054d2c

ulong FUN_00054d2c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_c8;
  undefined *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  undefined4 local_80;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined *local_58;
  undefined *local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  uVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_68 = 0xffffffffffffffff;
    local_80 = 1;
  }
  else {
    uVar2 = local_70;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rangeOfString__0269d838,&cf_<type>);
    uVar1 = local_70;
    local_90 = uVar2;
    local_88 = puVar4;
    if (uVar2 == 0x7fffffffffffffff) {
      local_68 = 0xffffffffffffffff;
      local_80 = 1;
    }
    else {
      uVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_a8 = uVar3 - local_90;
      puVar4 = PTR_s_rangeOfString_options_range__0269d130;
      local_b0 = uVar2;
      local_40 = local_a8;
      local_38 = uVar2;
      local_30 = uVar2;
      local_28 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_rangeOfString_options_range__0269d130,&cf_<_type>,0,uVar2,local_a8);
      local_a0 = uVar1;
      local_98 = puVar4;
      if ((uVar1 == 0x7fffffffffffffff) || (uVar1 <= local_90)) {
        local_68 = 0xffffffffffffffff;
        local_80 = 1;
      }
      else {
        local_c0 = local_88 + local_90;
        uStack_b8 = (uVar1 - local_90) - (long)local_88;
        local_60 = uStack_b8;
        local_58 = local_c0;
        local_50 = local_c0;
        local_48 = uStack_b8;
        if (uStack_b8 < 0x41) {
          uVar1 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_substringWithRange__0269d138,local_c0,uStack_b8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_integerValue_026ca750);
          local_80 = 1;
          local_68 = uVar1;
          _objc_storeStrong(&local_c8,0);
        }
        else {
          local_68 = 0xffffffffffffffff;
          local_80 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_70,0);
  return local_68;
}

