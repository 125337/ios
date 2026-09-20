// FUN_014ff8b4 @ 014ff8b4

undefined1 * FUN_014ff8b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong local_178;
  undefined1 *local_150;
  undefined1 *local_130;
  undefined *puStack_128;
  undefined1 *local_118;
  undefined1 *local_110;
  long local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  ulong local_f0;
  undefined1 *local_e8;
  undefined *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined1 *local_b8;
  undefined *local_b0;
  undefined4 local_a4;
  undefined *local_a0;
  undefined1 *local_98;
  long local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  long local_78;
  long local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  ulong local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  ulong local_38;
  undefined1 *local_30;
  undefined *local_28;
  
  local_a0 = (undefined1 *)0x0;
  _objc_storeStrong(&local_a0,param_1);
  puVar2 = local_a0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
     puVar2 <= (undefined1 *)((long)&MACH_HEADER.cputype + 3))) {
    local_98 = (undefined1 *)0xffffffffffffffff;
    local_a4 = 1;
  }
  else {
    puVar2 = local_a0;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_b8 = puVar2;
    local_b0 = puVar1;
    if (puVar2 == (undefined1 *)0x7fffffffffffffff) {
      local_98 = (undefined1 *)0xffffffffffffffff;
      local_a4 = 1;
    }
    else {
      local_c8 = 0xf0;
      puVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      local_d0 = (long)puVar2 - (long)local_b8;
      local_178 = local_d0;
      if (local_c8 < local_d0) {
        local_178 = local_c8;
      }
      local_d8 = local_178;
      local_c0 = local_178;
      local_48 = local_b8;
      local_50 = local_178;
      local_40 = local_b8;
      local_38 = local_178;
      local_f8 = local_b8;
      local_f0 = local_178;
      puVar2 = local_a0;
      puVar1 = PTR_s_rangeOfString_options_range__0269d130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,local_b8,local_178);
      local_e8 = puVar2;
      local_e0 = puVar1;
      if (puVar2 == (undefined1 *)0x7fffffffffffffff) {
        local_98 = (undefined1 *)0xffffffffffffffff;
        local_a4 = 1;
      }
      else {
        local_108 = (long)puVar2 - (long)local_b8;
        local_68 = local_b8;
        local_60 = local_b8;
        local_110 = local_b8;
        local_130 = local_a0;
        local_70 = local_108;
        local_58 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_substringWithRange__0269d138,local_b8,local_108);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        puStack_128 = PTR_s_rangeOfString__0269d838;
        local_118 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_rangeOfString__0269d838,&cf_type__);
        if (local_130 == (undefined1 *)0x7fffffffffffffff) {
          local_130 = local_118;
          puStack_128 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_rangeOfString__0269d838,&cf_type__);
        }
        if (local_130 == (undefined1 *)0x7fffffffffffffff) {
          local_98 = (undefined1 *)0xffffffffffffffff;
        }
        else {
          local_30 = local_130;
          local_28 = puStack_128;
          puVar4 = local_130 + (long)puStack_128;
          for (local_150 = puVar4; puVar3 = local_100,
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
              local_150 < puVar3; local_150 = local_150 + 1) {
            puVar3 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_characterAtIndex__0269fa18,local_150);
            if (((ushort)puVar3 < 0x30) || (0x39 < (ushort)puVar3)) break;
          }
          if (local_150 == puVar4) {
            local_98 = (undefined1 *)0xffffffffffffffff;
          }
          else {
            local_90 = (long)local_150 - (long)puVar4;
            puVar3 = local_100;
            local_88 = puVar4;
            local_80 = puVar4;
            local_78 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_substringWithRange__0269d138,puVar4,local_90);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            FUN_014ff400();
            local_98 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
        }
        local_a4 = 1;
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_100,0);
      }
    }
  }
  _objc_storeStrong(&local_a0,0);
  return local_98;
}

