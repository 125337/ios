// FUN_005dca80 @ 005dca80

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005dca80(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 in_x7;
  cfstringStruct *local_3a0;
  cfstringStruct *local_370;
  cfstringStruct *local_340;
  ulong local_2e8 [3];
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  ulong local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined8 local_290;
  ulong local_288;
  undefined *local_280;
  undefined *local_278;
  byte local_269;
  undefined *local_268;
  undefined8 local_260;
  ulong local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined8 local_238;
  ulong local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined8 local_210;
  ulong local_208;
  undefined *local_200;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  undefined8 local_1e0;
  ulong local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  byte local_191;
  undefined *local_190;
  ulong local_188;
  ulong local_180;
  undefined *puStack_178;
  ulong local_170;
  ulong local_168;
  undefined *puStack_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined4 local_140;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulong local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  if ((local_130 == 0) ||
     (uVar1 = local_130, (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    uVar1 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = uVar1;
    local_140 = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_340 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_340 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = local_340;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_370 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_370 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_370;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_3a0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_3a0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_3a0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_148;
    puVar6 = PTR_s_length_0269cca0;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (((pcVar2 == (cfstringStruct *)0x0) &&
        (pcVar2 = local_150, puVar6 = PTR_s_length_0269cca0, (*(code *)PTR__objc_msgSend_02578628)()
        , pcVar2 == (cfstringStruct *)0x0)) &&
       (pcVar2 = local_158, puVar6 = PTR_s_length_0269cca0, (*(code *)PTR__objc_msgSend_02578628)(),
       uVar1 = local_130, pcVar2 == (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = uVar1;
      local_140 = 1;
    }
    else {
      uVar4 = local_130;
      FUN_005de5b0();
      uVar1 = local_130;
      local_168 = uVar4;
      puStack_160 = puVar6;
      if ((uVar4 == 0x7fffffffffffffff) || (puVar6 == (undefined *)0x0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = uVar1;
        local_140 = 1;
      }
      else {
        uVar5 = local_130;
        local_180 = uVar4;
        puStack_178 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_substringWithRange__0269d138,uVar4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        local_170 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        uVar1 = local_130;
        if (uVar5 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = uVar1;
          local_140 = 1;
        }
        else {
          uVar1 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_mutableCopy_0269d8a0);
          pcVar2 = local_148;
          local_188 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
          if (pcVar2 != (cfstringStruct *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                       PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<title>___<_title>,9,0);
            _objc_retainAutoreleasedReturnValue();
            local_191 = 0;
            local_190 = puVar6;
            if (puVar6 != (undefined *)0x0) {
              puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
              pcVar2 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_<title>__<_title>);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_188;
              puVar6 = local_190;
              uVar4 = local_188;
              local_1a0 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
              local_38 = 0;
              local_30 = 0;
              local_1b8 = 0;
              local_1b0 = uVar4;
              local_40 = uVar4;
              local_28 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                         local_1a0,in_x7,pcVar2);
              local_191 = puVar6 != (undefined *)0x0;
              local_1a8 = puVar6;
              _objc_storeStrong(&local_1a0,0);
            }
            if ((local_191 & 1) == 0) {
              puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                         PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__<appmsg[_>__>_,9,0);
              _objc_retainAutoreleasedReturnValue();
              local_1c0 = puVar6;
              if (puVar6 != (undefined *)0x0) {
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_<title>__<_title>);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1c8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf__1__);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = local_188;
                puVar6 = local_1c0;
                uVar4 = local_188;
                local_1d0 = puVar8;
                (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                local_58 = 0;
                local_50 = 0;
                local_1e0 = 0;
                local_1d8 = uVar4;
                local_60 = uVar4;
                local_48 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                           local_1d0,in_x7,puVar7);
                _objc_storeStrong(&local_1d0);
                _objc_storeStrong(&local_1c8,0);
              }
              _objc_storeStrong(&local_1c0,0);
            }
            _objc_storeStrong(&local_190,0);
          }
          pcVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
          if (pcVar2 != (cfstringStruct *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                       PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<des>___<_des>,9,0);
            _objc_retainAutoreleasedReturnValue();
            local_1e9 = 0;
            local_1e8 = puVar6;
            if (puVar6 != (undefined *)0x0) {
              puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
              pcVar2 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_<des>__<_des>);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_188;
              puVar6 = local_1e8;
              uVar4 = local_188;
              local_1f8 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
              local_78 = 0;
              local_70 = 0;
              local_210 = 0;
              local_208 = uVar4;
              local_80 = uVar4;
              local_68 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                         local_1f8,in_x7,pcVar2);
              local_1e9 = puVar6 != (undefined *)0x0;
              local_200 = puVar6;
              _objc_storeStrong(&local_1f8,0);
            }
            if ((local_1e9 & 1) == 0) {
              puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                         PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<_title>,9,0);
              _objc_retainAutoreleasedReturnValue();
              local_218 = puVar6;
              if (puVar6 == (undefined *)0x0) {
                puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                           PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__<appmsg[_>__>_,9,0);
                _objc_retainAutoreleasedReturnValue();
                local_240 = puVar6;
                if (puVar6 != (undefined *)0x0) {
                  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf_<des>__<_des>);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_248 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf__1__);
                  _objc_retainAutoreleasedReturnValue();
                  uVar1 = local_188;
                  puVar6 = local_240;
                  uVar4 = local_188;
                  local_250 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                  local_b8 = 0;
                  local_b0 = 0;
                  local_260 = 0;
                  local_258 = uVar4;
                  local_c0 = uVar4;
                  local_a8 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                             local_250,in_x7,puVar7);
                  _objc_storeStrong(&local_250);
                  _objc_storeStrong(&local_248,0);
                }
                _objc_storeStrong(&local_240,0);
              }
              else {
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_<des>__<_des>);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_220 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_<_title>__);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = local_188;
                puVar6 = local_218;
                uVar4 = local_188;
                local_228 = puVar8;
                (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                local_98 = 0;
                local_90 = 0;
                local_238 = 0;
                local_230 = uVar4;
                local_a0 = uVar4;
                local_88 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                           local_228,in_x7,puVar7);
                _objc_storeStrong(&local_228);
                _objc_storeStrong(&local_220,0);
              }
              _objc_storeStrong(&local_218,0);
            }
            _objc_storeStrong(&local_1e8,0);
          }
          pcVar2 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
          if (pcVar2 != (cfstringStruct *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                       PTR_s_regularExpressionWithPattern_opt_0269ef10,
                       &cf_<songalbumurl>___<_songalbumurl>,9,0);
            _objc_retainAutoreleasedReturnValue();
            local_269 = 0;
            local_268 = puVar6;
            if (puVar6 != (undefined *)0x0) {
              puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
              pcVar2 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_<songalbumurl>__<_songalbumurl>);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_188;
              puVar6 = local_268;
              uVar4 = local_188;
              local_278 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
              local_d8 = 0;
              local_d0 = 0;
              local_290 = 0;
              local_288 = uVar4;
              local_e0 = uVar4;
              local_c8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                         local_278,in_x7,pcVar2);
              local_269 = puVar6 != (undefined *)0x0;
              local_280 = puVar6;
              _objc_storeStrong(&local_278,0);
            }
            if ((local_269 & 1) == 0) {
              puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                         PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<_type>,9,0);
              _objc_retainAutoreleasedReturnValue();
              local_298 = puVar6;
              if (puVar6 == (undefined *)0x0) {
                puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                           PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__<appmsg[_>__>_,9,0);
                _objc_retainAutoreleasedReturnValue();
                local_2c0 = puVar6;
                if (puVar6 != (undefined *)0x0) {
                  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf_<songalbumurl>__<_songalbumurl>);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_2c8 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf__1__);
                  _objc_retainAutoreleasedReturnValue();
                  uVar1 = local_188;
                  puVar6 = local_2c0;
                  uVar4 = local_188;
                  local_2d0 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                  local_118 = 0;
                  local_110 = 0;
                  local_2e8[1] = 0;
                  local_2e8[2] = uVar4;
                  local_120 = uVar4;
                  local_108 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                             local_2d0,in_x7,puVar7);
                  _objc_storeStrong(&local_2d0);
                  _objc_storeStrong(&local_2c8,0);
                }
                _objc_storeStrong(&local_2c0,0);
              }
              else {
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_<songalbumurl>__<_songalbumurl>);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_2a0 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_<_type>__);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = local_188;
                puVar6 = local_298;
                uVar4 = local_188;
                local_2a8 = puVar8;
                (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                local_f8 = 0;
                local_f0 = 0;
                local_2b8 = 0;
                local_2b0 = uVar4;
                local_100 = uVar4;
                local_e8 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_replaceMatchesInString_options_r_026a5cd0,uVar1,0,0,uVar4,
                           local_2a8,in_x7,puVar7);
                _objc_storeStrong(&local_2a8);
                _objc_storeStrong(&local_2a0,0);
              }
              _objc_storeStrong(&local_298,0);
            }
            _objc_storeStrong(&local_268,0);
          }
          uVar4 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isEqualToString__0269ccc8,local_170)
          ;
          uVar1 = local_130;
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_mutableCopy_0269d8a0);
            local_2e8[0] = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_replaceCharactersInRange_withStr_0269ef70,local_168,puStack_160,
                       local_188);
            uVar1 = local_2e8[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_128 = uVar1;
            local_140 = 1;
            _objc_storeStrong(local_2e8,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_128 = uVar1;
            local_140 = 1;
          }
          _objc_storeStrong(&local_188,0);
        }
        _objc_storeStrong(&local_170,0);
      }
    }
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_130,0);
  _objc_autoreleaseReturnValue(local_128);
  return;
}

