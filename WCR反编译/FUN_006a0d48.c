// FUN_006a0d48 @ 006a0d48

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006a0d48(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double local_5b0;
  byte local_598;
  ulong local_510;
  ulong local_508;
  ulong local_498;
  ulong local_490;
  cfstringStruct *local_468;
  cfstringStruct *local_460;
  cfstringStruct *local_458;
  byte local_449;
  ulong local_448;
  ulong local_440;
  ulong local_438;
  undefined *local_430;
  ulong local_428;
  double local_420;
  double dStack_418;
  double local_410;
  double dStack_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  ulong local_398;
  undefined *local_390;
  ulong local_388 [5];
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  ulong local_338 [5];
  char *local_310;
  ulong local_308;
  char *local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined *local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  ulong local_250;
  byte local_241;
  undefined *local_240;
  undefined *local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double dStack_218;
  int local_20c;
  ulong local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  ulong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_6;
  local_130 = param_5;
  _objc_storeStrong(&local_140,param_7);
  _memset(auStack_188,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_490 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_490 != 0) {
    lVar7 = *local_178;
    local_498 = 0;
    do {
      do {
        dVar10 = param_1;
        dVar12 = param_2;
        dVar14 = param_3;
        dVar11 = param_4;
        if (*local_178 - lVar7 != 0) {
          _objc_enumerationMutation(*local_178 - lVar7,uVar1);
          dVar10 = param_1;
          dVar12 = param_2;
          dVar14 = param_3;
          dVar11 = param_4;
        }
        uVar8 = *(ulong *)(local_180 + local_498 * 8);
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_148 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
        param_1 = dVar10;
        param_2 = dVar12;
        param_3 = dVar14;
        param_4 = dVar11;
        if ((uVar8 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
          param_2 = 150.0;
          param_1 = dVar11;
          param_3 = dVar12;
          param_4 = dVar10;
          local_1b8 = dVar10;
          local_1b0 = dVar12;
          local_1a8 = dVar14;
          local_1a0 = dVar11;
          if (((150.0 < dVar11) && (param_2 = 300.0, dVar11 < 300.0)) &&
             (param_2 = 100.0, param_1 = dVar12, dVar12 < 100.0)) {
            dVar14 = dVar12;
            _memset(auStack_200,0,0x40);
            uVar8 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_508 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_508 != 0) {
              lVar7 = *local_1f0;
              local_510 = 0;
              do {
                do {
                  dVar11 = dVar12;
                  dVar13 = param_2;
                  if (*local_1f0 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_1f0 - lVar7,uVar8);
                    dVar11 = dVar12;
                    dVar13 = param_2;
                  }
                  uVar9 = *(ulong *)(local_1f8 + local_510 * 8);
                  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                  local_1c0 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
                  uVar5 = local_1c0;
                  if ((uVar9 & 1) == 0) {
                    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
                    uVar9 = local_1c0;
                    dVar12 = dVar11;
                    param_2 = dVar13;
                    if ((uVar5 & 1) != 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_438 = uVar9;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_text_0269ce68);
                      _objc_retainAutoreleasedReturnValue();
                      local_440 = uVar9;
                      if ((uVar9 != 0) &&
                         ((*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_length_0269cca0),
                         uVar5 = local_440, uVar9 != 0)) {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_448 = uVar5;
                        local_449 = 0;
                        if ((DAT_028cbdc8 != 0) &&
                           ((lVar6 = DAT_028cbdc8,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (DAT_028cbdc8,PTR_s_length_0269cca0), lVar6 != 0 &&
                            (uVar5 = local_440,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_440,PTR_s_isEqualToString__0269ccc8,&cf__O__NecN),
                            (uVar5 & 1) != 0)))) {
                          _objc_storeStrong(&local_448,DAT_028cbdc8);
                          local_449 = 1;
                        }
                        (*(code *)PTR__objc_retain_02578638)();
                        local_458 = &cf___;
                        if (((DAT_028cbdd8 != 0) &&
                            (lVar6 = DAT_028cbdd8,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (DAT_028cbdd8,PTR_s_length_0269cca0), lVar6 != 0)) &&
                           (uVar5 = local_440,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_440,PTR_s_containsString__0269d0b0,local_458),
                           (uVar5 & 1) != 0)) {
                          uVar9 = local_448;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_448,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,
                                     local_458,DAT_028cbdd8);
                          _objc_retainAutoreleasedReturnValue();
                          uVar5 = local_448;
                          local_448 = uVar9;
                          (*(code *)PTR__objc_release_02578630)(uVar5);
                          local_449 = 1;
                        }
                        (*(code *)PTR__objc_retain_02578638)();
                        local_460 = &cf__N_O_ucN_v;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_468 = &cf__N_O_ucN_v;
                        if ((DAT_028cbde0 != 0) &&
                           (lVar6 = DAT_028cbde0,
                           (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbde0,PTR_s_length_0269cca0)
                           , lVar6 != 0)) {
                          uVar5 = local_440;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_440,PTR_s_containsString__0269d0b0,local_460);
                          if ((uVar5 & 1) == 0) {
                            uVar5 = local_440;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_440,PTR_s_containsString__0269d0b0,local_468);
                            if ((uVar5 & 1) != 0) {
                              uVar9 = local_448;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_448,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,
                                         local_468,DAT_028cbde0);
                              _objc_retainAutoreleasedReturnValue();
                              uVar5 = local_448;
                              local_448 = uVar9;
                              (*(code *)PTR__objc_release_02578630)(uVar5);
                              local_449 = 1;
                            }
                          }
                          else {
                            uVar9 = local_448;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_448,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,
                                       local_460,DAT_028cbde0);
                            _objc_retainAutoreleasedReturnValue();
                            uVar5 = local_448;
                            local_448 = uVar9;
                            (*(code *)PTR__objc_release_02578630)(uVar5);
                            local_449 = 1;
                          }
                        }
                        if ((local_449 & 1) != 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_438,PTR_s_setText__026caa88,local_448);
                        }
                        _objc_storeStrong(&local_468);
                        _objc_storeStrong(&local_460,0);
                        _objc_storeStrong(&local_458,0);
                        _objc_storeStrong(&local_448,0);
                      }
                      _objc_storeStrong(&local_440);
                      _objc_storeStrong(&local_438,0);
                      dVar12 = dVar11;
                      param_2 = dVar13;
                    }
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_208 = uVar5;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_tag_026cab98);
                    if (uVar5 - 0x24f6de == 0) {
                      local_20c = 5;
                      dVar12 = dVar11;
                      param_2 = dVar13;
                      dVar13 = dVar14;
                      dVar11 = dVar10;
                    }
                    else {
                      _WCRefineInstallPluginHubHideGesture(uVar5 - 0x24f6de,local_208);
                      param_2 = dVar14;
                      dVar12 = dVar10;
                      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_frame_026ca640);
                      local_230 = dVar11;
                      dStack_228 = dVar13;
                      local_220 = param_2;
                      dStack_218 = dVar12;
                      if ((((DAT_028cbe18 & 1) != 0) && (DAT_028cbde8 != 0)) &&
                         (lVar6 = DAT_028cbde8,
                         (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbde8,PTR_s_length_0269cca0),
                         lVar6 != 0)) {
                        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSFileManager_026ce158,
                                   PTR_s_defaultManager_026ca5f0);
                        _objc_retainAutoreleasedReturnValue();
                        local_238 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar2,PTR_s_fileExistsAtPath__026ca630,DAT_028cbde8);
                        if (((ulong)puVar2 & 1) != 0) {
                          puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSData_026ce1d0,
                                     PTR_s_dataWithContentsOfFile__0269e0b8,DAT_028cbde8);
                          _objc_retainAutoreleasedReturnValue();
                          local_240 = puVar2;
                          if (puVar2 == (undefined *)0x0) {
                            local_598 = 0;
                          }
                          else {
                            puVar3 = PTR_WCRefineEmoticonUtil_026ce1c8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_isGifData__0269e0a8,
                                       puVar2);
                            local_598 = (byte)puVar3;
                          }
                          local_241 = local_598 & 1;
                          uVar5 = local_208;
                          _objc_getAssociatedObject(local_208,&DAT_028cbe1a);
                          _objc_retainAutoreleasedReturnValue();
                          local_250 = uVar5;
                          if (uVar5 == 0) {
                            dStack_268 = dStack_228;
                            local_270 = local_230;
                            dStack_258 = dStack_218;
                            local_260 = local_220;
                            puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_230,dStack_228,local_220,dStack_218,
                                       PTR__OBJC_CLASS___NSValue_026ce1f0,
                                       PTR_s_valueWithCGRect__0269e130);
                            _objc_retainAutoreleasedReturnValue();
                            local_278 = puVar2;
                            _objc_setAssociatedObject(local_208,&DAT_028cbe1a,puVar2,1);
                            _objc_storeStrong(&local_278,0);
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar5,PTR_s_getValue__026a0480,&local_270);
                          }
                          local_2b0 = local_260;
                          local_2b8 = dStack_258;
                          if (dStack_258 <= local_260) {
                            local_5b0 = dStack_258;
                          }
                          else {
                            local_5b0 = local_260;
                          }
                          local_2c0 = local_5b0;
                          local_2a8 = local_5b0;
                          param_2 = local_5b0 * DAT_026f4528;
                          local_2d0 = local_270 + local_260 / 2.0;
                          local_2d8 = dStack_268 + dStack_258 / 2.0;
                          dVar11 = local_2d0 - param_2 / 2.0;
                          dVar13 = local_2d8 - param_2 / 2.0;
                          dVar12 = param_2;
                          local_2c8 = param_2;
                          FUN_006a4050();
                          local_2f8 = dVar11;
                          dStack_2f0 = dVar13;
                          local_2e8 = param_2;
                          dStack_2e0 = dVar12;
                          if ((local_241 & 1) == 0) {
                            dVar10 = param_2;
                            dVar14 = dVar12;
                            local_420 = dVar11;
                            dStack_418 = dVar13;
                            local_410 = param_2;
                            dStack_408 = dVar12;
                            local_400 = dVar11;
                            dStack_3f8 = dVar13;
                            local_3f0 = param_2;
                            dStack_3e8 = dVar12;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (dVar11,dVar13,local_208,PTR_s_setFrame__026ca960);
                            dVar12 = (local_2c8 / 2.0) * DAT_026f4530;
                            uVar5 = local_208;
                            param_2 = DAT_026f4530;
                            (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_layer_026ca788);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)();
                            (*(code *)PTR__objc_release_02578630)(uVar5);
                            uVar5 = local_208;
                            (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_layer_026ca788);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)();
                            (*(code *)PTR__objc_release_02578630)(uVar5);
                            uVar5 = local_208;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_208,PTR_s_superview_026cab50);
                            _objc_retainAutoreleasedReturnValue();
                            dVar13 = dVar10;
                            dVar11 = dVar14;
                            local_428 = uVar5;
                            if (uVar5 != 0) {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (uVar5,PTR_s_setClipsToBounds__026ca8c8,0);
                              dVar13 = dVar10;
                              dVar11 = dVar14;
                            }
                            puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___UIImage_026cdfd0,
                                       PTR_s_imageWithContentsOfFile__0269e0e0,DAT_028cbde8);
                            _objc_retainAutoreleasedReturnValue();
                            local_430 = puVar2;
                            if (puVar2 != (undefined *)0x0) {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_208,PTR_s_setImage__026ca978,puVar2);
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_208,PTR_s_setContentMode__026ca8e0,2);
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_208,PTR_s_setClipsToBounds__026ca8c8,1);
                            }
                            _objc_storeStrong(&local_430);
                            _objc_storeStrong(&local_428,0);
                          }
                          else {
                            pcVar4 = "MMEmoticonView";
                            _objc_getClass();
                            uVar5 = local_208;
                            local_300 = pcVar4;
                            _objc_getAssociatedObject(local_208,&DAT_028cbe1b);
                            _objc_retainAutoreleasedReturnValue();
                            local_308 = uVar5;
                            if ((uVar5 == 0) ||
                               ((*(code *)PTR__objc_msgSend_02578628)
                                          (uVar5,PTR_s_boolValue_026ca540), (uVar5 & 1) == 0)) {
                              if (local_300 == (char *)0x0) {
                                dStack_358 = dStack_2f0;
                                local_360 = local_2f8;
                                dStack_348 = dStack_2e0;
                                local_350 = local_2e8;
                                dVar13 = local_2e8;
                                dVar11 = dStack_2e0;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_2f8,dStack_2f0,local_208,PTR_s_setFrame__026ca960);
                                dVar12 = (local_2c8 / 2.0) * DAT_026f4530;
                                uVar5 = local_208;
                                param_2 = DAT_026f4530;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_208,PTR_s_layer_026ca788);
                                _objc_retainAutoreleasedReturnValue();
                                (*(code *)PTR__objc_msgSend_02578628)();
                                (*(code *)PTR__objc_release_02578630)(uVar5);
                                uVar5 = local_208;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_208,PTR_s_layer_026ca788);
                                _objc_retainAutoreleasedReturnValue();
                                (*(code *)PTR__objc_msgSend_02578628)();
                                (*(code *)PTR__objc_release_02578630)(uVar5);
                                uVar5 = local_208;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_208,PTR_s_superview_026cab50);
                                _objc_retainAutoreleasedReturnValue();
                                local_388[0] = uVar5;
                                if (uVar5 != 0) {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (uVar5,PTR_s_setClipsToBounds__026ca8c8,0);
                                }
                                puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR__OBJC_CLASS___UIImage_026cdfd0,
                                           PTR_s_imageWithData__0269d4c8,local_240);
                                _objc_retainAutoreleasedReturnValue();
                                local_390 = puVar2;
                                if (puVar2 != (undefined *)0x0) {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_208,PTR_s_setImage__026ca978,puVar2);
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_208,PTR_s_setContentMode__026ca8e0,2);
                                }
                                _objc_storeStrong(&local_390);
                                _objc_storeStrong(local_388,0);
                              }
                              else {
                                pcVar4 = local_300;
                                _objc_alloc();
                                dVar13 = local_2e8;
                                dVar11 = dStack_2e0;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_2f8,dStack_2f0,pcVar4,PTR_s_initWithFrame__026ca6e8
                                          );
                                local_310 = pcVar4;
                                _WCRefineInstallPluginHubHideGesture(pcVar4);
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_310,PTR_s_setTag__026caa80,0x24f6de);
                                dVar12 = (local_2c8 / 2.0) * DAT_026f4530;
                                pcVar4 = local_310;
                                param_2 = DAT_026f4530;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_310,PTR_s_layer_026ca788);
                                _objc_retainAutoreleasedReturnValue();
                                (*(code *)PTR__objc_msgSend_02578628)();
                                (*(code *)PTR__objc_release_02578630)(pcVar4);
                                pcVar4 = local_310;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_310,PTR_s_layer_026ca788);
                                _objc_retainAutoreleasedReturnValue();
                                (*(code *)PTR__objc_msgSend_02578628)();
                                (*(code *)PTR__objc_release_02578630)(pcVar4);
                                uVar5 = local_208;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_208,PTR_s_superview_026cab50);
                                _objc_retainAutoreleasedReturnValue();
                                local_338[0] = uVar5;
                                if (uVar5 != 0) {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (uVar5,PTR_s_addSubview__026ca4c0,local_310);
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_338[0],PTR_s_setClipsToBounds__026ca8c8,0);
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_208,PTR_s_setHidden__026ca970,1);
                                  uVar5 = local_208;
                                  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (PTR__OBJC_CLASS___NSNumber_026ce038,
                                             PTR_s_numberWithBool__0269ce60,1);
                                  _objc_retainAutoreleasedReturnValue();
                                  _objc_setAssociatedObject(uVar5,&DAT_028cbe1b,puVar2,1);
                                  (*(code *)PTR__objc_release_02578630)(puVar2);
                                  _objc_setAssociatedObject(local_208,&DAT_028cbe1c,local_310,1);
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (PTR_WCRefineEmoticonUtil_026ce1c8,
                                             PTR_s_setEmoticonOnView_imageAtPath__026a65e0,local_310
                                             ,DAT_028cbde8);
                                }
                                _objc_storeStrong(local_338);
                                _objc_storeStrong(&local_310,0);
                              }
                            }
                            else {
                              uVar5 = local_208;
                              _objc_getAssociatedObject(local_208,&DAT_028cbe1c);
                              _objc_retainAutoreleasedReturnValue();
                              local_398 = uVar5;
                              if (uVar5 != 0) {
                                puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
                                if ((uVar5 & 1) != 0) {
                                  _WCRefineInstallPluginHubHideGesture(local_398);
                                  dStack_3b8 = dStack_2f0;
                                  local_3c0 = local_2f8;
                                  dStack_3a8 = dStack_2e0;
                                  local_3b0 = local_2e8;
                                  dVar13 = local_2e8;
                                  dVar11 = dStack_2e0;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_2f8,dStack_2f0,local_398,PTR_s_setFrame__026ca960
                                            );
                                  dVar12 = (local_2c8 / 2.0) * DAT_026f4530;
                                  uVar5 = local_398;
                                  param_2 = DAT_026f4530;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_398,PTR_s_layer_026ca788);
                                  _objc_retainAutoreleasedReturnValue();
                                  (*(code *)PTR__objc_msgSend_02578628)();
                                  (*(code *)PTR__objc_release_02578630)(uVar5);
                                }
                              }
                              _objc_storeStrong(&local_398,0);
                            }
                            _objc_storeStrong(&local_308,0);
                          }
                          _objc_storeStrong(&local_250);
                          _objc_storeStrong(&local_240,0);
                        }
                        _objc_storeStrong(&local_238,0);
                      }
                      local_20c = 0;
                    }
                    _objc_storeStrong(&local_208,0);
                    dVar14 = dVar13;
                    dVar10 = dVar11;
                  }
                  local_510 = local_510 + 1;
                } while (local_510 < local_508);
                local_508 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                           auStack_128,0x10);
                local_510 = 0;
              } while (local_508 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar8);
            local_20c = 1;
            goto LAB_006a2808;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_findAndReplaceImageView__026a6590,local_148);
        local_498 = local_498 + 1;
      } while (local_498 < local_490);
      local_490 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_498 = 0;
    } while (local_490 != 0);
  }
  local_20c = 0;
LAB_006a2808:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_20c == 0) {
    local_20c = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

