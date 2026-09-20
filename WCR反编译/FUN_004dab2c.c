// FUN_004dab2c @ 004dab2c

void FUN_004dab2c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  long local_120;
  cfstringStruct *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  long local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  long local_88;
  long local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  pcVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = &cf___;
    local_e8 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = &cf_<_wc_custom_link_;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = &cf_<__wc_custom_link_>;
    pcVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsString__0269d0b0,local_f0);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_d0;
      FUN_004da8f0(local_d0,local_d8,&cf___);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = 1;
      local_c8 = pcVar1;
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_108 = (cfstringStruct *)0x0;
      local_100 = pcVar1;
      while( true ) {
        pcVar1 = local_108;
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        pcVar3 = local_d0;
        pcVar5 = local_f0;
        pcVar4 = local_108;
        if (pcVar2 <= pcVar1) break;
        pcVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        local_120 = (long)pcVar1 - (long)local_108;
        local_58 = pcVar4;
        local_50 = pcVar4;
        local_128 = pcVar4;
        puVar6 = PTR_s_rangeOfString_options_range__0269d130;
        local_60 = local_120;
        local_48 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_rangeOfString_options_range__0269d130,pcVar5,0,pcVar4,local_120);
        local_118 = pcVar3;
        local_110 = puVar6;
        if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
          pcVar4 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_substringFromIndex__0269d120,local_108);
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
          pcVar1 = local_100;
          if (pcVar4 != (cfstringStruct *)0x0) {
            pcVar4 = local_130;
            FUN_004da8f0(local_130,local_d8,&cf___);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          local_e8 = 3;
          _objc_storeStrong(&local_130,0);
          break;
        }
        if (local_108 < pcVar3) {
          local_80 = (long)pcVar3 - (long)local_108;
          local_78 = local_108;
          local_70 = local_108;
          pcVar4 = local_d0;
          local_68 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_substringWithRange__0269d138,local_108,local_80);
          _objc_retainAutoreleasedReturnValue();
          local_138 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
          pcVar1 = local_100;
          if (pcVar4 != (cfstringStruct *)0x0) {
            pcVar4 = local_138;
            FUN_004da8f0(local_138,local_d8,&cf___);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          _objc_storeStrong(&local_138,0);
        }
        pcVar5 = local_d0;
        pcVar4 = local_f8;
        pcVar1 = local_118;
        pcVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        local_a0 = (long)pcVar3 - (long)local_118;
        local_98 = pcVar1;
        local_90 = pcVar1;
        puVar6 = PTR_s_rangeOfString_options_range__0269d130;
        local_88 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_rangeOfString_options_range__0269d130,pcVar4,0,pcVar1,local_a0);
        pcVar1 = local_100;
        if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
          pcVar4 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_substringFromIndex__0269d120,local_118);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendString__0269ccb0);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          break;
        }
        local_c0 = puVar6 + ((long)&pcVar5->field0_0x0 - (long)local_118);
        local_b8 = local_118;
        local_b0 = local_118;
        pcVar4 = local_d0;
        local_a8 = local_c0;
        local_30 = pcVar5;
        local_28 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_substringWithRange__0269d138,local_118,local_c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendString__0269ccb0);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        local_108 = (cfstringStruct *)(puVar6 + (long)&pcVar5->field0_0x0);
        local_40 = pcVar5;
        local_38 = puVar6;
      }
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_copy_0269d150);
      local_e8 = 1;
      local_c8 = pcVar1;
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_autoreleaseReturnValue(local_c8);
  return;
}

