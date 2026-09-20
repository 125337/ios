// FUN_00fbc094 @ 00fbc094

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fbc094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_318;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  long local_288;
  cfstringStruct *local_280;
  undefined *local_278;
  undefined *local_270;
  long local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  undefined *local_250;
  long local_248;
  cfstringStruct *local_240;
  undefined *puStack_238;
  cfstringStruct *local_230;
  undefined *puStack_228;
  cfstringStruct *local_220;
  undefined *puStack_218;
  cfstringStruct *local_210;
  long local_208;
  cfstringStruct *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  undefined *puStack_1e8;
  cfstringStruct *local_1e0;
  undefined *puStack_1d8;
  cfstringStruct *local_1c8;
  long local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  undefined *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  undefined *local_180;
  undefined4 local_174;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  long local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  long local_98;
  long local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  long local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_160 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_160,param_1);
  local_168 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_168,param_2);
  pcVar2 = local_160;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_2c0 = &cf___;
  }
  else {
    local_2c0 = local_160;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
  if (local_2c0 == (cfstringStruct *)0x0) {
    if (local_168 == (cfstringStruct *)0x0) {
      local_2d8 = &cf___;
    }
    else {
      local_2d8 = local_168;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_2d8;
    local_174 = 1;
  }
  else {
    pcVar2 = local_170;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_170,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_188 = pcVar2;
    local_180 = puVar1;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar2 = local_170;
      FUN_00fba828(0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_170;
      puVar1 = PTR_s_rangeOfString_options__0269d118;
      local_190 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_rangeOfString_options__0269d118,&cf_<msg,1);
      pcVar3 = local_190;
      local_1a0 = pcVar4;
      local_198 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
      local_158 = local_170;
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if ((pcVar3 == (cfstringStruct *)0x0) || (local_1a0 == (cfstringStruct *)0x7fffffffffffffff))
      {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        pcVar4 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_substringFromIndex__0269d120,local_1a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_____);
        _objc_retainAutoreleasedReturnValue();
        local_158 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      local_174 = 1;
      _objc_storeStrong(&local_190,0);
    }
    else {
      local_318 = local_170;
      puVar1 = PTR_s_rangeOfString_options__0269d118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
      local_1b0 = local_318;
      local_1a8 = puVar1;
      if ((local_318 == (cfstringStruct *)0x7fffffffffffffff) || (local_318 <= local_188)) {
        local_318 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
      }
      local_1b8 = local_318;
      local_1c0 = (long)local_318 - (long)local_188;
      local_88 = local_188;
      local_80 = local_188;
      local_1c8 = local_188;
      pcVar2 = local_170;
      puVar1 = PTR_s_rangeOfString_options_range__0269d130;
      local_90 = local_1c0;
      local_78 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_rangeOfString_options_range__0269d130,&cf_<title>,1,local_188,
                 local_1c0);
      local_1e0 = pcVar2;
      puStack_1d8 = puVar1;
      if ((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) &&
         (pcVar2 = local_170, puVar1 = PTR_s_rangeOfString_options_range__0269d130,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_170,PTR_s_rangeOfString_options_range__0269d130,&cf_<title,1,local_1c8,
                    local_1c0), local_1f0 = pcVar2, puStack_1e8 = puVar1, local_1e0 = pcVar2,
         puStack_1d8 = puVar1, pcVar2 != (cfstringStruct *)0x7fffffffffffffff)) {
        local_208 = (long)local_1b8 - (long)pcVar2;
        pcVar4 = local_170;
        puVar1 = PTR_s_rangeOfString_options_range__0269d130;
        local_210 = pcVar2;
        local_b0 = local_208;
        local_a8 = pcVar2;
        local_a0 = pcVar2;
        local_98 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,pcVar2,local_208);
        local_200 = pcVar4;
        local_1f8 = puVar1;
        if (pcVar4 == (cfstringStruct *)0x7fffffffffffffff) {
          local_1e0 = (cfstringStruct *)0x7fffffffffffffff;
        }
        else {
          puStack_218 = (undefined *)((long)pcVar4 + (1 - (long)local_1e0));
          local_c8 = local_1e0;
          local_c0 = local_1e0;
          local_220 = local_1e0;
          puStack_1d8 = puStack_218;
          local_d0 = puStack_218;
          local_b8 = puStack_218;
        }
      }
      local_e8 = 0x7fffffffffffffff;
      local_f0 = 0;
      local_e0 = 0x7fffffffffffffff;
      local_d8 = 0;
      local_230 = (cfstringStruct *)0x7fffffffffffffff;
      puStack_228 = (undefined *)0x0;
      if (local_1e0 != (cfstringStruct *)0x7fffffffffffffff) {
        local_30 = local_1e0;
        local_28 = puStack_1d8;
        local_250 = puStack_1d8 + (long)&local_1e0->field0_0x0;
        local_40 = local_1e0;
        local_38 = puStack_1d8;
        local_248 = (long)local_1b8 - (long)(puStack_1d8 + (long)&local_1e0->field0_0x0);
        pcVar2 = local_170;
        puVar1 = PTR_s_rangeOfString_options_range__0269d130;
        local_110 = local_248;
        local_108 = local_250;
        local_100 = local_250;
        local_f8 = local_248;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_rangeOfString_options_range__0269d130,&cf_<_title>,1,local_250,
                   local_248);
        local_240 = pcVar2;
        puStack_238 = puVar1;
        local_230 = pcVar2;
        puStack_228 = puVar1;
      }
      pcVar2 = local_168;
      FUN_00fcb9a8();
      _objc_retainAutoreleasedReturnValue();
      local_258 = pcVar2;
      if ((local_1e0 == (cfstringStruct *)0x7fffffffffffffff) ||
         (local_230 == (cfstringStruct *)0x7fffffffffffffff)) {
        local_288 = (long)local_1b8 - (long)local_188;
        local_148 = local_188;
        local_140 = local_188;
        local_290 = local_188;
        pcVar4 = local_170;
        puVar1 = PTR_s_rangeOfString_options_range__0269d130;
        local_150 = local_288;
        local_138 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,local_188,local_288
                  );
        pcVar2 = local_170;
        local_280 = pcVar4;
        local_278 = puVar1;
        if (pcVar4 == (cfstringStruct *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = pcVar2;
          local_174 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_mutableCopy_0269d8a0);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_298 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_<title>__<_title>);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_280;
          local_68 = local_278;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_insertString_atIndex__026ad120,puVar1,
                     local_278 + (long)&local_280->field0_0x0);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          pcVar2 = local_298;
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_copy_0269d150);
          local_174 = 1;
          local_158 = pcVar2;
          _objc_storeStrong(&local_298,0);
        }
      }
      else {
        pcVar2 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_mutableCopy_0269d8a0);
        local_50 = local_1e0;
        local_48 = puStack_1d8;
        local_270 = puStack_1d8 + (long)&local_1e0->field0_0x0;
        local_60 = local_1e0;
        local_58 = puStack_1d8;
        local_268 = (long)local_230 - (long)(puStack_1d8 + (long)&local_1e0->field0_0x0);
        local_260 = pcVar2;
        local_130 = local_268;
        local_128 = local_270;
        local_120 = local_270;
        local_118 = local_268;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_replaceCharactersInRange_withStr_0269ef70,local_270,local_268,
                   local_258);
        pcVar2 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_copy_0269d150);
        local_174 = 1;
        local_158 = pcVar2;
        _objc_storeStrong(&local_260,0);
      }
      _objc_storeStrong(&local_258,0);
    }
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  _objc_autoreleaseReturnValue(local_158);
  return;
}

