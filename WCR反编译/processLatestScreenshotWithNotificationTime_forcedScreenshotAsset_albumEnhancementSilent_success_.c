// processLatestScreenshotWithNotificationTime:forcedScreenshotAsset:albumEnhancementSilent:success: @ 0070b1f4

/* WARNING: Removing unreachable block (ram,0x0070b3a4) */
/* Function Stack Size: 0x2c bytes */

void WCRefineScreenshotFrameProcessor::
     processLatestScreenshotWithNotificationTime_forcedScreenshotAsset_albumEnhancementSilent_success_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  ID IVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  long lVar12;
  ulong uVar13;
  double in_d0;
  double dVar14;
  undefined *local_5a0;
  undefined *local_598;
  undefined *local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  code *local_4d8;
  undefined *local_4d0;
  ID local_4c8;
  long local_4c0;
  undefined **local_4b8;
  long local_4b0;
  byte local_4a8;
  undefined *local_4a0;
  undefined4 local_498;
  undefined4 local_494;
  code *local_490;
  undefined *local_488;
  ID local_480;
  byte local_471;
  long local_470;
  long local_468;
  undefined *local_460;
  cfstringStruct *local_458;
  cfstringStruct *local_450;
  cfstringStruct *local_448;
  cfstringStruct *local_440;
  cfstringStruct *local_438;
  ID local_430;
  undefined *local_428;
  undefined *local_420;
  undefined *local_418;
  undefined4 local_410;
  undefined4 local_40c;
  code *local_408;
  undefined *local_400;
  ID local_3f8;
  long local_3f0;
  ID local_3e8;
  ID local_3e0;
  long local_3d8;
  undefined **local_3d0;
  long local_3c8;
  byte local_3c0;
  undefined *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  code *local_3a8;
  undefined *local_3a0;
  ID local_398;
  byte local_389;
  long local_388;
  long local_380;
  ID local_378;
  ID local_370;
  long local_368;
  undefined *local_360;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  undefined1 local_329;
  ID local_328;
  ID local_320;
  double local_318;
  undefined *local_310;
  byte local_301;
  ID local_300;
  undefined1 local_2f1;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  code *local_2e0;
  undefined *local_2d8;
  ID local_2d0;
  long local_2c8;
  undefined **local_2c0;
  long local_2b8;
  byte local_2b0;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  undefined8 *local_288;
  byte local_279;
  long local_278;
  undefined *local_270;
  undefined *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  code *local_258;
  undefined *local_250;
  undefined *local_248;
  undefined8 *local_240;
  byte local_238;
  double local_230;
  undefined8 uStack_228;
  undefined8 local_218;
  undefined8 *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  undefined1 local_1c1;
  double local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined *local_168;
  long local_160;
  undefined *local_158;
  undefined *local_150;
  long local_148;
  int local_140;
  undefined1 *local_130;
  byte local_121;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ID local_100;
  byte local_f8;
  undefined **local_f0;
  byte local_e1;
  long local_e0;
  byte local_d1;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 auStack_b0 [128];
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d1 = (byte)param_5;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_6);
  IVar8 = local_b8;
  local_f8 = local_d1 & 1;
  ppuVar5 = &local_120;
  local_120 = PTR___NSConcreteStackBlock_02578660;
  local_118 = 0xc2000000;
  local_114 = 0;
  local_110 = FUN_0070d958;
  local_108 = &DAT_0257f2c8;
  local_e1 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = IVar8;
  _objc_retainBlock();
  local_121 = local_d0 == 0 && (local_c8 != 0 && local_c8 != DAT_028cc328);
  puVar6 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  local_f0 = ppuVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
             PTR_s_authorizationStatusForAccessLeve_026a1760,2);
  local_130 = puVar6;
  if ((puVar6 != (undefined1 *)((long)&MACH_HEADER.magic + 3)) &&
     ((dword *)puVar6 != &MACH_HEADER.cputype)) {
    if (local_e0 != 0) {
      (**(code **)(local_e0 + 0x10))(local_e0,0);
    }
    local_140 = 1;
    goto LAB_0070d6d4;
  }
  local_148 = 0;
  if (local_d0 == 0) {
    puVar6 = PTR__OBJC_CLASS___PHFetchOptions_026ce868;
    _objc_alloc_init();
    puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_026ce870;
    local_150 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSortDescriptor_026ce870,
               PTR_s_sortDescriptorWithKey_ascending__026a6f68,&cf_creationDate,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setSortDescriptors__026a6f70);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setFetchLimit__026a6f78,5);
    puVar6 = PTR__OBJC_CLASS___PHAsset_026ce530;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_fetchAssetsWithMediaType_options_026a6f80,1,
               local_150);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
    if (puVar6 == (undefined *)0x0) {
      if (local_e0 != 0) {
        (**(code **)(local_e0 + 0x10))(local_e0,0);
      }
      local_140 = 1;
    }
    else {
      local_160 = 0;
      puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar6;
      _memset(auStack_1b0,0,0x40);
      puVar6 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_598 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_b0,0x10)
      ;
      if (local_598 != (undefined *)0x0) {
        lVar12 = *local_1a0;
        local_5a0 = (undefined *)0x0;
        do {
          do {
            if (*local_1a0 - lVar12 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar12,puVar6);
            }
            uVar13 = *(ulong *)(local_1a8 + (long)local_5a0 * 8);
            local_170 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_creationDate_026a6fb0);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar13;
            if (uVar13 == 0) {
              local_140 = 6;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_168,PTR_s_timeIntervalSinceDate__0269cb78,uVar13);
              if ((local_121 & 1) == 0) {
                uVar13 = local_170;
                local_1c0 = in_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_mediaSubtypes_026a6fc0);
                local_1c1 = (uVar13 & 4) != 0;
                in_d0 = local_1c0;
                if ((0.0 <= local_1c0) && (local_1c0 <= 10.0)) {
                  if ((bool)local_1c1) {
                    _objc_storeStrong(&local_148,local_170);
                    local_140 = 5;
                    in_d0 = local_1c0;
                    goto LAB_0070b900;
                  }
                  if (local_160 == 0) {
                    _objc_storeStrong(&local_160,local_170);
                    in_d0 = local_1c0;
                  }
                }
              }
              else if ((0.0 <= in_d0) && (in_d0 <= 10.0)) {
                _objc_storeStrong(&local_148,local_170);
                local_140 = 5;
                goto LAB_0070b900;
              }
              local_140 = 0;
            }
LAB_0070b900:
            _objc_storeStrong(&local_1b8,0);
            if ((local_140 != 0) && (local_140 != 6)) goto LAB_0070b9a0;
            local_5a0 = local_5a0 + 1;
          } while (local_5a0 < local_598);
          local_598 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_b0,
                     0x10);
          local_5a0 = (undefined *)0x0;
        } while (local_598 != (undefined *)0x0);
      }
      local_140 = 0;
LAB_0070b9a0:
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (((local_148 == 0) && ((local_121 & 1) == 0)) && (local_160 != 0)) {
        _objc_storeStrong(&local_148,local_160);
      }
      if (local_148 == 0) {
        if (local_e0 != 0) {
          (**(code **)(local_e0 + 0x10))(local_e0,0);
        }
        local_140 = 1;
      }
      else {
        local_140 = 0;
      }
      _objc_storeStrong(&local_168);
      _objc_storeStrong(&local_160,0);
    }
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_150,0);
    if (local_140 == 0) goto LAB_0070baf0;
  }
  else {
    _objc_storeStrong(&local_148,local_d0);
LAB_0070baf0:
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_screenshotWatermarkDelay_026a1f10);
    dVar14 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_screenshotFrameDelay_026a1f18);
    local_1d1 = in_d0 <= dVar14;
    puVar6 = PTR__OBJC_CLASS___PHImageManager_026ce880;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHImageManager_026ce880,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___PHImageRequestOptions_026ce8e8;
    local_1e0 = puVar6;
    _objc_alloc_init();
    local_1e8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setSynchronous__026a7628,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setDeliveryMode__026a7020,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setResizeMode__026a7630,0);
    lVar12 = local_148;
    puVar2 = local_1d0;
    puVar7 = local_1e0;
    puVar6 = local_1e8;
    local_240 = &local_218;
    local_218 = 0;
    local_208 = 0x32000000;
    local_204 = 0x30;
    local_200 = FUN_0070d9f4;
    local_1f8 = FUN_0070da48;
    local_1f0 = 0;
    uStack_228 = *(undefined8 *)(PTR__PHImageManagerMaximumSize_02578610 + 8);
    local_230 = *(double *)PTR__PHImageManagerMaximumSize_02578610;
    local_268 = PTR___NSConcreteStackBlock_02578660;
    local_260 = 0xc2000000;
    local_25c = 0;
    local_258 = FUN_0070da74;
    local_250 = &DAT_0257f2f8;
    local_238 = local_1d1 & 1;
    local_210 = local_240;
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = puVar2;
    dVar14 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_230,uStack_228,puVar7,PTR_s_requestImageForAsset_targetSize__026a7638,lVar12,0,
               puVar6,&local_268);
    if (local_210[5] == 0) {
      if (local_e0 != 0) {
        (**(code **)(local_e0 + 0x10))(local_e0,0);
      }
      local_140 = 1;
    }
    else {
      puVar6 = PTR_WCRefineScreenshotFrameProcessor_026ce8e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScreenshotFrameProcessor_026ce8e0,PTR_s_sharedProcessor_026a6d98);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_270 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_screenshotFrameEnabled_026a1ef0);
      if (((((ulong)puVar6 & 1) == 0) || (local_270 == (undefined *)0x0)) ||
         (puVar6 = local_270, (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_length_0269cca0)
         , puVar6 == (undefined *)0x0)) {
        puVar6 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_screenshotWatermarkEnabled_026a1ee0);
        lVar12 = local_148;
        if (((ulong)puVar6 & 1) == 0) {
          if (local_e0 != 0) {
            (**(code **)(local_e0 + 0x10))(local_e0,0);
          }
          local_140 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_278 = lVar12;
          local_279 = local_121 & 1;
          puVar6 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = local_b8;
          local_2a8 = PTR___NSConcreteStackBlock_02578660;
          local_2a0 = 0xc2000000;
          local_29c = 0;
          local_298 = FUN_0070de80;
          local_290 = &DAT_0257b2e8;
          local_288 = &local_218;
          local_2f0 = PTR___NSConcreteStackBlock_02578660;
          local_2e8 = 0xc2000000;
          local_2e4 = 0;
          local_2e0 = FUN_0070ded8;
          local_2d8 = &DAT_0257f358;
          (*(code *)PTR__objc_retain_02578638)();
          lVar12 = local_278;
          local_2d0 = IVar8;
          (*(code *)PTR__objc_retain_02578638)();
          ppuVar5 = local_f0;
          local_2c8 = lVar12;
          local_2b0 = local_e1 & 1;
          (*(code *)PTR__objc_retain_02578638)();
          lVar12 = local_e0;
          local_2c0 = ppuVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_2b8 = lVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_performChanges_completionHandler_026a1740,&local_2a8,&local_2f0);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_140 = 1;
          _objc_storeStrong(&local_2b8);
          _objc_storeStrong(&local_2c0,0);
          _objc_storeStrong(&local_2c8,0);
          _objc_storeStrong(&local_2d0,0);
          _objc_storeStrong(&local_278,0);
        }
      }
      else {
        IVar8 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isDoubleModeTemplate_026a7658);
        local_2f1 = (undefined1)IVar8;
        if ((IVar8 & 1) == 0) {
          IVar8 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_applyFrameToImage__026a76b8,local_210[5]);
          _objc_retainAutoreleasedReturnValue();
          local_430 = IVar8;
          if ((IVar8 == 0) || (IVar8 == local_210[5])) {
            if (local_e0 != 0) {
              (**(code **)(local_e0 + 0x10))(local_e0,0);
            }
            local_140 = 1;
          }
          else {
            if (((local_1d1 & 1) == 0) &&
               (puVar6 = local_1d0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1d0,PTR_s_screenshotWatermarkEnabled_026a1ee0),
               ((ulong)puVar6 & 1) != 0)) {
              pcVar10 = &cf_WCRefineScreenshotWatermarkProcessor;
              _NSClassFromString();
              pcVar11 = &cf_sharedProcessor;
              local_438 = pcVar10;
              _NSSelectorFromString();
              local_440 = pcVar11;
              if ((local_438 != (cfstringStruct *)0x0) &&
                 (pcVar10 = local_438,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_438,PTR_s_respondsToSelector__026ca818,pcVar11),
                 ((ulong)pcVar10 & 1) != 0)) {
                pcVar11 = local_438;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_438,PTR_s_performSelector__026ca7b8,local_440);
                _objc_retainAutoreleasedReturnValue();
                pcVar10 = &cf_applyWatermarkToImage_;
                local_448 = pcVar11;
                _NSSelectorFromString();
                local_450 = pcVar10;
                if ((local_448 != (cfstringStruct *)0x0) &&
                   (pcVar11 = local_448,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_448,PTR_s_respondsToSelector__026ca818,pcVar10),
                   ((ulong)pcVar11 & 1) != 0)) {
                  pcVar10 = local_448;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_448,PTR_s_methodSignatureForSelector__0269e190,local_450);
                  _objc_retainAutoreleasedReturnValue();
                  local_458 = pcVar10;
                  if (pcVar10 != (cfstringStruct *)0x0) {
                    puVar6 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSInvocation_026ce208,
                               PTR_s_invocationWithMethodSignature__0269e1a0,pcVar10);
                    _objc_retainAutoreleasedReturnValue();
                    local_460 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_setTarget__0269e1a8,local_448);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_460,PTR_s_setSelector__0269e1b0,local_450);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_460,PTR_s_setArgument_atIndex__0269eae8,&local_430,2);
                    (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_invoke_0269e1b8);
                    local_468 = 0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_460,PTR_s_getReturnValue__0269e1c0,&local_468);
                    if ((local_468 != 0) && (local_468 - local_430 != 0)) {
                      _objc_storeStrong(local_468 - local_430,&local_430,local_468);
                    }
                    _objc_storeStrong(&local_460,0);
                  }
                  _objc_storeStrong(&local_458,0);
                }
                _objc_storeStrong(&local_448,0);
              }
            }
            lVar12 = local_148;
            (*(code *)PTR__objc_retain_02578638)();
            local_470 = lVar12;
            local_471 = local_121 & 1;
            puVar7 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
            _objc_retainAutoreleasedReturnValue();
            IVar8 = local_430;
            puVar6 = PTR___NSConcreteStackBlock_02578660;
            local_4a0 = PTR___NSConcreteStackBlock_02578660;
            local_498 = 0xc2000000;
            local_494 = 0;
            local_490 = FUN_0070f540;
            local_488 = &DAT_02578c20;
            (*(code *)PTR__objc_retain_02578638)();
            ppuVar5 = local_f0;
            local_480 = IVar8;
            local_4e8 = puVar6;
            local_4e0 = 0xc2000000;
            local_4dc = 0;
            local_4d8 = FUN_0070f590;
            local_4d0 = &DAT_0257f358;
            (*(code *)PTR__objc_retain_02578638)();
            IVar8 = local_b8;
            local_4b8 = ppuVar5;
            (*(code *)PTR__objc_retain_02578638)();
            lVar12 = local_470;
            local_4c8 = IVar8;
            (*(code *)PTR__objc_retain_02578638)();
            lVar3 = local_e0;
            local_4c0 = lVar12;
            local_4a8 = local_e1 & 1;
            (*(code *)PTR__objc_retain_02578638)();
            local_4b0 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_performChanges_completionHandler_026a1740,&local_4a0,&local_4e8)
            ;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            _objc_storeStrong(&local_4b0);
            _objc_storeStrong(&local_4c0,0);
            _objc_storeStrong(&local_4c8,0);
            _objc_storeStrong(&local_4b8,0);
            _objc_storeStrong(&local_480,0);
            _objc_storeStrong(&local_470,0);
            local_140 = 0;
          }
          _objc_storeStrong(&local_430,0);
        }
        else {
          local_301 = 0;
          IVar8 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cachedFirstScreenshot_026a7660);
          _objc_retainAutoreleasedReturnValue();
          bVar4 = false;
          if (IVar8 != 0) {
            IVar9 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cachedFirstScreenshotTime_026a7668)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_301 = 1;
            bVar4 = IVar9 != 0;
            local_300 = IVar9;
          }
          if ((local_301 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_300);
          }
          (*(code *)PTR__objc_release_02578630)(IVar8);
          if (bVar4) {
            puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            IVar8 = local_b8;
            local_310 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cachedFirstScreenshotTime_026a7668)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_timeIntervalSinceDate__0269cb78);
            (*(code *)PTR__objc_release_02578630)(IVar8);
            IVar8 = local_b8;
            local_318 = dVar14;
            if (30.0 < dVar14) {
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_clearDoubleModeCache_026a7678);
              puVar6 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_420 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_screenshotFrameShowToast_026a1ed0);
              if (((ulong)puVar6 & 1) != 0) {
                (*(code *)local_f0[2])(local_f0,&::cf___);
              }
              _objc_storeStrong(&local_420,0);
              local_140 = 0;
            }
            else {
              IVar9 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cachedFirstScreenshot_026a7660);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar8,PTR_s_applyFrameToImage_secondImage__026a7670,IVar9,local_210[5]);
              _objc_retainAutoreleasedReturnValue();
              local_320 = IVar8;
              (*(code *)PTR__objc_release_02578630)(IVar9);
              IVar8 = local_320;
              local_329 = 0;
              bVar4 = true;
              uVar1 = local_320 != 0;
              if ((bool)uVar1) {
                IVar9 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cachedFirstScreenshot_026a7660)
                ;
                _objc_retainAutoreleasedReturnValue();
                bVar4 = IVar8 == IVar9;
                local_329 = uVar1;
                local_328 = IVar9;
                (*(code *)PTR__objc_release_02578630)(IVar9);
                uVar1 = local_329;
              }
              local_329 = uVar1;
              if (bVar4) {
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_clearDoubleModeCache_026a7678);
                if (local_e0 != 0) {
                  (**(code **)(local_e0 + 0x10))(local_e0,0);
                }
                local_140 = 1;
              }
              else {
                if (((local_1d1 & 1) == 0) &&
                   (puVar6 = local_1d0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1d0,PTR_s_screenshotWatermarkEnabled_026a1ee0),
                   ((ulong)puVar6 & 1) != 0)) {
                  pcVar10 = &cf_WCRefineScreenshotWatermarkProcessor;
                  _NSClassFromString();
                  pcVar11 = &cf_sharedProcessor;
                  local_338 = pcVar10;
                  _NSSelectorFromString();
                  local_340 = pcVar11;
                  if ((local_338 != (cfstringStruct *)0x0) &&
                     (pcVar10 = local_338,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_338,PTR_s_respondsToSelector__026ca818,pcVar11),
                     ((ulong)pcVar10 & 1) != 0)) {
                    pcVar11 = local_338;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_338,PTR_s_performSelector__026ca7b8,local_340);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar10 = &cf_applyWatermarkToImage_;
                    local_348 = pcVar11;
                    _NSSelectorFromString();
                    local_350 = pcVar10;
                    if ((local_348 != (cfstringStruct *)0x0) &&
                       (pcVar11 = local_348,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_348,PTR_s_respondsToSelector__026ca818,pcVar10),
                       ((ulong)pcVar11 & 1) != 0)) {
                      pcVar10 = local_348;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_348,PTR_s_methodSignatureForSelector__0269e190,local_350);
                      _objc_retainAutoreleasedReturnValue();
                      local_358 = pcVar10;
                      if (pcVar10 != (cfstringStruct *)0x0) {
                        puVar6 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                                   PTR_s_invocationWithMethodSignature__0269e1a0,pcVar10);
                        _objc_retainAutoreleasedReturnValue();
                        local_360 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_setTarget__0269e1a8,local_348);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_360,PTR_s_setSelector__0269e1b0,local_350);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_360,PTR_s_setArgument_atIndex__0269eae8,&local_320,2);
                        (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_invoke_0269e1b8);
                        local_368 = 0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_360,PTR_s_getReturnValue__0269e1c0,&local_368);
                        if ((local_368 != 0) && (local_368 - local_320 != 0)) {
                          _objc_storeStrong(local_368 - local_320,&local_320,local_368);
                        }
                        _objc_storeStrong(&local_360,0);
                      }
                      _objc_storeStrong(&local_358,0);
                    }
                    _objc_storeStrong(&local_348,0);
                  }
                }
                IVar8 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_cachedFirstScreenshotAsset_026a7680);
                _objc_retainAutoreleasedReturnValue();
                IVar9 = local_b8;
                local_370 = IVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_cachedFirstScreenshotLocalIdenti_026a7688);
                _objc_retainAutoreleasedReturnValue();
                lVar12 = local_148;
                local_378 = IVar9;
                (*(code *)PTR__objc_retain_02578638)();
                local_380 = lVar12;
                lVar12 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_localIdentifier_026a6f90);
                _objc_retainAutoreleasedReturnValue();
                local_389 = local_121 & 1;
                local_388 = lVar12;
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_clearDoubleModeCache_026a7678);
                puVar7 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
                           PTR_s_sharedPhotoLibrary_026a1730);
                _objc_retainAutoreleasedReturnValue();
                IVar8 = local_320;
                puVar6 = PTR___NSConcreteStackBlock_02578660;
                local_3b8 = PTR___NSConcreteStackBlock_02578660;
                local_3b0 = 0xc2000000;
                local_3ac = 0;
                local_3a8 = FUN_0070e5a0;
                local_3a0 = &DAT_02578c20;
                (*(code *)PTR__objc_retain_02578638)();
                ppuVar5 = local_f0;
                local_398 = IVar8;
                local_418 = puVar6;
                local_410 = 0xc2000000;
                local_40c = 0;
                local_408 = FUN_0070e5f0;
                local_400 = &DAT_0257f3b8;
                (*(code *)PTR__objc_retain_02578638)();
                IVar8 = local_370;
                local_3d0 = ppuVar5;
                (*(code *)PTR__objc_retain_02578638)();
                lVar12 = local_380;
                local_3f8 = IVar8;
                (*(code *)PTR__objc_retain_02578638)();
                IVar9 = local_b8;
                local_3f0 = lVar12;
                (*(code *)PTR__objc_retain_02578638)();
                IVar8 = local_378;
                local_3e8 = IVar9;
                local_3c0 = local_e1 & 1;
                (*(code *)PTR__objc_retain_02578638)();
                lVar12 = local_388;
                local_3e0 = IVar8;
                (*(code *)PTR__objc_retain_02578638)();
                lVar3 = local_e0;
                local_3d8 = lVar12;
                (*(code *)PTR__objc_retain_02578638)();
                local_3c8 = lVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_performChanges_completionHandler_026a1740,&local_3b8,
                           &local_418);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                local_140 = 1;
                _objc_storeStrong(&local_3c8);
                _objc_storeStrong(&local_3d8,0);
                _objc_storeStrong(&local_3e0,0);
                _objc_storeStrong(&local_3e8,0);
                _objc_storeStrong(&local_3f0,0);
                _objc_storeStrong(&local_3f8,0);
                _objc_storeStrong(&local_3d0,0);
                _objc_storeStrong(&local_398,0);
                _objc_storeStrong(&local_388,0);
                _objc_storeStrong(&local_380,0);
                _objc_storeStrong(&local_378,0);
                _objc_storeStrong(&local_370,0);
              }
              _objc_storeStrong(&local_320,0);
            }
            _objc_storeStrong(&local_310,0);
            if (local_140 != 0) goto LAB_0070d664;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setCachedFirstScreenshot__026a7698,local_210[5]);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setCachedFirstScreenshotAsset__026a76a0,local_148);
          lVar12 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_localIdentifier_026a6f90);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setCachedFirstScreenshotLocalIde_026a76a8);
          (*(code *)PTR__objc_release_02578630)(lVar12);
          puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setCachedFirstScreenshotTime__026a76b0);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_428 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_screenshotFrameShowToast_026a1ed0);
          if (((ulong)puVar6 & 1) != 0) {
            (*(code *)local_f0[2])(local_f0,&cf__OX___);
          }
          if (local_e0 != 0) {
            (**(code **)(local_e0 + 0x10))(local_e0,1);
          }
          local_140 = 1;
          _objc_storeStrong(&local_428,0);
        }
      }
LAB_0070d664:
      _objc_storeStrong(&local_270,0);
    }
    _objc_storeStrong(&local_248);
    __Block_object_dispose(&local_218,8);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d0,0);
  }
  _objc_storeStrong(&local_148,0);
LAB_0070d6d4:
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_100,0);
  if (local_140 == 0) {
    local_140 = 0;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

