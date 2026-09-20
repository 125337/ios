// startDownloadWithCompletion: @ 00597718

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsMediaDownloader::startDownloadWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  char *pcVar9;
  undefined **ppuVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  dispatch_queue_t pdVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *local_740;
  undefined *local_738;
  cfstringStruct *local_5b8;
  undefined *local_4f0;
  undefined *local_4e8;
  ulong local_438;
  ulong local_430;
  undefined *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  code *local_3c8;
  undefined *local_3c0;
  long local_3b8;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  long local_3a0;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  long local_358;
  char *local_350;
  char *local_348;
  char *local_340;
  char *local_338;
  undefined *local_330;
  undefined4 local_328;
  undefined4 local_324;
  code *local_320;
  undefined *local_318;
  long local_310;
  undefined1 auStack_308 [8];
  undefined **local_300;
  undefined1 auStack_2f8 [8];
  cfstringStruct *local_2f0;
  byte local_2e1;
  cfstringStruct *local_2e0;
  char *local_2d8;
  cfstringStruct *local_2d0;
  long local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  long local_280;
  char *local_278;
  ulong local_270;
  byte local_261;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  ulong local_220;
  undefined *local_218;
  undefined *local_210;
  ID local_208;
  undefined4 local_1fc;
  ID local_1f8 [3];
  long local_1e0;
  SEL local_1d8;
  ID local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e0 = 0;
  local_1d8 = param_2;
  local_1d0 = param_1;
  _objc_storeStrong(&local_1e0,param_3,param_3,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setCompletionBlock__026a55d0,local_1e0);
  IVar1 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_dataItem_026a13c8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1f8[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_1f8[0] == 0) {
    if (local_1e0 != 0) {
      (**(code **)(local_1e0 + 0x10))(local_1e0,1,0);
    }
    local_1fc = 1;
  }
  else {
    IVar1 = local_1f8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_valueForKey__0269d128,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    local_208 = IVar1;
    if ((IVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0), IVar1 == 0)) {
      if (local_1e0 != 0) {
        (**(code **)(local_1e0 + 0x10))(local_1e0,1,0);
      }
      local_1fc = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_210 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_218 = puVar4;
      _memset(auStack_260,0,0x40);
      IVar1 = local_208;
      (*(code *)PTR__objc_retain_02578638)();
      local_430 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,0x10);
      if (local_430 != 0) {
        lVar15 = *local_250;
        local_438 = 0;
        do {
          do {
            if (*local_250 - lVar15 != 0) {
              _objc_enumerationMutation(*local_250 - lVar15,IVar1);
            }
            local_220 = *(ulong *)(local_258 + local_438 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_220);
            local_261 = 0;
            uVar5 = local_220;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_220,PTR_s_respondsToSelector__026ca818,PTR_s_isLivePhoto_026a4b08);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_220;
              (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_isLivePhoto_026a4b08);
              local_261 = (byte)uVar5;
            }
            if ((local_261 & 1) != 0) {
              local_270 = 0;
              uVar5 = local_220;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_220,PTR_s_respondsToSelector__026ca818,
                         PTR_s_livePhotoMediaItem_026a55d8);
              if ((uVar5 & 1) != 0) {
                uVar6 = local_220;
                (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_livePhotoMediaItem_026a55d8);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = local_270;
                local_270 = uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              if (local_270 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_addObject__0269d180,local_270)
                ;
              }
              _objc_storeStrong(&local_270,0);
            }
            local_438 = local_438 + 1;
          } while (local_438 < local_430);
          local_430 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,
                     0x10);
          local_438 = 0;
        } while (local_430 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar3 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0);
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = local_218, (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0),
         puVar3 == (undefined *)0x0)) {
        if (local_1e0 != 0) {
          (**(code **)(local_1e0 + 0x10))(local_1e0,1,0);
        }
        local_1fc = 1;
      }
      else {
        puVar3 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0);
        puVar4 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d0,PTR_s_setTotalCount__026a30f8,puVar3 + (long)puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setDownloadedCount__026a55e0,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setCompletedCount__026a55e8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setHasFinished__026a55f0,0);
        IVar1 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_silent_026a55f8);
        if ((IVar1 & 1) == 0) {
          puVar3 = PTR_WCRefineProgressToast_026ce468;
          _objc_alloc_init();
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setProgressToast__026a5600,puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          IVar1 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_progressToast_026a5608);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_totalCount_026a3130);
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_showWithTotalCount__026a1630,IVar2);
          (*(code *)PTR__objc_release_02578630)(IVar1);
        }
        pcVar7 = "WCMediaDownloader";
        _objc_getClass();
        local_278 = pcVar7;
        if ((pcVar7 == (char *)0x0) &&
           (puVar3 = local_210,
           (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0),
           puVar3 != (undefined *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_completeWithSuccess_errorMessage_026a5610,0,&cf_N_RNS_u);
          local_1fc = 1;
        }
        else {
          _memset(auStack_2c0,0,0x40);
          puVar3 = local_210;
          (*(code *)PTR__objc_retain_02578638)();
          local_4e8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_128,
                     0x10);
          if (local_4e8 != (undefined *)0x0) {
            lVar15 = *local_2b0;
            local_4f0 = (undefined *)0x0;
            do {
              do {
                if (*local_2b0 - lVar15 != 0) {
                  _objc_enumerationMutation(*local_2b0 - lVar15,puVar3);
                }
                lVar16 = *(long *)(local_2b8 + (long)local_4f0 * 8);
                local_280 = lVar16;
                (*(code *)PTR__objc_msgSend_02578628)(lVar16,PTR_s_valueForKey__0269d128,&cf_type);
                _objc_retainAutoreleasedReturnValue();
                lVar17 = lVar16;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(lVar16);
                pcVar8 = &cf_initWithDataItem_mediaItem_;
                local_2c8 = lVar17;
                _NSSelectorFromString();
                pcVar7 = local_278;
                local_2d0 = pcVar8;
                _objc_alloc();
                pcVar8 = local_2d0;
                IVar1 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_dataItem_026a13c8);
                _objc_retainAutoreleasedReturnValue();
                pcVar9 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)(pcVar7,pcVar8,IVar1,local_280);
                _objc_retainAutoreleasedReturnValue();
                local_2d8 = pcVar9;
                (*(code *)PTR__objc_release_02578630)(IVar1);
                (*(code *)PTR__objc_release_02578630)(pcVar7);
                if (local_2d8 == (char *)0x0) {
                  IVar1 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_failedMedia_026a5618);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(IVar1);
                  IVar1 = local_1d0;
                  IVar2 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_completedCount_026a5620);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar1,PTR_s_setCompletedCount__026a55e8,IVar2 + 1);
                  IVar1 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_progressToast_026a5608);
                  _objc_retainAutoreleasedReturnValue();
                  IVar2 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_downloadedCount_026a5628);
                  IVar11 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_failedMedia_026a5618);
                  _objc_retainAutoreleasedReturnValue();
                  IVar12 = IVar11;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  IVar13 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_totalCount_026a3130);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar1,PTR_s_updateCompletedCount_failedCount_026a5630,IVar2,IVar12,
                             IVar13);
                  (*(code *)PTR__objc_release_02578630)(IVar11);
                  (*(code *)PTR__objc_release_02578630)(IVar1);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d0,PTR_s_checkDownloadComplete_026a5638);
                  local_1fc = 5;
                }
                else {
                  if ((local_2c8 == 2) || (local_2c8 + -5 == 0)) {
                    local_5b8 = &cf_Video_hasDownloaded;
                    _NSSelectorFromString(0);
                  }
                  else {
                    local_5b8 = &cf_Image_hasDownloaded;
                    _NSSelectorFromString(local_2c8 + -5);
                  }
                  local_2e0 = local_5b8;
                  local_2e1 = 0;
                  pcVar7 = local_2d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2d8,PTR_s_respondsToSelector__026ca818,local_5b8);
                  if (((ulong)pcVar7 & 1) != 0) {
                    pcVar7 = local_2d8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_2d8,local_2e0);
                    local_2e1 = (byte)pcVar7;
                  }
                  IVar1 = local_1d0;
                  if ((local_2e1 & 1) == 0) {
                    pcVar8 = &cf_startDownloadWithCompletionHandler_;
                    _NSSelectorFromString();
                    pcVar7 = local_2d8;
                    local_2f0 = pcVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2d8,PTR_s_respondsToSelector__026ca818,pcVar8);
                    if (((ulong)pcVar7 & 1) == 0) {
                      IVar1 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_failedMedia_026a5618);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(IVar1);
                      IVar1 = local_1d0;
                      IVar2 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_completedCount_026a5620)
                      ;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (IVar1,PTR_s_setCompletedCount__026a55e8,IVar2 + 1);
                      IVar1 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_progressToast_026a5608);
                      _objc_retainAutoreleasedReturnValue();
                      IVar2 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1d0,PTR_s_downloadedCount_026a5628);
                      IVar11 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_failedMedia_026a5618);
                      _objc_retainAutoreleasedReturnValue();
                      IVar12 = IVar11;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      IVar13 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_totalCount_026a3130);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (IVar1,PTR_s_updateCompletedCount_failedCount_026a5630,IVar2,IVar12,
                                 IVar13);
                      (*(code *)PTR__objc_release_02578630)(IVar11);
                      (*(code *)PTR__objc_release_02578630)(IVar1);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1d0,PTR_s_checkDownloadComplete_026a5638);
                    }
                    else {
                      _objc_initWeak(auStack_2f8,local_1d0);
                      ppuVar10 = &local_330;
                      local_330 = PTR___NSConcreteStackBlock_02578660;
                      local_328 = 0xc2000000;
                      local_324 = 0;
                      local_320 = FUN_00599574;
                      local_318 = &DAT_0257e148;
                      _objc_copyWeak(auStack_308,auStack_2f8);
                      lVar17 = local_280;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_310 = lVar17;
                      _objc_retainBlock();
                      pcVar7 = local_2d8;
                      pcVar8 = local_2f0;
                      local_300 = ppuVar10;
                      _objc_retainBlock();
                      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,pcVar8);
                      (*(code *)PTR__objc_release_02578630)(ppuVar10);
                      _objc_storeStrong(&local_300);
                      _objc_storeStrong(&local_310,0);
                      _objc_destroyWeak(auStack_308);
                      _objc_destroyWeak(auStack_2f8);
                    }
                    local_1fc = 0;
                  }
                  else {
                    IVar2 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_downloadedCount_026a5628);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar1,PTR_s_setDownloadedCount__026a55e0,IVar2 + 1);
                    IVar1 = local_1d0;
                    IVar2 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_completedCount_026a5620);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar1,PTR_s_setCompletedCount__026a55e8,IVar2 + 1);
                    IVar1 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_progressToast_026a5608);
                    _objc_retainAutoreleasedReturnValue();
                    IVar2 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_downloadedCount_026a5628);
                    IVar11 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_failedMedia_026a5618);
                    _objc_retainAutoreleasedReturnValue();
                    IVar12 = IVar11;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    IVar13 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_totalCount_026a3130);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar1,PTR_s_updateCompletedCount_failedCount_026a5630,IVar2,IVar12,
                               IVar13);
                    (*(code *)PTR__objc_release_02578630)(IVar11);
                    (*(code *)PTR__objc_release_02578630)(IVar1);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d0,PTR_s_checkDownloadComplete_026a5638);
                    local_1fc = 5;
                  }
                }
                _objc_storeStrong(&local_2d8,0);
                local_4f0 = local_4f0 + 1;
              } while (local_4f0 < local_4e8);
              local_4e8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                         auStack_128,0x10);
              local_4f0 = (undefined *)0x0;
            } while (local_4e8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
          if (puVar3 != (undefined *)0x0) {
            local_338 = (char *)0x0;
            pcVar7 = "MMContext";
            _objc_getClass(puVar3);
            pcVar9 = "WCFacade";
            local_340 = pcVar7;
            _objc_getClass();
            local_348 = pcVar9;
            if ((local_340 != (char *)0x0) && (pcVar9 != (char *)0x0)) {
              local_350 = (char *)0x0;
              pcVar7 = local_340;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_340,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8)
              ;
              if (((ulong)pcVar7 & 1) != 0) {
                pcVar9 = local_340;
                (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_currentContext_0269d5f8);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_350;
                local_350 = pcVar9;
                (*(code *)PTR__objc_release_02578630)(pcVar7);
              }
              if ((local_350 != (char *)0x0) &&
                 (pcVar7 = local_350,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_350,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170)
                 , ((ulong)pcVar7 & 1) != 0)) {
                pcVar9 = local_350;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_350,PTR_s_getService__0269d170,local_348);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_338;
                local_338 = pcVar9;
                (*(code *)PTR__objc_release_02578630)(pcVar7);
              }
              _objc_storeStrong(&local_350,0);
            }
            _memset(auStack_398,0,0x40);
            puVar3 = local_218;
            (*(code *)PTR__objc_retain_02578638)();
            local_738 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,
                       auStack_1a8,0x10);
            if (local_738 != (undefined *)0x0) {
              lVar15 = *local_388;
              local_740 = (undefined *)0x0;
              do {
                do {
                  if (*local_388 - lVar15 != 0) {
                    _objc_enumerationMutation(*local_388 - lVar15,puVar3);
                  }
                  lVar17 = *(long *)(local_390 + (long)local_740 * 8);
                  local_1c8 = &cf_getFormatVideoPath;
                  local_1c0 = &cf_pathForSightData;
                  local_1b8 = &cf_pathForData;
                  local_1b0 = &cf_pathForExistData;
                  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  local_358 = lVar17;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_1c8,4);
                  _objc_retainAutoreleasedReturnValue();
                  FUN_00599978();
                  _objc_retainAutoreleasedReturnValue();
                  local_3a0 = lVar17;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  lVar17 = local_3a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_length_0269cca0);
                  IVar1 = local_1d0;
                  if (lVar17 == 0) {
                    if ((local_338 != (char *)0x0) &&
                       (pcVar7 = local_338,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_338,PTR_s_respondsToSelector__026ca818,
                                  PTR_s_startDownloadSightMedia_Download_026a5648),
                       ((ulong)pcVar7 & 1) != 0)) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_338,PTR_s_startDownloadSightMedia_Download_026a5648,local_358
                                 ,0x22);
                    }
                    _objc_initWeak(auStack_3a8,local_1d0);
                    pdVar14 = _dispatch_get_global_queue(0,0);
                    _objc_retainAutoreleasedReturnValue();
                    lVar17 = local_358;
                    local_3d8 = PTR___NSConcreteStackBlock_02578660;
                    local_3d0 = 0xc2000000;
                    local_3cc = 0;
                    local_3c8 = FUN_0059a384;
                    local_3c0 = &DAT_025797f0;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_3b8 = lVar17;
                    _objc_copyWeak(auStack_3b0,auStack_3a8);
                    _dispatch_async(pdVar14,&local_3d8);
                    (*(code *)PTR__objc_release_02578630)(pdVar14);
                    _objc_destroyWeak(auStack_3b0);
                    _objc_storeStrong(&local_3b8,0);
                    _objc_destroyWeak(auStack_3a8);
                    local_1fc = 0;
                  }
                  else {
                    IVar2 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_downloadedCount_026a5628);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar1,PTR_s_setDownloadedCount__026a55e0,IVar2 + 1);
                    IVar1 = local_1d0;
                    IVar2 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_completedCount_026a5620);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar1,PTR_s_setCompletedCount__026a55e8,IVar2 + 1);
                    IVar1 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_progressToast_026a5608);
                    _objc_retainAutoreleasedReturnValue();
                    IVar2 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_downloadedCount_026a5628);
                    IVar11 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_failedMedia_026a5618);
                    _objc_retainAutoreleasedReturnValue();
                    IVar12 = IVar11;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    IVar13 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_totalCount_026a3130);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar1,PTR_s_updateCompletedCount_failedCount_026a5630,IVar2,IVar12,
                               IVar13);
                    (*(code *)PTR__objc_release_02578630)(IVar11);
                    (*(code *)PTR__objc_release_02578630)(IVar1);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d0,PTR_s_checkDownloadComplete_026a5638);
                    local_1fc = 7;
                  }
                  _objc_storeStrong(&local_3a0,0);
                  local_740 = local_740 + 1;
                } while (local_740 < local_738);
                local_738 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,
                           auStack_1a8,0x10);
                local_740 = (undefined *)0x0;
              } while (local_738 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_338,0);
          }
          IVar1 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasFinished_026a5640);
          if ((IVar1 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSTimer_026ce210;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x404e000000000000,PTR__OBJC_CLASS___NSTimer_026ce210,
                       PTR_s_scheduledTimerWithTimeInterval_t_026a4968,local_1d0,
                       PTR_s_onDownloadTimeout_026a5650,0,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setTimeoutTimer__026a5658);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          local_1fc = 0;
        }
      }
      _objc_storeStrong(&local_218);
      _objc_storeStrong(&local_210,0);
    }
    _objc_storeStrong(&local_208,0);
  }
  _objc_storeStrong(local_1f8);
  _objc_storeStrong(&local_1e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

