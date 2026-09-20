// FUN_010b1960 @ 010b1960

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010b1960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_230;
  cfstringStruct *local_1d8;
  undefined *local_1d0;
  long local_1c8;
  cfstringStruct *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  undefined *puStack_1a8;
  cfstringStruct *local_1a0;
  long local_198;
  cfstringStruct *local_190;
  undefined *local_188;
  cfstringStruct *local_180;
  undefined *puStack_178;
  cfstringStruct *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  long local_148;
  cfstringStruct *local_140;
  long local_138;
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
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  pcVar2 = local_130;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_230 = &cf___;
  }
  else {
    local_230 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = local_230;
  lVar3 = local_138;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_140;
  local_148 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (lVar3 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = &cf___;
    local_14c = 1;
    goto LAB_010b2084;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_158 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_140;
  puVar1 = PTR_s_rangeOfString_options__0269d118;
  local_160 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_rangeOfString_options__0269d118,local_158,1)
  ;
  local_170 = pcVar2;
  puStack_168 = puVar1;
  if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_158;
    local_158 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar5 = local_140;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_rangeOfString_options__0269d118,local_158,1);
    pcVar2 = local_140;
    local_180 = pcVar5;
    puStack_178 = puVar1;
    local_170 = pcVar5;
    puStack_168 = puVar1;
    if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = &cf___;
      local_14c = 1;
    }
    else {
      pcVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
      local_198 = (long)pcVar6 - (long)local_170;
      puVar1 = PTR_s_rangeOfString_options_range__0269d130;
      local_1a0 = pcVar5;
      local_80 = local_198;
      local_78 = pcVar5;
      local_70 = pcVar5;
      local_68 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,pcVar5,local_198);
      local_190 = pcVar2;
      local_188 = puVar1;
      if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
        puStack_1a8 = (undefined *)((long)pcVar2 + (1 - (long)local_170));
        local_98 = local_170;
        local_90 = local_170;
        local_1b0 = local_170;
        puStack_168 = puStack_1a8;
        local_a0 = puStack_1a8;
        local_88 = puStack_1a8;
        goto LAB_010b1d44;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = &cf___;
      local_14c = 1;
    }
  }
  else {
LAB_010b1d44:
    pcVar2 = local_140;
    puVar4 = local_160;
    local_30 = local_170;
    local_28 = puStack_168;
    puVar1 = puStack_168 + (long)local_170;
    pcVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    local_40 = local_170;
    local_38 = puStack_168;
    local_1c8 = (long)pcVar5 - (long)(puStack_168 + (long)local_170);
    puVar7 = PTR_s_rangeOfString_options_range__0269d130;
    local_1d0 = puVar1;
    local_c0 = local_1c8;
    local_b8 = puVar1;
    local_b0 = puVar1;
    local_a8 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_rangeOfString_options_range__0269d130,puVar4,1,puVar1,local_1c8);
    local_1c0 = pcVar2;
    local_1b8 = puVar7;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = &cf___;
      local_14c = 1;
    }
    else {
      local_50 = local_170;
      local_48 = puStack_168;
      local_d8 = puStack_168 + (long)local_170;
      local_60 = local_170;
      local_58 = puStack_168;
      local_e0 = (long)pcVar2 - (long)(puStack_168 + (long)local_170);
      pcVar5 = local_140;
      local_d0 = local_d8;
      local_c8 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_substringWithRange__0269d138,local_d8,local_e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar5;
      local_1d8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
      local_f8 = 0;
      local_f0 = 0;
      local_100 = pcVar2;
      local_e8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf_<__[CDATA_[,&cf___,0x400
                 ,0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_1d8;
      local_1d8 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1d8;
      pcVar5 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
      local_118 = 0;
      local_110 = 0;
      local_120 = pcVar5;
      local_108 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf_____>,&cf___,0x400,0,
                 pcVar5);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_1d8;
      local_1d8 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar2 = local_1d8;
      FUN_010aaf58();
      _objc_retainAutoreleasedReturnValue();
      local_14c = 1;
      local_128 = pcVar2;
      _objc_storeStrong(&local_1d8,0);
    }
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
LAB_010b2084:
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_autoreleaseReturnValue(local_128);
  return;
}

