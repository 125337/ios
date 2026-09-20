// FUN_0042c0cc @ 0042c0cc

void FUN_0042c0cc(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  cfstringStruct *local_250;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 *local_158;
  long local_150;
  undefined *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  undefined1 *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  long lStack_118;
  cfstringStruct *local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  long lStack_f8;
  cfstringStruct *local_f0;
  undefined *puStack_e8;
  cfstringStruct *local_e0;
  undefined *puStack_d8;
  undefined4 local_cc;
  long local_c8 [3];
  cfstringStruct *local_b0;
  long local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined1 *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  undefined1 *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined1 *local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_a0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a0,param_1);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_2);
  pcVar1 = local_a0;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_a8;
  local_b0 = pcVar1;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_b0;
  local_c8[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_c8[0], (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = &cf___;
    local_cc = 1;
  }
  else {
    pcVar1 = local_b0;
    puVar4 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeOfString_options__0269d118,&cf_<msg,1)
    ;
    local_e0 = pcVar1;
    puStack_d8 = puVar4;
    if ((pcVar1 == (cfstringStruct *)0x7fffffffffffffff) &&
       (pcVar1 = local_b0, puVar4 = PTR_s_rangeOfString_options__0269d118,
       (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeOfString_options__0269d118,&cf_<,0)
       , local_f0 = pcVar1, puStack_e8 = puVar4, local_e0 = pcVar1, puStack_d8 = puVar4,
       pcVar1 == (cfstringStruct *)0x7fffffffffffffff)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = &cf___;
      local_cc = 1;
    }
    else {
      pcVar1 = local_e0;
      pcVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      lStack_118 = (long)pcVar3 - (long)local_e0;
      local_38 = pcVar1;
      local_30 = pcVar1;
      local_100 = pcVar1;
      local_120 = pcVar1;
      pcVar3 = local_b0;
      puVar4 = PTR_s_rangeOfString_options_range__0269d130;
      lStack_f8 = lStack_118;
      local_40 = lStack_118;
      local_28 = lStack_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,pcVar1,lStack_118);
      local_110 = pcVar3;
      local_108 = puVar4;
      if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = &cf___;
        local_cc = 1;
      }
      else {
        local_130 = (undefined1 *)((long)pcVar3 + (1 - (long)local_e0));
        local_58 = local_e0;
        local_50 = local_e0;
        local_138 = local_e0;
        pcVar1 = local_b0;
        local_60 = local_130;
        local_48 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_substringWithRange__0269d138,local_e0,local_130);
        _objc_retainAutoreleasedReturnValue();
        local_250 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_250 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = local_250;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_escapedPatternForString__0269ef40,local_c8[0]);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_140 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____s___s__________);
        _objc_retainAutoreleasedReturnValue();
        local_150 = 0;
        local_160 = 0;
        puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        local_148 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,puVar5,1,&local_160);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_150,local_160);
        pcVar1 = local_128;
        local_158 = puVar4;
        if ((local_150 == 0) && (puVar4 != (undefined1 *)0x0)) {
          pcVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          local_78 = 0;
          local_70 = 0;
          local_80 = pcVar3;
          local_68 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_firstMatchInString_options_range_0269ef48,pcVar1,0,0,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          local_168 = puVar4;
          if ((puVar4 == (undefined1 *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberOfRanges_0269ef18),
             puVar4 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = &cf___;
          }
          else {
            puVar6 = local_168;
            puVar4 = PTR_s_rangeAtIndex__0269ef20;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_rangeAtIndex__0269ef20,1);
            if ((puVar6 == (undefined1 *)0x7fffffffffffffff) ||
               (pcVar1 = local_128, local_90 = puVar6, local_88 = puVar4,
               (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
               pcVar1 < (cfstringStruct *)(puVar6 + (long)puVar4))) {
              (*(code *)PTR__objc_retain_02578638)();
              local_98 = &cf___;
            }
            else {
              pcVar1 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_substringWithRange__0269d138,puVar6,puVar4);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar1;
              FUN_0040e428();
              _objc_retainAutoreleasedReturnValue();
              local_98 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
            }
          }
          local_cc = 1;
          _objc_storeStrong(&local_168,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = &cf___;
          local_cc = 1;
        }
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_140,0);
        _objc_storeStrong(&local_128,0);
      }
    }
  }
  _objc_storeStrong(local_c8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_autoreleaseReturnValue(local_98);
  return;
}

