// FUN_0197203c @ 0197203c

void FUN_0197203c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_250;
  undefined *local_238;
  undefined *local_218;
  uint local_20c;
  undefined *local_128;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_108 = 0;
  _objc_storeStrong(&local_108,param_1);
  local_110 = (undefined *)0x0;
  _objc_storeStrong(&local_110,param_2);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_3);
  puVar2 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
  local_128 = (undefined *)0x0;
  while (local_128 < puVar2) {
    local_20c = 0;
    if (local_128 + 4 <= puVar2) {
      local_38 = local_128;
      local_40 = 4;
      local_30 = local_128;
      local_28 = 4;
      puVar3 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_substringWithRange__0269d138,local_128,4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_20c = (uint)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if ((local_20c & 1) == 0) {
      puVar3 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_characterAtIndex__0269fa18,local_128);
      if ((int)puVar3 == 0x3c) {
        local_a0 = (long)puVar2 - (long)local_128;
        local_98 = local_128;
        local_90 = local_128;
        puVar3 = local_110;
        puVar4 = PTR_s_rangeOfString_options_range__0269d130;
        local_88 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,local_128,local_a0)
        ;
        uVar1 = local_108;
        local_238 = puVar2;
        if (puVar3 != (undefined *)0x7fffffffffffffff) {
          local_238 = puVar3 + (long)puVar4;
        }
        local_c0 = (long)local_238 - (long)local_128;
        local_b8 = local_128;
        local_b0 = local_128;
        puVar3 = local_110;
        local_a8 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_substringWithRange__0269d138,local_128,local_c0);
        _objc_retainAutoreleasedReturnValue();
        FUN_01973cd0(uVar1,puVar3,local_118);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_128 = local_238;
      }
      else {
        local_e0 = (long)puVar2 - (long)local_128;
        local_d8 = local_128;
        local_d0 = local_128;
        local_250 = local_110;
        local_c8 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_rangeOfString_options_range__0269d130,&cf_<,0,local_128,local_e0)
        ;
        uVar1 = local_108;
        if (local_250 == (undefined *)0x7fffffffffffffff) {
          local_250 = puVar2;
        }
        local_100 = (long)local_250 - (long)local_128;
        local_f8 = local_128;
        local_f0 = local_128;
        puVar3 = local_110;
        local_e8 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_substringWithRange__0269d138,local_128,local_100);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_01963e8c();
        _objc_retainAutoreleasedReturnValue();
        FUN_019735ac(uVar1,puVar3,puVar4,local_118,0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_128 = local_250;
      }
    }
    else {
      local_60 = (long)puVar2 - (long)local_128;
      local_58 = local_128;
      local_50 = local_128;
      puVar3 = local_110;
      puVar4 = PTR_s_rangeOfString_options_range__0269d130;
      local_48 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_rangeOfString_options_range__0269d130,&cf___>,0,local_128,local_60)
      ;
      uVar1 = local_108;
      local_218 = puVar2;
      if (puVar3 != (undefined *)0x7fffffffffffffff) {
        local_218 = puVar3 + (long)puVar4;
      }
      local_80 = (long)local_218 - (long)local_128;
      local_78 = local_128;
      local_70 = local_128;
      puVar3 = local_110;
      local_68 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_substringWithRange__0269d138,local_128,local_80);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_01973ca4();
      _objc_retainAutoreleasedReturnValue();
      FUN_019735ac(uVar1,puVar3,puVar4,local_118,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_128 = local_218;
    }
  }
  _objc_storeStrong((long)local_128 - (long)puVar2,&local_118);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  return;
}

