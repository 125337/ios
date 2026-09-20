// FUN_00fcb09c @ 00fcb09c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fcb09c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_268;
  cfstringStruct *local_250;
  cfstringStruct *local_1f8;
  undefined *local_1f0;
  long local_1e8;
  cfstringStruct *local_1e0;
  undefined *local_1d8;
  cfstringStruct *local_1d0;
  undefined *puStack_1c8;
  cfstringStruct *local_1c0;
  long local_1b8;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  undefined *puStack_198;
  cfstringStruct *local_190;
  undefined *puStack_188;
  undefined *local_178;
  undefined *local_170;
  undefined4 local_168;
  bool local_161;
  cfstringStruct *local_160;
  byte local_151;
  undefined *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined8 local_118;
  undefined8 local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  cfstringStruct *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  long local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_130 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_2);
  pcVar3 = local_130;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_250 = &cf___;
  }
  else {
    local_250 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_138;
  local_140 = local_250;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_268 = local_138;
  local_151 = 0;
  local_161 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_268 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_160 = local_268;
  }
  local_161 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_268;
  if ((local_161 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  pcVar3 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if ((pcVar3 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = &cf___;
    local_168 = 1;
    goto LAB_00fcb960;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_170 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_140;
  puVar2 = PTR_s_rangeOfString_options__0269d118;
  local_178 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_rangeOfString_options__0269d118,local_170,1)
  ;
  local_190 = pcVar3;
  puStack_188 = puVar2;
  if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_170;
    local_170 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar5 = local_140;
    puVar2 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_rangeOfString_options__0269d118,local_170,1);
    pcVar3 = local_140;
    local_1a0 = pcVar5;
    puStack_198 = puVar2;
    local_190 = pcVar5;
    puStack_188 = puVar2;
    if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = &cf___;
      local_168 = 1;
    }
    else {
      pcVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
      local_1b8 = (long)pcVar6 - (long)local_190;
      puVar2 = PTR_s_rangeOfString_options_range__0269d130;
      local_1c0 = pcVar5;
      local_80 = local_1b8;
      local_78 = pcVar5;
      local_70 = pcVar5;
      local_68 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,pcVar5,local_1b8);
      local_1b0 = pcVar3;
      local_1a8 = puVar2;
      if (pcVar3 != (cfstringStruct *)0x7fffffffffffffff) {
        puStack_1c8 = (undefined *)((long)pcVar3 + (1 - (long)local_190));
        local_98 = local_190;
        local_90 = local_190;
        local_1d0 = local_190;
        puStack_188 = puStack_1c8;
        local_a0 = puStack_1c8;
        local_88 = puStack_1c8;
        goto LAB_00fcb5cc;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = &cf___;
      local_168 = 1;
    }
  }
  else {
LAB_00fcb5cc:
    pcVar3 = local_140;
    puVar4 = local_178;
    local_30 = local_190;
    local_28 = puStack_188;
    puVar2 = puStack_188 + (long)local_190;
    pcVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    local_40 = local_190;
    local_38 = puStack_188;
    local_1e8 = (long)pcVar5 - (long)(puStack_188 + (long)local_190);
    puVar7 = PTR_s_rangeOfString_options_range__0269d130;
    local_1f0 = puVar2;
    local_c0 = local_1e8;
    local_b8 = puVar2;
    local_b0 = puVar2;
    local_a8 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_rangeOfString_options_range__0269d130,puVar4,1,puVar2,local_1e8);
    local_1e0 = pcVar3;
    local_1d8 = puVar7;
    if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = &cf___;
      local_168 = 1;
    }
    else {
      local_50 = local_190;
      local_48 = puStack_188;
      local_d8 = puStack_188 + (long)local_190;
      local_60 = local_190;
      local_58 = puStack_188;
      local_e0 = (long)pcVar3 - (long)(puStack_188 + (long)local_190);
      pcVar5 = local_140;
      local_d0 = local_d8;
      local_c8 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_substringWithRange__0269d138,local_d8,local_e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar5;
      local_1f8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
      local_f8 = 0;
      local_f0 = 0;
      local_100 = pcVar3;
      local_e8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf_<__[CDATA_[,&cf___,0x400
                 ,0,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_1f8;
      local_1f8 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_1f8;
      pcVar5 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0);
      local_118 = 0;
      local_110 = 0;
      local_120 = pcVar5;
      local_108 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf_____>,&cf___,0x400,0,
                 pcVar5);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_1f8;
      local_1f8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar3 = local_1f8;
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_128 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_168 = 1;
      _objc_storeStrong(&local_1f8,0);
    }
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
LAB_00fcb960:
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_autoreleaseReturnValue(local_128);
  return;
}

