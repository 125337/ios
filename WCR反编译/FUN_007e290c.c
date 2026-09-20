// FUN_007e290c @ 007e290c

void FUN_007e290c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  dword *pdVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  dword *local_438;
  dword *local_3d8;
  cfstringStruct *local_3b8;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined8 local_208;
  long local_200;
  dword *local_1f8;
  undefined4 local_1ec;
  dword *local_1e8;
  dword *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  dword *local_1c0;
  byte local_1b1;
  dword *local_1b0;
  byte local_1a1;
  dword *local_1a0;
  dword *local_198;
  double local_190;
  undefined *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  cfstringStruct *local_170;
  undefined1 local_165;
  uint local_164;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  int local_b4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0 [3];
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_3;
  local_70 = param_2;
  _objc_storeStrong(&local_80,param_4);
  local_88 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_88,param_5);
  (*DAT_028ccea8)(local_70,local_78,local_80,local_88);
  (*(code *)PTR__objc_retain_02578638)();
  local_a0[0] = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = 0;
  local_a8 = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = &cf___;
  FUN_007e42b4();
  if ((uVar2 & 1) == 0) {
    local_b4 = 1;
    goto LAB_007e409c;
  }
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_uiMessageType_0269d0a8);
  if (((int)pcVar3 != 1) &&
     (pcVar3 = local_88,
     (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_uiMessageType_0269d0a8),
     (int)pcVar3 != 0x31)) {
    local_b4 = 1;
    goto LAB_007e409c;
  }
  pcVar3 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_88);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar3;
  if ((pcVar3 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    local_b4 = 1;
  }
  else {
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar3;
    if ((pcVar3 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0),
       pcVar3 == (cfstringStruct *)0x0)) {
      local_b4 = 1;
    }
    else {
      pcVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_filehelper)
      ;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar4 = "MMServiceCenter";
        _objc_getClass();
        local_d0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_s_getService__0269d170;
        pcVar5 = "CContactMgr";
        local_d8 = pcVar4;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_performSelector_withObject__026ca7c0,puVar6,pcVar5);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = pcVar4;
        if (pcVar4 == (char *)0x0) {
LAB_007e2df4:
          pcVar3 = local_c8;
          FUN_007e439c();
          if (((ulong)pcVar3 & 1) == 0) {
            local_b4 = 1;
          }
          else {
            pcVar3 = local_c0;
            FUN_007e4634();
            _objc_retainAutoreleasedReturnValue();
            local_f8 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_b4 = 1;
            }
            else {
              FUN_007e5388();
              puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              local_100 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_f8;
              uVar1 = DAT_028cce90;
              local_140 = PTR___NSConcreteGlobalBlock_02578658;
              local_138 = 0xd0800000;
              local_134 = 0;
              local_130 = FUN_007e53f4;
              local_128 = &DAT_025800c0;
              local_108 = puVar7;
              (*(code *)PTR__objc_retain_02578638)();
              puVar6 = local_108;
              local_120 = pcVar3;
              (*(code *)PTR__objc_retain_02578638)();
              puVar7 = local_100;
              local_118 = puVar6;
              (*(code *)PTR__objc_retain_02578638)();
              local_110 = puVar7;
              _dispatch_sync(uVar1,&local_140);
              puVar6 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_copy_0269d150);
              puVar7 = local_108;
              local_148 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
              pcVar3 = local_f8;
              local_150 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
              pcVar9 = local_c8;
              local_158 = pcVar3;
              FUN_007e5684();
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_a0[0];
              local_a0[0] = pcVar9;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              _objc_storeStrong(&local_a8);
              (*(code *)PTR__objc_retain_02578638)(&cf___);
              local_160 = &cf___;
              pcVar3 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_uiCreateTime_0269d208);
              local_164 = (uint)pcVar3;
              pcVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_containsString__0269d0b0,&cf__chatroom);
              local_165 = SUB81(pcVar3,0);
              if (((ulong)pcVar3 & 1) == 0) {
                _objc_storeStrong(&local_a8,local_a0[0]);
                if (local_c8 == (cfstringStruct *)0x0) {
                  local_3b8 = &cf___;
                }
                else {
                  local_3b8 = local_c8;
                }
                _objc_storeStrong(&local_160,local_3b8);
              }
              else {
                local_170 = (cfstringStruct *)0x0;
                pcVar3 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR_s_respondsToSelector__026ca818,
                           PTR_s_m_nsRealChatUsr_0269d190);
                if (((ulong)pcVar3 & 1) != 0) {
                  pcVar9 = local_88;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_88,PTR_s_valueForKey__0269d128,&cf_m_nsRealChatUsr);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_170;
                  local_170 = pcVar9;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                if (((local_170 == (cfstringStruct *)0x0) ||
                    (pcVar3 = local_170,
                    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
                    pcVar3 == (cfstringStruct *)0x0)) &&
                   (pcVar3 = local_88,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088
                             ), ((ulong)pcVar3 & 1) != 0)) {
                  pcVar9 = local_88;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_88,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_170;
                  local_170 = pcVar9;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                if (((local_170 == (cfstringStruct *)0x0) ||
                    (pcVar3 = local_170,
                    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
                    pcVar3 == (cfstringStruct *)0x0)) &&
                   ((pcVar3 = local_c0, puVar6 = PTR_s_rangeOfString__0269d838,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_c0,PTR_s_rangeOfString__0269d838,&cf__), local_180 = pcVar3,
                    local_178 = puVar6, pcVar3 != (cfstringStruct *)0x7fffffffffffffff &&
                    (pcVar3 != (cfstringStruct *)0x0)))) {
                  pcVar9 = local_c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c0,PTR_s_substringToIndex__0269d6c0,pcVar3);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_170;
                  local_170 = pcVar9;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                if ((local_170 != (cfstringStruct *)0x0) &&
                   (pcVar3 = local_170,
                   (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
                   pcVar3 != (cfstringStruct *)0x0)) {
                  pcVar9 = local_170;
                  FUN_007e5684(pcVar3);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_a8;
                  local_a8 = pcVar9;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                  _objc_storeStrong(&local_160,local_170);
                }
                _objc_storeStrong(&local_170,0);
              }
              puVar6 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_188 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_themeBoxRedeemInterval_026a8498);
              local_190 = param_1;
              if (param_1 < 5.0) {
                local_190 = 5.0;
              }
              local_1a1 = 0;
              local_1b1 = 0;
              local_3d8 = (dword *)PTR__OBJC_CLASS___NSString_026cdfe8;
              if (local_190 == (double)(long)local_190) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf__ld);
                _objc_retainAutoreleasedReturnValue();
                local_1a1 = 1;
                local_1a0 = local_3d8;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf__g);
                _objc_retainAutoreleasedReturnValue();
                local_1b1 = 1;
                local_1b0 = local_3d8;
              }
              pdVar8 = local_3d8;
              (*(code *)PTR__objc_retain_02578638)();
              local_198 = local_3d8;
              if ((local_1b1 & 1) != 0) {
                pdVar8 = local_1b0;
                (*(code *)PTR__objc_release_02578630)();
              }
              if ((local_1a1 & 1) != 0) {
                pdVar8 = local_1a0;
                (*(code *)PTR__objc_release_02578630)();
              }
              FUN_007e5bc4();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = local_188;
              local_1c0 = pdVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188,PTR_s_themeBoxSkipSenderWxids_026a84a0);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              FUN_007e611c();
              _objc_retainAutoreleasedReturnValue();
              local_1c8 = puVar7;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              pcVar3 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
              if ((pcVar3 == (cfstringStruct *)0x0) ||
                 (puVar6 = local_1c8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_1c8,PTR_s_containsObject__0269cbb8,local_160),
                 ((ulong)puVar6 & 1) == 0)) {
                local_48 = &cf___;
                local_40 = &cf_a_;
                local_38 = &cf_b_;
                local_30 = &cf_c_;
                puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_48,4);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
                local_1d0 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
                _objc_retainAutoreleasedReturnValue();
                pdVar8 = local_1c0;
                local_1d8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_count_0269cfe0);
                local_1ec = 4;
                local_438 = pdVar8;
                if ((undefined1 *)((long)&MACH_HEADER.magic + 3) < pdVar8) {
                  local_438 = &MACH_HEADER.cputype;
                }
                local_1f8 = local_438;
                local_1e0 = local_438;
                local_1e8 = pdVar8;
                for (local_200 = 0; puVar6 = local_1d8, local_200 < (long)local_1e0;
                    local_200 = local_200 + 1) {
                  puVar7 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_200);
                  _objc_retainAutoreleasedReturnValue();
                  pdVar8 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_200);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_appendFormat__0269d148,&cf_____);
                  (*(code *)PTR__objc_release_02578630)(pdVar8);
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                }
                puVar7 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
                puVar6 = local_1d8;
                if (puVar7 != (undefined *)0x0) {
                  puVar7 = local_1d8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
                  local_210 = puVar7 + -1;
                  local_68 = 1;
                  local_50 = 1;
                  local_208 = 1;
                  local_60 = local_210;
                  local_58 = local_210;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_deleteCharactersInRange__026a84a8,local_210,1);
                }
                pcVar9 = (cfstringStruct *)(ulong)local_164;
                FUN_007e6620();
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_b0;
                local_b0 = pcVar9;
                (*(code *)PTR__objc_release_02578630)();
                uVar2 = (uint)pcVar3;
                FUN_007e42b4();
                if ((uVar2 & 1) == 0) {
                  local_b4 = 1;
                }
                else {
                  puVar6 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = local_150;
                  local_218 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
                  if ((puVar7 == (undefined *)0x0) ||
                     (puVar6 = local_148,
                     (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
                     puVar6 == (undefined *)0x0)) {
                    puVar6 = local_150;
                    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
                    if ((puVar6 == (undefined *)0x0) ||
                       (puVar6 = local_148,
                       (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
                       puVar6 != (undefined *)0x0)) {
                      puVar7 = local_148;
                      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
                      puVar6 = local_218;
                      if (puVar7 == (undefined *)0x0) {
                        local_b4 = 1;
                      }
                      else {
                        puVar7 = local_148;
                        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
                        puVar10 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_themeBoxTotalDetectedCount_026a84b0);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_setThemeBoxTotalDetectedCount__026a84b8,
                                   puVar10 + (long)puVar7);
                        FUN_007e6748(local_148,0,local_c8,local_a0[0],local_a8,local_b0);
                        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_stringWithFormat__0269cca8,&cf__);
                        _objc_retainAutoreleasedReturnValue();
                        local_230 = puVar6;
                        FUN_007e7270(puVar6);
                        _objc_storeStrong(&local_230,0);
                        local_b4 = 0;
                      }
                    }
                    else {
                      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,
                                 PTR_s_stringWithFormat__0269cca8,&cf__);
                      _objc_retainAutoreleasedReturnValue();
                      local_228 = puVar6;
                      FUN_007e7270(puVar6);
                      local_b4 = 1;
                      _objc_storeStrong(&local_228,0);
                    }
                  }
                  else {
                    FUN_007e6748(puVar6,local_148,0,local_c8,local_a0[0],local_a8,local_b0);
                    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_stringWithFormat__0269cca8,&cf__);
                    _objc_retainAutoreleasedReturnValue();
                    local_220 = puVar6;
                    FUN_007e7270(puVar6);
                    local_b4 = 1;
                    _objc_storeStrong(&local_220,0);
                  }
                  _objc_storeStrong(&local_218,0);
                }
                _objc_storeStrong(&local_1d8);
                _objc_storeStrong(&local_1d0,0);
              }
              else {
                local_b4 = 1;
              }
              _objc_storeStrong(&local_1c8);
              _objc_storeStrong(&local_1c0,0);
              _objc_storeStrong(&local_198,0);
              _objc_storeStrong(&local_188,0);
              _objc_storeStrong(&local_160,0);
              _objc_storeStrong(&local_150,0);
              _objc_storeStrong(&local_148,0);
              _objc_storeStrong(&local_110,0);
              _objc_storeStrong(&local_118,0);
              _objc_storeStrong(&local_120,0);
              _objc_storeStrong(&local_108,0);
              _objc_storeStrong(&local_100,0);
            }
            _objc_storeStrong(&local_f8,0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = pcVar4;
          if (pcVar4 == (char *)0x0) {
LAB_007e2dc0:
            local_b4 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
            _objc_retainAutoreleasedReturnValue();
            local_f0 = pcVar4;
            if ((pcVar4 == (char *)0x0) ||
               (pcVar3 = local_c8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_c8,PTR_s_isEqualToString__0269ccc8,pcVar4), ((ulong)pcVar3 & 1) == 0
               )) {
              local_b4 = 0;
            }
            else {
              local_b4 = 1;
            }
            _objc_storeStrong(&local_f0,0);
            if (local_b4 == 0) goto LAB_007e2dc0;
          }
          _objc_storeStrong(&local_e8,0);
          if (local_b4 == 0) goto LAB_007e2df4;
        }
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
      }
      else {
        local_b4 = 1;
      }
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_c0,0);
LAB_007e409c:
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

