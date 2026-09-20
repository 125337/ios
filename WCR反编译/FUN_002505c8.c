// FUN_002505c8 @ 002505c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002505c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  cfstringStruct *local_860;
  cfstringStruct *local_528;
  cfstringStruct *local_460;
  bool local_419;
  cfstringStruct *local_418;
  cfstringStruct *local_410;
  undefined1 local_402;
  undefined1 local_401;
  undefined *local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  code *local_3f0;
  undefined *local_3e8;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d8;
  undefined1 local_3ca;
  undefined1 local_3c9;
  undefined *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  code *local_3b8;
  undefined *local_3b0;
  cfstringStruct *local_3a8;
  cfstringStruct *local_3a0;
  undefined *local_398;
  undefined1 local_389;
  undefined *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  code *local_378;
  undefined *local_370;
  undefined1 auStack_368 [13];
  undefined1 local_35b;
  undefined1 local_35a;
  undefined1 local_359;
  undefined *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  code *local_348;
  undefined *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  undefined1 auStack_328 [15];
  undefined1 local_319;
  undefined *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  code *local_308;
  undefined *local_300;
  cfstringStruct *local_2f8;
  undefined1 local_2e9;
  undefined *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  code *local_2d8;
  undefined *local_2d0;
  cfstringStruct *local_2c8;
  undefined1 local_2b9;
  undefined *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  code *local_2a8;
  undefined *local_2a0;
  cfstringStruct *local_298;
  undefined1 local_289;
  undefined *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined *local_270;
  cfstringStruct *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  undefined1 local_23b;
  undefined1 local_23a;
  undefined1 local_239;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  undefined1 auStack_218 [8];
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  undefined1 auStack_1e8 [8];
  undefined *local_1e0;
  undefined1 auStack_1d8 [8];
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined4 local_1b8;
  cfstringStruct *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined **local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined **local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined **local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined **local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined **local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined **local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined **local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined **local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined **local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined **local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a8 = (cfstringStruct *)0x0;
  local_1a0 = param_2;
  local_198 = param_1;
  _objc_storeStrong(&local_1a8,param_3);
  pcVar6 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_state_026cab20);
  if (pcVar6 == (cfstringStruct *)0x1) {
    pcVar6 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_1b8 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_accessibilityIdentifier_0269ec20);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_1c0;
      local_1c8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_accessibilityLabel_0269e1c8);
      _objc_retainAutoreleasedReturnValue();
      local_460 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_460 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = local_460;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      pcVar6 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
      if ((pcVar6 == (cfstringStruct *)0x0) ||
         (pcVar6 = local_1c8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_1c8,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupAllId),
         ((ulong)pcVar6 & 1) != 0)) {
        local_1b8 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        _objc_initWeak(auStack_1d8,local_198);
        pcVar6 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c8,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupUngroupedId);
        if (((ulong)pcVar6 & 1) == 0) {
          puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_indexOfGroupId__026a1070,
                     local_1c8);
          puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
          local_248 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_groups_026a1048);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
          local_250 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_memberCountForGroupId__026a1078,
                     local_1c8);
          local_258 = puVar4;
          if (local_248 == (undefined *)0x7fffffffffffffff) {
            local_1b8 = 1;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_1c8;
            local_260 = puVar3;
            if (0 < (long)local_248) {
              local_a0 = &cf_title;
              local_90 = &cf_n_v;
              local_98 = &cf_handler;
              ppuVar5 = &local_288;
              local_288 = PTR___NSConcreteStackBlock_02578660;
              local_280 = 0xc2000000;
              local_27c = 0;
              local_278 = FUN_0025b868;
              local_270 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_268 = pcVar6;
              local_289 = 1;
              _objc_retainBlock();
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_88 = ppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_a0,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              local_289 = 0;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(ppuVar5);
              pcVar6 = local_1c8;
              puVar3 = local_260;
              local_c0 = &cf_title;
              local_b0 = &cf_Ny;
              local_b8 = &cf_handler;
              ppuVar5 = &local_2b8;
              local_2b8 = PTR___NSConcreteStackBlock_02578660;
              local_2b0 = 0xc2000000;
              local_2ac = 0;
              local_2a8 = FUN_0025b8f4;
              local_2a0 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_298 = pcVar6;
              local_2b9 = 1;
              _objc_retainBlock();
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_a8 = ppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_c0,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              local_2b9 = 0;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(ppuVar5);
              _objc_storeStrong(&local_298);
              _objc_storeStrong(&local_268,0);
            }
            pcVar6 = local_1c8;
            puVar3 = local_260;
            if ((long)local_248 < (long)(local_250 + -1)) {
              local_e0 = &cf_title;
              local_d0 = &cf_Ny;
              local_d8 = &cf_handler;
              ppuVar5 = &local_2e8;
              local_2e8 = PTR___NSConcreteStackBlock_02578660;
              local_2e0 = 0xc2000000;
              local_2dc = 0;
              local_2d8 = FUN_0025b984;
              local_2d0 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_2c8 = pcVar6;
              local_2e9 = 1;
              _objc_retainBlock();
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_c8 = ppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_e0,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              local_2e9 = 0;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(ppuVar5);
              pcVar6 = local_1c8;
              puVar3 = local_260;
              local_100 = &cf_title;
              local_f0 = &cf_n__;
              local_f8 = &cf_handler;
              ppuVar5 = &local_318;
              local_318 = PTR___NSConcreteStackBlock_02578660;
              local_310 = 0xc2000000;
              local_30c = 0;
              local_308 = FUN_0025ba14;
              local_300 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_2f8 = pcVar6;
              local_319 = 1;
              _objc_retainBlock();
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_e8 = ppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f0,&local_100,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              local_319 = 0;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(ppuVar5);
              _objc_storeStrong(&local_2f8);
              _objc_storeStrong(&local_2c8,0);
            }
            puVar3 = local_260;
            local_120 = &cf_title;
            local_110 = &cf__TT;
            local_118 = &cf_handler;
            ppuVar5 = &local_358;
            local_358 = PTR___NSConcreteStackBlock_02578660;
            local_350 = 0xc2000000;
            local_34c = 0;
            local_348 = FUN_0025baa0;
            local_340 = &DAT_0257a630;
            _objc_copyWeak(auStack_328,auStack_1d8);
            pcVar7 = local_1c8;
            local_35b = 1;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar6 = local_1d0;
            local_338 = pcVar7;
            local_35a = 1;
            (*(code *)PTR__objc_retain_02578638)();
            local_330 = pcVar6;
            local_359 = 1;
            _objc_retainBlock();
            puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_108 = ppuVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_110,&local_120,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            local_359 = 0;
            local_35a = 0;
            local_35b = 0;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(ppuVar5);
            puVar3 = local_260;
            local_140 = &cf_title;
            local_130 = &cf_e_R_;
            local_138 = &cf_handler;
            ppuVar5 = &local_388;
            local_388 = PTR___NSConcreteStackBlock_02578660;
            local_380 = 0xc2000000;
            local_37c = 0;
            local_378 = FUN_0025bb38;
            local_370 = &DAT_02578da0;
            _objc_copyWeak(auStack_368,auStack_1d8);
            local_389 = 1;
            _objc_retainBlock();
            puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_128 = ppuVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_130,&local_140,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            local_389 = 0;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(ppuVar5);
            puVar3 = local_260;
            if (0 < (long)local_258) {
              local_160 = &cf_title;
              local_150 = &cf_nzz_g_;
              local_158 = &cf_handler;
              ppuVar5 = &local_3c8;
              local_3c8 = PTR___NSConcreteStackBlock_02578660;
              local_3c0 = 0xc2000000;
              local_3bc = 0;
              local_3b8 = FUN_0025bbb8;
              local_3b0 = &DAT_025796f0;
              pcVar6 = local_1d0;
              (*(code *)PTR__objc_retain_02578638)();
              local_3ca = 1;
              local_398 = local_258;
              pcVar7 = local_1c8;
              local_3a8 = pcVar6;
              (*(code *)PTR__objc_retain_02578638)();
              local_3c9 = 1;
              local_3a0 = pcVar7;
              _objc_retainBlock();
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_148 = ppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_150,&local_160,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              local_3c9 = 0;
              local_3ca = 0;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(ppuVar5);
              _objc_storeStrong(&local_3a0);
              _objc_storeStrong(&local_3a8,0);
            }
            puVar3 = local_260;
            local_190 = &cf_title;
            local_178 = &cf_RdR_;
            local_188 = &cf_destructive;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            local_180 = &cf_handler;
            ppuVar5 = &local_400;
            local_400 = PTR___NSConcreteStackBlock_02578660;
            local_3f8 = 0xc2000000;
            local_3f4 = 0;
            local_3f0 = FUN_0025be98;
            local_3e8 = &DAT_02578e60;
            pcVar6 = local_1d0;
            local_170 = puVar4;
            (*(code *)PTR__objc_retain_02578638)();
            local_402 = 1;
            pcVar7 = local_1c8;
            local_3e0 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            local_401 = 1;
            local_3d8 = pcVar7;
            _objc_retainBlock();
            puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_168 = ppuVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_178,&local_190,3);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            local_401 = 0;
            local_402 = 0;
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(ppuVar5);
            (*(code *)PTR__objc_release_02578630)();
            puVar3 = local_260;
            FUN_0025b754();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            pcVar6 = local_1d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_860 = &cf__tR_;
            }
            else {
              local_860 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_418 = local_860;
            }
            local_419 = pcVar6 != (cfstringStruct *)0x0;
            (*(code *)PTR__objc_retain_02578638)();
            local_410 = local_860;
            if (local_419) {
              (*(code *)PTR__objc_release_02578630)(local_418);
            }
            FUN_002553c8(local_410,local_260,local_1c0);
            _objc_storeStrong(&local_410);
            _objc_storeStrong(&local_3d8,0);
            _objc_storeStrong(&local_3e0,0);
            _objc_destroyWeak(auStack_368);
            _objc_storeStrong(&local_330,0);
            _objc_storeStrong(&local_338,0);
            _objc_destroyWeak(auStack_328);
            _objc_storeStrong(&local_260,0);
            local_1b8 = 0;
          }
        }
        else {
          local_60 = &cf_title;
          local_50 = &cf__TT;
          local_58 = &cf_handler;
          ppuVar5 = &local_210;
          local_210 = PTR___NSConcreteStackBlock_02578660;
          local_208 = 0xc2000000;
          local_204 = 0;
          local_200 = FUN_0025b5c4;
          local_1f8 = &DAT_025797f0;
          _objc_copyWeak(auStack_1e8,auStack_1d8);
          pcVar6 = local_1c8;
          local_23b = 1;
          (*(code *)PTR__objc_retain_02578638)();
          local_1f0 = pcVar6;
          local_23a = 1;
          _objc_retainBlock();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_48 = ppuVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_60,2);
          _objc_retainAutoreleasedReturnValue();
          local_80 = &cf_title;
          local_70 = &cf_e_R_;
          local_78 = &cf_handler;
          ppuVar1 = &local_238;
          local_238 = PTR___NSConcreteStackBlock_02578660;
          local_230 = 0xc2000000;
          local_22c = 0;
          local_228 = FUN_0025b6d4;
          local_220 = &DAT_02578da0;
          local_40 = puVar3;
          _objc_copyWeak(auStack_218,auStack_1d8);
          local_239 = 1;
          _objc_retainBlock();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_68 = ppuVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_80,2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          local_38 = puVar4;
          FUN_0025b754();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_30 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          local_239 = 0;
          local_23a = 0;
          local_23b = 0;
          local_1e0 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(ppuVar1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(ppuVar5);
          pcVar6 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_528 = &cf__gR_;
          }
          else {
            local_528 = local_1d0;
          }
          FUN_002553c8(local_528,local_1e0,local_1c0);
          local_1b8 = 1;
          _objc_storeStrong(&local_1e0);
          _objc_destroyWeak(auStack_218);
          _objc_storeStrong(&local_1f0,0);
          _objc_destroyWeak(auStack_1e8);
        }
        _objc_destroyWeak(auStack_1d8);
      }
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_1c8,0);
    }
    _objc_storeStrong(&local_1c0,0);
  }
  else {
    local_1b8 = 1;
  }
  _objc_storeStrong(&local_1a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

