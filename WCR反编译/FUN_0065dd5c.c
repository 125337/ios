// FUN_0065dd5c @ 0065dd5c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_0065dd5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_1a8;
  undefined *local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_168;
  undefined *local_160;
  long lStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  long lStack_138;
  undefined *local_120;
  undefined *local_118;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  long lStack_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_c0 = (undefined *)0x0;
  _objc_storeStrong(&local_c0,param_1);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_b8 = (undefined *)0x7fffffffffffffff;
    local_d0 = 1;
  }
  else {
    puVar1 = local_c0;
    puVar2 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_e0 = puVar1;
    local_d8 = puVar2;
    if (puVar1 == (undefined *)0x7fffffffffffffff) {
      local_b8 = (undefined *)0x7fffffffffffffff;
      local_d0 = 1;
    }
    else {
      puVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      lStack_e8 = (long)puVar2 - (long)local_e0;
      puVar2 = local_c0;
      puVar3 = PTR_s_rangeOfString_options_range__0269d130;
      local_f0 = puVar1;
      local_50 = lStack_e8;
      local_48 = puVar1;
      local_40 = puVar1;
      local_38 = lStack_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_rangeOfString_options_range__0269d130,&cf_<type>,1,puVar1,lStack_e8)
      ;
      local_100 = puVar2;
      puStack_f8 = puVar3;
      if (puVar2 == (undefined *)0x7fffffffffffffff) {
        local_b8 = (undefined *)0x7fffffffffffffff;
        local_d0 = 1;
      }
      else {
        puVar1 = local_c0;
        puVar2 = PTR_s_rangeOfString_options_range__0269d130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_rangeOfString_options_range__0269d130,&cf_<refermsg,1,local_f0,
                   lStack_e8);
        local_120 = puVar1;
        local_118 = puVar2;
        if ((puVar1 != (undefined *)0x7fffffffffffffff) && (puVar1 < local_100)) {
          lStack_158 = (long)puVar1 - (long)local_e0;
          local_68 = local_e0;
          local_60 = local_e0;
          local_140 = local_e0;
          local_160 = local_e0;
          puVar1 = local_c0;
          puVar2 = PTR_s_rangeOfString_options_range__0269d130;
          lStack_138 = lStack_158;
          local_70 = lStack_158;
          local_58 = lStack_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_rangeOfString_options_range__0269d130,&cf_<type>,1,local_e0,
                     lStack_158);
          local_150 = puVar1;
          puStack_148 = puVar2;
          local_100 = puVar1;
          puStack_f8 = puVar2;
          if (puVar1 == (undefined *)0x7fffffffffffffff) {
            local_b8 = (undefined *)0x7fffffffffffffff;
            local_d0 = 1;
            goto LAB_0065e338;
          }
        }
        puVar2 = local_c0;
        puStack_178 = puStack_f8;
        local_180 = local_100;
        puVar1 = local_100 + (long)puStack_f8;
        puVar3 = local_c0;
        local_168 = puVar1;
        local_30 = local_180;
        local_28 = puStack_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
        local_198 = (long)puVar3 - (long)local_168;
        puVar3 = PTR_s_rangeOfString_options_range__0269d130;
        local_1a0 = puVar1;
        local_90 = local_198;
        local_88 = puVar1;
        local_80 = puVar1;
        local_78 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_rangeOfString_options_range__0269d130,&cf_<_type>,1,puVar1,local_198
                  );
        local_190 = puVar2;
        local_188 = puVar3;
        if ((puVar2 == (undefined *)0x7fffffffffffffff) || (puVar2 <= local_168)) {
          local_b8 = (undefined *)0x7fffffffffffffff;
          local_d0 = 1;
        }
        else {
          local_b0 = (long)puVar2 - (long)local_168;
          local_a8 = local_168;
          local_a0 = local_168;
          puVar2 = local_c0;
          local_98 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_substringWithRange__0269d138,local_168,local_b0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_1a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_1a8;
          local_1a8 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar1 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
          if (puVar1 == (undefined *)0x0) {
            local_b8 = (undefined *)0x7fffffffffffffff;
          }
          else {
            puVar1 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_integerValue_026ca750);
            local_b8 = puVar1;
          }
          local_d0 = 1;
          _objc_storeStrong(&local_1a8,0);
        }
      }
    }
  }
LAB_0065e338:
  _objc_storeStrong(&local_c0,0);
  return local_b8;
}

