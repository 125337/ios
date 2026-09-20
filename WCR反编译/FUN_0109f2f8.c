// FUN_0109f2f8 @ 0109f2f8

undefined1 * FUN_0109f2f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong local_170;
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
  puVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar1) {
    puVar1 = local_a0;
    puVar4 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_b8 = puVar1;
    local_b0 = puVar4;
    if (puVar1 == (undefined1 *)0x7fffffffffffffff) {
      local_98 = (undefined1 *)0xffffffffffffffff;
      local_a4 = 1;
    }
    else {
      local_c8 = 0xf0;
      puVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      local_d0 = (long)puVar1 - (long)local_b8;
      local_170 = local_d0;
      if (local_c8 < local_d0) {
        local_170 = local_c8;
      }
      local_d8 = local_170;
      local_c0 = local_170;
      local_48 = local_b8;
      local_50 = local_170;
      local_40 = local_b8;
      local_38 = local_170;
      local_f8 = local_b8;
      local_f0 = local_170;
      puVar1 = local_a0;
      puVar4 = PTR_s_rangeOfString_options_range__0269d130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,local_b8,local_170);
      local_e8 = puVar1;
      local_e0 = puVar4;
      if (puVar1 == (undefined1 *)0x7fffffffffffffff) {
        local_98 = (undefined1 *)0xffffffffffffffff;
        local_a4 = 1;
      }
      else {
        local_108 = (long)puVar1 - (long)local_b8;
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
          puVar3 = local_130 + (long)puStack_128;
          for (local_150 = puVar3; puVar2 = local_100,
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
              local_150 < puVar2; local_150 = local_150 + 1) {
            puVar2 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_characterAtIndex__0269fa18,local_150);
            if (((ushort)puVar2 < 0x30) || (0x39 < (ushort)puVar2)) break;
          }
          if (local_150 == puVar3) {
            local_98 = (undefined1 *)0xffffffffffffffff;
          }
          else {
            local_90 = (long)local_150 - (long)puVar3;
            puVar2 = local_100;
            local_88 = puVar3;
            local_80 = puVar3;
            local_78 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_substringWithRange__0269d138,puVar3,local_90);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            FUN_0109ef34();
            local_98 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
        }
        local_a4 = 1;
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_100,0);
      }
    }
  }
  else {
    local_98 = (undefined1 *)0xffffffffffffffff;
    local_a4 = 1;
  }
  _objc_storeStrong(&local_a0,0);
  return local_98;
}

