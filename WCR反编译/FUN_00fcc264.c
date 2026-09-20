// FUN_00fcc264 @ 00fcc264

void FUN_00fcc264(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_2f8;
  cfstringStruct *local_260;
  cfstringStruct *local_248;
  cfstringStruct *local_208;
  undefined *local_200;
  long local_1f8;
  cfstringStruct *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  undefined *puStack_1d8;
  cfstringStruct *local_1d0;
  long local_1c8;
  cfstringStruct *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined *local_1a0;
  cfstringStruct *local_198;
  undefined *puStack_190;
  undefined *local_188;
  cfstringStruct *local_180;
  undefined *puStack_178;
  undefined *local_168;
  undefined *local_160;
  int local_154;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  long local_128;
  long local_120;
  cfstringStruct *local_118;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  long local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_130 = (cfstringStruct *)0x0;
  local_128 = param_4;
  local_120 = param_5;
  _objc_storeStrong(&local_130,param_1);
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_2);
  local_140 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_140,param_3);
  pcVar2 = local_130;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_248 = &cf___;
  }
  else {
    local_248 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_138;
  local_148 = local_248;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_260 = &cf___;
  }
  else {
    local_260 = local_138;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_260;
  pcVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if (((pcVar2 == (cfstringStruct *)0x0) ||
      (pcVar2 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
      pcVar2 == (cfstringStruct *)0x0)) || (local_128 == 0x7fffffffffffffff)) {
    pcVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = pcVar2;
    local_154 = 1;
    goto LAB_00fccae4;
  }
  local_30 = local_128;
  local_28 = local_120;
  pcVar2 = (cfstringStruct *)(local_128 + local_120);
  pcVar3 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  pcVar5 = local_148;
  if (pcVar3 < pcVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = pcVar5;
    local_154 = 1;
    goto LAB_00fccae4;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  pcVar5 = local_150;
  local_160 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_148;
  puVar1 = PTR_s_rangeOfString_options_range__0269d130;
  local_168 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_rangeOfString_options_range__0269d130,local_160,1,local_128,local_120,
             param_7,param_8,pcVar5);
  local_180 = pcVar2;
  puStack_178 = puVar1;
  if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    pcVar5 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_148;
    puVar4 = PTR_s_rangeOfString_options_range__0269d130;
    local_188 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_rangeOfString_options_range__0269d130,puVar1,1,local_128,local_120,
               param_7,param_8,pcVar5);
    local_198 = pcVar2;
    puStack_190 = puVar4;
    local_180 = pcVar2;
    puStack_178 = puVar4;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar5 = local_148;
      puVar1 = PTR_s_rangeOfString_options_range__0269d130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_rangeOfString_options_range__0269d130,&cf_<_refermsg>,1,local_128,
                 local_120);
      pcVar2 = local_148;
      local_1a8 = pcVar5;
      local_1a0 = puVar1;
      if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = pcVar2;
        local_154 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_mutableCopy_0269d8a0);
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_1b0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_<__>__<___>);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_insertString_atIndex__026ad120,puVar1,local_1a8);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        pcVar2 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_copy_0269d150);
        local_154 = 1;
        local_118 = pcVar2;
        _objc_storeStrong(&local_1b0,0);
      }
    }
    else {
      local_40 = local_128;
      local_38 = local_120;
      local_1c8 = (local_128 + local_120) - (long)pcVar2;
      pcVar5 = local_148;
      puVar1 = PTR_s_rangeOfString_options_range__0269d130;
      local_1d0 = pcVar2;
      local_b0 = local_1c8;
      local_a8 = pcVar2;
      local_a0 = pcVar2;
      local_98 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,pcVar2,local_1c8);
      pcVar2 = local_148;
      local_1c0 = pcVar5;
      local_1b8 = puVar1;
      if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = pcVar2;
        local_154 = 1;
      }
      else {
        puStack_1d8 = (undefined *)((long)pcVar5 + (1 - (long)local_180));
        local_c8 = local_180;
        local_c0 = local_180;
        local_1e0 = local_180;
        local_154 = 0;
        puStack_178 = puStack_1d8;
        local_d0 = puStack_1d8;
        local_b8 = puStack_1d8;
      }
    }
    _objc_storeStrong(&local_188,0);
    if (local_154 == 0) goto LAB_00fcc8bc;
  }
  else {
LAB_00fcc8bc:
    local_50 = local_180;
    local_48 = puStack_178;
    local_200 = puStack_178 + (long)local_180;
    local_60 = local_128;
    local_58 = local_120;
    local_70 = local_180;
    local_68 = puStack_178;
    local_1f8 = (local_128 + local_120) - (long)(puStack_178 + (long)local_180);
    pcVar5 = local_148;
    puVar1 = PTR_s_rangeOfString_options_range__0269d130;
    local_f0 = local_1f8;
    local_e8 = local_200;
    local_e0 = local_200;
    local_d8 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_rangeOfString_options_range__0269d130,local_168,1,local_200,local_1f8
              );
    pcVar2 = local_148;
    local_1f0 = pcVar5;
    local_1e8 = puVar1;
    if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = pcVar2;
      local_154 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_mutableCopy_0269d8a0);
      local_80 = local_180;
      local_78 = puStack_178;
      local_108 = puStack_178 + (long)local_180;
      local_90 = local_180;
      local_88 = puStack_178;
      local_110 = (long)local_1f0 - (long)(puStack_178 + (long)local_180);
      if (local_140 == (cfstringStruct *)0x0) {
        local_2f8 = &cf___;
      }
      else {
        local_2f8 = local_140;
      }
      local_208 = pcVar2;
      local_100 = local_108;
      local_f8 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_replaceCharactersInRange_withStr_0269ef70,local_108,local_110,
                 local_2f8);
      pcVar2 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_copy_0269d150);
      local_154 = 1;
      local_118 = pcVar2;
      _objc_storeStrong(&local_208,0);
    }
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
LAB_00fccae4:
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_autoreleaseReturnValue(local_118);
  return;
}

