// FUN_000da9a8 @ 000da9a8

ulong FUN_000da9a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_e0;
  ulong local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  ulong local_88;
  ulong local_80;
  undefined *local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  uVar3 = local_e0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_d8 = 0x7fffffffffffffff;
  }
  else {
    uVar4 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    uVar3 = local_e0;
    if (uVar4 == 0x7fffffffffffffff) {
      local_d8 = 0x7fffffffffffffff;
    }
    else {
      uVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
      local_70 = uVar5 - uVar4;
      puVar2 = PTR_s_rangeOfString_options_range__0269d130;
      local_68 = uVar4;
      local_60 = uVar4;
      local_58 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_rangeOfString_options_range__0269d130,&cf_<_appmsg>,1,uVar4,local_70);
      if (uVar3 == 0x7fffffffffffffff) {
        local_d8 = 0x7fffffffffffffff;
      }
      else {
        puVar1 = puVar2 + (uVar3 - uVar4);
        uVar5 = local_e0;
        puVar6 = PTR_s_rangeOfString_options_range__0269d130;
        local_90 = puVar1;
        local_88 = uVar4;
        local_80 = uVar4;
        local_78 = puVar1;
        local_30 = uVar3;
        local_28 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_rangeOfString_options_range__0269d130,&cf_<type>,1,uVar4,puVar1);
        if (uVar5 == 0x7fffffffffffffff) {
          local_d8 = 0x7fffffffffffffff;
        }
        else {
          puVar2 = puVar6 + uVar5;
          local_b0 = puVar1 + (uVar4 - (long)puVar2);
          uVar3 = local_e0;
          local_a8 = puVar2;
          local_a0 = puVar2;
          local_98 = local_b0;
          local_50 = uVar4;
          local_48 = puVar1;
          local_40 = uVar5;
          local_38 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_rangeOfString_options_range__0269d130,&cf_<_type>,1,puVar2,
                     local_b0);
          if (uVar3 == 0x7fffffffffffffff) {
            local_d8 = 0x7fffffffffffffff;
          }
          else {
            local_d0 = uVar3 - (long)puVar2;
            uVar3 = local_e0;
            local_c8 = puVar2;
            local_c0 = puVar2;
            local_b8 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_substringWithRange__0269d138,puVar2,local_d0);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_d8 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_e0,0);
  return local_d8;
}

