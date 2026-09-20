// FUN_0011adc0 @ 0011adc0

void FUN_0011adc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_6b0;
  cfstringStruct *local_618;
  cfstringStruct *local_5e0;
  cfstringStruct *local_5a8;
  cfstringStruct *local_588;
  cfstringStruct *local_518;
  cfstringStruct **local_500;
  cfstringStruct **local_4e8;
  cfstringStruct **local_4d0;
  ulong local_498;
  ulong local_490;
  cfstringStruct *local_440;
  cfstringStruct *local_420;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d0;
  cfstringStruct **local_3b8;
  cfstringStruct **local_3a0;
  cfstringStruct **local_388;
  cfstringStruct *local_348;
  cfstringStruct *local_338;
  cfstringStruct *local_328;
  cfstringStruct *local_318;
  cfstringStruct *local_308;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2a8;
  cfstringStruct *local_298;
  undefined *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  cfstringStruct *local_1a0;
  undefined *local_198;
  ulong local_190;
  cfstringStruct *local_188;
  byte local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_ed;
  ulong local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_6);
  uVar2 = DAT_028c84e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    _objc_storeStrong(&local_e0,&cf___);
  }
  uVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__r_n,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_e0;
  local_e0 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_e0;
  local_e0 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__Tip,&cf___);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_e0;
  local_e0 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_e0;
  local_e0 = uVar2;
  (*(code *)PTR__objc_release_02578630)();
  uVar1 = (uint)uVar3;
  FUN_0011f034();
  local_ed = (byte)uVar1;
  if ((uVar1 & 1) == 0) {
    local_298 = DAT_028c84f0;
  }
  else {
    local_298 = DAT_028c84f8;
  }
  FUN_0011f10c(local_298,&cf___);
  _objc_retainAutoreleasedReturnValue();
  if ((local_ed & 1) == 0) {
    local_2a8 = DAT_028c8500;
  }
  else {
    local_2a8 = DAT_028c8508;
  }
  local_f8 = local_298;
  FUN_0011f274(local_2a8,&cf_66CD00);
  _objc_retainAutoreleasedReturnValue();
  if ((local_ed & 1) == 0) {
    local_2b8 = DAT_028c8510;
  }
  else {
    local_2b8 = DAT_028c8518;
  }
  local_100 = local_2a8;
  FUN_0011f274(local_2b8,&cf_1E90FF);
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = local_b0;
  local_108 = local_2b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = pcVar10;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_length_0269cca0);
  if ((pcVar10 == (cfstringStruct *)0x0) &&
     (pcVar10 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     pcVar10 != (cfstringStruct *)0x0)) {
    pcVar4 = local_c8;
    FUN_0011f468(pcVar10,local_c8,local_b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = local_110;
    local_110 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar10);
  }
  pcVar10 = local_110;
  FUN_001172d8(local_110,local_c8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_110;
  local_118 = pcVar10;
  FUN_00117c9c();
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = local_110;
  local_120 = pcVar4;
  FUN_00117ed8();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_118;
  local_128 = pcVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    pcVar10 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
    if (pcVar10 == (cfstringStruct *)0x0) {
      pcVar10 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      if (pcVar10 == (cfstringStruct *)0x0) {
        pcVar10 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
        if (pcVar10 == (cfstringStruct *)0x0) {
          if (local_110 == (cfstringStruct *)0x0) {
            local_348 = &cf___;
          }
          else {
            local_348 = local_110;
          }
          local_338 = local_348;
        }
        else {
          local_338 = local_b8;
        }
        local_328 = local_338;
      }
      else {
        local_328 = local_128;
      }
      local_318 = local_328;
    }
    else {
      local_318 = local_120;
    }
    local_308 = local_318;
  }
  else {
    local_308 = local_118;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_308;
  pcVar10 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
  if ((((pcVar10 == (cfstringStruct *)0x0) &&
       (pcVar10 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
       pcVar10 != (cfstringStruct *)0x0)) &&
      (pcVar10 = local_120, (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0),
      pcVar10 == (cfstringStruct *)0x0)) &&
     (pcVar10 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
     pcVar10 == (cfstringStruct *)0x0)) {
    _objc_storeStrong(&local_118,local_b8);
    pcVar10 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
    if (pcVar10 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_130,local_b8);
    }
  }
  pcVar10 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_388 = &local_130;
  }
  else {
    local_388 = &local_118;
  }
  pcVar4 = *local_388;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar10 = local_120;
  local_138 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_3a0 = &local_130;
  }
  else {
    local_3a0 = &local_120;
  }
  pcVar4 = *local_3a0;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar10 = local_128;
  local_140 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_3b8 = &local_130;
  }
  else {
    local_3b8 = &local_128;
  }
  pcVar4 = *local_3b8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar10 = local_d0;
  local_148 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (pcVar10 == (cfstringStruct *)0x0) {
    if (local_c8 == (cfstringStruct *)0x0) {
      local_3e0 = &cf___;
    }
    else {
      local_3e0 = local_c8;
    }
    local_3d0 = local_3e0;
  }
  else {
    local_3d0 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_3d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = &cf___;
  pcVar10 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
  if ((pcVar10 != (cfstringStruct *)0x0) &&
     (pcVar10 = local_110,
     (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     ((ulong)pcVar10 & 1) == 0)) {
    pcVar4 = local_110;
    FUN_0011eb28();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = local_160;
    local_160 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar10);
  }
  if (local_c8 == (cfstringStruct *)0x0) {
    local_420 = &cf___;
  }
  else {
    local_420 = local_c8;
  }
  FUN_0011eb28();
  _objc_retainAutoreleasedReturnValue();
  local_179 = 0;
  pcVar10 = local_160;
  local_168 = local_420;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_440 = &cf_WCRefineLeaveColor___;
  }
  else {
    local_440 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_WCRefineLeaveUser___user____session___);
    _objc_retainAutoreleasedReturnValue();
    local_179 = 1;
    local_178 = local_440;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = local_440;
  if ((local_179 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_178);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = &cf_WCRefineLeaveColor___;
  uVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_componentsSeparatedByString__0269d3c0,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_190 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar5;
  _memset(auStack_1e0,0,0x40);
  uVar2 = local_190;
  (*(code *)PTR__objc_retain_02578638)();
  local_490 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10);
  if (local_490 != 0) {
    lVar9 = *local_1d0;
    local_498 = 0;
    do {
      do {
        if (*local_1d0 - lVar9 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar9,uVar2);
        }
        pcVar10 = *(cfstringStruct **)(local_1d8 + local_498 * 8);
        local_1a0 = pcVar10;
        (*(code *)PTR__objc_retain_02578638)();
        local_1e8 = pcVar10;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = &cf___;
        local_1f8 = local_1e8;
        local_200 = &cf___;
        FUN_0011fd80(local_1a0,&local_1f8,&local_200);
        _objc_storeStrong(&local_1e8,local_1f8);
        _objc_storeStrong(&local_1f0,local_200);
        pcVar10 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_4d0 = &local_f8;
        }
        else {
          local_4d0 = &local_1f0;
        }
        pcVar4 = *local_4d0;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar10 = local_1f0;
        local_208 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_4e8 = &local_100;
        }
        else {
          local_4e8 = &local_1f0;
        }
        pcVar4 = *local_4e8;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar10 = local_1f0;
        local_210 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_500 = &local_108;
        }
        else {
          local_500 = &local_1f0;
        }
        pcVar10 = *local_500;
        (*(code *)PTR__objc_retain_02578638)();
        if (local_1e8 == (cfstringStruct *)0x0) {
          local_518 = &cf___;
        }
        else {
          local_518 = local_1e8;
        }
        local_218 = pcVar10;
        (*(code *)PTR__objc_retain_02578638)();
        local_220 = local_518;
        FUN_0012070c(local_518,&cf__,local_138,local_218,local_170);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = local_518;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__,local_138,local_218,local_170);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__,local_140,local_218,local_170);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__,local_148,local_218,local_170);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar10 = local_220;
        pcVar6 = local_110;
        FUN_00120ad0();
        _objc_retainAutoreleasedReturnValue();
        FUN_0012070c(pcVar10,&cf__,pcVar6,local_218,local_170);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_220;
        local_220 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__,local_130,local_218,local_170);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__S,local_130,local_218,local_170);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        if (local_d8 == (cfstringStruct *)0x0) {
          local_588 = &cf___;
        }
        else {
          local_588 = local_d8;
        }
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__,local_588,local_210,local_188);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        if (local_d8 == (cfstringStruct *)0x0) {
          local_5a8 = &cf___;
        }
        else {
          local_5a8 = local_d8;
        }
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__T,local_5a8,local_210,local_188);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        FUN_0012070c(local_220,&cf__,local_158,local_208,local_188);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__Hex,local_208);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        if (local_c0 == (cfstringStruct *)0x0) {
          local_5e0 = &cf___;
        }
        else {
          local_5e0 = local_c0;
        }
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_5e0);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_150);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_150);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_150);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        if (local_c8 == (cfstringStruct *)0x0) {
          local_618 = &cf___;
        }
        else {
          local_618 = local_c8;
        }
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_618);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar10 = local_220;
        pcVar6 = local_c8;
        FUN_00120b64();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar10,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_220;
        local_220 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar10 = local_220;
        pcVar6 = local_c8;
        FUN_00120c20();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar10,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_220;
        local_220 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar10 = local_220;
        pcVar6 = local_c8;
        FUN_00120c20();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar10,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_220;
        local_220 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,&cf___);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf___);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar4 = local_220;
        FUN_00120cdc(local_220,local_208,local_188);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_220;
        local_220 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        if (local_220 == (cfstringStruct *)0x0) {
          local_6b0 = &cf___;
        }
        else {
          local_6b0 = local_220;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addObject__0269d180,local_6b0);
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_218,0);
        _objc_storeStrong(&local_210,0);
        _objc_storeStrong(&local_208,0);
        _objc_storeStrong(&local_1f0,0);
        _objc_storeStrong(&local_1e8,0);
        local_498 = local_498 + 1;
      } while (local_498 < local_490);
      local_490 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10);
      local_498 = 0;
    } while (local_490 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar5 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  local_228 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsString__0269d0b0,&cf_<_wc_custom_link_)
  ;
  if ((((ulong)puVar5 & 1) != 0) &&
     (puVar7 = local_228,
     (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_containsString__0269d0b0,&cf_href___),
     puVar5 = local_228, ((ulong)puVar7 & 1) != 0)) {
    puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_href_____);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_href___);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_228;
    local_228 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar8);
  }
  puVar5 = local_228;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_228);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

