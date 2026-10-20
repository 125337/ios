// ============================================================
// WCMoments 数据链反编译 · 05_动作处理器
// 用户动作的原生处理器
// 函数数: 14
// ============================================================

// ---- openCacheManager @0x47374 ----


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::openCacheManager(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 local_e8;

  undefined8 local_d0;

  undefined *local_c8;

  undefined4 local_c0;

  undefined4 local_bc;

  code *local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  undefined1 auStack_a0 [24];

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined1 auStack_58 [8];

  undefined1 auStack_50 [8];

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSend_host(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_presentedViewController(uVar1,local_e8);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (lVar2 == 0) {

    _objc_msgSend_setCachePaused_(local_28,local_e8,1);

    uVar1 = _objc_alloc(&objc::class_t::WCMCacheController);

    local_38 = _objc_msgSend_initWithStyle_(uVar1,local_e8,2);

    _objc_msgSend_assetHandler(local_28,local_e8);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_root(uVar1,local_e8);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setRoot_(local_38,local_e8);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_root(local_38,local_e8);

    local_40 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_account(local_28,local_e8);

    local_48 = _objc_retainAutoreleasedReturnValue();

    _objc_initWeak(auStack_50,local_28);

    local_88 = PTR___NSConcreteStackBlock_001104f0;

    local_80 = 0xc2000000;

    local_7c = 0;

    local_78 = ___37__WCMFeedController_openCacheManager__block_invoke;

    local_70 = &___block_descriptor_56_e8_32s40s48w_e14_v16__0__<v__>8l;

    _objc_copyWeak(auStack_58,auStack_50);

    local_68 = (*(code *)PTR__objc_retain_00110460)(local_40);

    local_60 = (*(code *)PTR__objc_retain_00110460)(local_48);

    _objc_msgSend_setClearImages_(local_38,local_e8,&local_88);

    local_c8 = PTR___NSConcreteStackBlock_001104f0;

    local_c0 = 0xc2000000;

    local_bc = 0;

    local_b8 = ___37__WCMFeedController_openCacheManager__block_invoke_2029;

    local_b0 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;

    _objc_copyWeak(auStack_a0,auStack_50);

    local_a8 = (*(code *)PTR__objc_retain_00110460)(local_48);

    _objc_msgSend_setOnClose_(local_38,local_e8,&local_c8);

    uVar1 = _objc_alloc(&_OBJC_CLASS___UINavigationController);

    local_d0 = _objc_msgSend_initWithRootViewController_(uVar1,local_e8,local_38);

    uVar1 = local_38;

    uVar3 = _objc_msgSend_presentationController(local_d0,local_e8);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_setDelegate_(uVar3,local_e8,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = _objc_msgSend_host(local_28,local_e8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    _objc_msgSend_presentViewController_animated_completion_(uVar1,local_e8,local_d0,1,0);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_d0);

    _objc_storeStrong(&local_a8,0);

    _objc_destroyWeak(auStack_a0);

    _objc_storeStrong(&local_60,0);

    _objc_storeStrong(&local_68,0);

    _objc_destroyWeak(auStack_58);

    _objc_destroyWeak(auStack_50);

    _objc_storeStrong(&local_48,0);

    _objc_storeStrong(&local_40,0);

    _objc_storeStrong(&local_38,0);

  }

  return;

}






// ---- ___37-[WCMFeedController_openCacheManager]_block_invoke @0x47790 ----


void ___37__WCMFeedController_openCacheManager__block_invoke(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 local_d8;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined1 auStack_40 [8];

  long local_38;

  undefined8 local_30;

  long local_28;

  

  local_30 = 0;

  local_28 = param_1;

  _objc_storeStrong();

  local_38 = param_1;

  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);

  lVar2 = _objc_msgSend_mediaGeneration(uVar1,local_d8);

  _objc_msgSend_setMediaGeneration_(uVar1,local_d8,lVar2 + 1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);

  _objc_msgSend_mediaQueue(uVar1,local_d8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_cancelAllOperations(uVar3,local_d8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);

  _objc_msgSend_previewQueue(uVar1,local_d8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_cancelAllOperations(uVar3,local_d8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);

  _objc_msgSend_pendingExports(uVar1,local_d8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_removeAllObjects(uVar3,local_d8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);

  _objc_msgSend_pendingOriginalExports(uVar1,local_d8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_removeAllObjects(uVar3,local_d8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _dispatch_get_global_queue(0x11,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_copyWeak(auStack_40,param_1 + 0x30);

  local_58 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));

  local_50 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));

  local_48 = (*(code *)PTR__objc_retain_00110460)(local_30);

  _dispatch_async(uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_48,0);

  _objc_storeStrong(&local_50,0);

  _objc_storeStrong(&local_58,0);

  _objc_destroyWeak(auStack_40);

  _objc_storeStrong(&local_30,0);

  return;

}






// ---- ___37-[WCMFeedController_openCacheManager]_block_invoke_2 @0x47a68 ----


void ___37__WCMFeedController_openCacheManager__block_invoke_2(long param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong local_190;

  ulong local_188;

  undefined8 local_158;

  undefined *local_138;

  undefined4 local_130;

  undefined4 local_12c;

  code *local_128;

  undefined *local_120;

  undefined8 local_118;

  undefined8 local_110;

  undefined1 auStack_108 [8];

  undefined1 auStack_100 [8];

  long local_f8;

  long *local_f0;

  undefined8 local_c0;

  long local_b8;

  long local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_b8 = param_1;

  local_b0 = param_1;

  uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

  _objc_msgSend_mediaQueue(uVar2,local_158);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_waitUntilAllOperationsAreFinished(uVar3,local_158);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

  _objc_msgSend_previewQueue(uVar2,local_158);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_waitUntilAllOperationsAreFinished(uVar3,local_158);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _memset(auStack_100,0,0x40);

  _WCMCacheAssets(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_188 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar2,local_158,auStack_100,auStack_a8,0x10);

  if (local_188 != 0) {

    lVar5 = *local_f0;

    local_190 = 0;

    do {

      do {

        if (*local_f0 - lVar5 != 0) {

          _objc_enumerationMutation(*local_f0 - lVar5,uVar2);

        }

        local_c0 = *(undefined8 *)(local_f8 + local_190 * 8);

        _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_158);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_objectForKeyedSubscript_(local_c0,local_158,&cf_path);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_removeItemAtPath_error_(uVar3,local_158,uVar4,0);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        (*(code *)PTR__objc_release_00110458)(uVar3);

        local_190 = local_190 + 1;

      } while (local_190 < local_188);

      local_188 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar2,local_158,auStack_100,auStack_a8,0x10);

      local_190 = 0;

    } while (local_188 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar2);

  puVar1 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);

  local_138 = PTR___NSConcreteStackBlock_001104f0;

  local_130 = 0xc2000000;

  local_12c = 0;

  local_128 = ___37__WCMFeedController_openCacheManager__block_invoke_3;

  local_120 = &___block_descriptor_56_e8_32s40bs48w_e5_v8__0l;

  _objc_copyWeak(auStack_108,param_1 + 0x38);

  local_118 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));

  local_110 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));

  _dispatch_async(uVar2,&local_138);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_110);

  _objc_storeStrong(&local_118,0);

  _objc_destroyWeak(auStack_108);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- ___37-[WCMFeedController_openCacheManager]_block_invoke_3 @0x47de0 ----


void ___37__WCMFeedController_openCacheManager__block_invoke_3(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_40;

  

  uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

  _objc_msgSend_account(uVar2,local_40);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_msgSend_isEqual_(uVar3,local_40,*(undefined8 *)(param_1 + 0x20));

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if ((uVar1 & 1) != 0) {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

    _objc_msgSend_images(uVar2,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar3,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

    _objc_msgSend_assetHandler(uVar2,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_displayCache(uVar3,local_40);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar4,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

    _objc_msgSend_renderKeys(uVar2,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar3,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

    _objc_msgSend_renderQualities(uVar2,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar3,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

    _objc_msgSend_videoURIs(uVar2,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar3,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

    _objc_msgSend_videoRequests(uVar2,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar3,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);

    _objc_msgSend_mediaProbeTimes(uVar2,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar3,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  if (*(long *)(param_1 + 0x28) != 0) {

    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();

  }

  return;

}






// ---- ___37-[WCMFeedController_openCacheManager]_block_invoke.2029 @0x481c0 ----


void ___37__WCMFeedController_openCacheManager__block_invoke_2029(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_40;

  

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  _objc_msgSend_account(uVar2,local_40);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_msgSend_isEqual_(uVar3,local_40,*(undefined8 *)(param_1 + 0x20));

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if ((uVar1 & 1) != 0) {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

    _objc_msgSend_setCachePaused_(uVar2,local_40,0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

    _objc_msgSend_reloadFeed(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  return;

}






// ---- customizeHeader @0x524b4 ----


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x10 bytes */



void WCMFeedController::customizeHeader(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  double in_d2;

  undefined8 uVar4;

  undefined8 uVar5;

  double local_390;

  double local_348;

  undefined8 local_1d8;

  undefined *local_100;

  undefined4 local_f8;

  undefined4 local_f4;

  code *local_f0;

  undefined *local_e8;

  undefined1 auStack_e0 [15];

  undefined1 local_d1;

  undefined *local_d0;

  undefined4 local_c8;

  undefined4 local_c4;

  code *local_c0;

  undefined *local_b8;

  undefined1 auStack_b0 [15];

  undefined1 local_a1;

  undefined *local_a0;

  undefined4 local_98;

  undefined4 local_94;

  code *local_90;

  undefined *local_88;

  undefined1 auStack_80 [11];

  undefined1 local_75;

  undefined *local_68;

  undefined4 local_60;

  undefined4 local_5c;

  code *local_58;

  undefined *local_50;

  undefined1 auStack_48 [8];

  undefined1 auStack_40 [8];

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSend_host(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_presentedViewController(uVar1,local_1d8);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (lVar2 == 0) {

    _objc_msgSend_alertControllerWithTitle_message_preferredStyle_

              (&_OBJC_CLASS___UIAlertController,local_1d8,&cf__INvh,0);

    local_38 = _objc_retainAutoreleasedReturnValue();

    _objc_initWeak(auStack_40,local_28);

    uVar1 = local_38;

    local_68 = PTR___NSConcreteStackBlock_001104f0;

    local_60 = 0xc2000000;

    local_5c = 0;

    local_58 = ___36__WCMFeedController_customizeHeader__block_invoke;

    local_50 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_48,auStack_40);

    local_75 = 1;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_O9eeW_,0,&local_68);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    local_75 = 0;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    local_a0 = PTR___NSConcreteStackBlock_001104f0;

    local_98 = 0xc2000000;

    local_94 = 0;

    local_90 = ___36__WCMFeedController_customizeHeader__block_invoke_2114;

    local_88 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_80,auStack_40);

    local_a1 = 1;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_NvQbVGr,0,&local_a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    local_a1 = 0;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    local_d0 = PTR___NSConcreteStackBlock_001104f0;

    local_c8 = 0xc2000000;

    local_c4 = 0;

    local_c0 = ___36__WCMFeedController_customizeHeader__block_invoke_2_2120;

    local_b8 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_b0,auStack_40);

    local_d1 = 1;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf__Y_,0,&local_d0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    local_d1 = 0;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    local_100 = PTR___NSConcreteStackBlock_001104f0;

    local_f8 = 0xc2000000;

    local_f4 = 0;

    local_f0 = ___36__WCMFeedController_customizeHeader__block_invoke_3;

    local_e8 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_e0,auStack_40);

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_b_Y,0,&local_100);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_Sm,1,0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = _objc_msgSend_view(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    uVar3 = _objc_msgSend_popoverPresentationController(local_38,local_1d8);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_setSourceView_(uVar3,local_1d8,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = _objc_msgSend_view(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    _objc_msgSend_bounds(uVar1,local_1d8);

    local_348 = in_d2 - 60.0;

    (*(code *)PTR__objc_release_00110458)(uVar1);

    if (local_348 <= 0.0) {

      local_348 = 0.0;

    }

    uVar1 = _objc_msgSend_view(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    local_390 = (double)_objc_msgSend_safeAreaInsets(uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    if (local_390 <= 44.0) {

      local_390 = 44.0;

    }

    uVar5 = 0x4044000000000000;

    uVar4 = 0x4044000000000000;

    uVar3 = _CGRectMake(local_348);

    uVar1 = _objc_msgSend_popoverPresentationController(local_38,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    _objc_msgSend_setSourceRect_(uVar3,local_390,uVar4,uVar5,uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = _objc_msgSend_host(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    _objc_msgSend_presentViewController_animated_completion_(uVar1,local_1d8,local_38,1,0);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_destroyWeak(auStack_e0);

    _objc_destroyWeak(auStack_b0);

    _objc_destroyWeak(auStack_80);

    _objc_destroyWeak(auStack_48);

    _objc_destroyWeak(auStack_40);

    _objc_storeStrong(&local_38,0);

  }

  return;

}






// ---- ___36-[WCMFeedController_customizeHeader]_block_invoke @0x52dac ----


void ___36__WCMFeedController_customizeHeader__block_invoke(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_c8;

  undefined *local_b0;

  undefined4 local_a8;

  undefined4 local_a4;

  code *local_a0;

  undefined *local_98;

  undefined1 auStack_90 [8];

  undefined1 auStack_88 [8];

  undefined1 auStack_80 [24];

  undefined *local_68;

  undefined4 local_60;

  undefined4 local_5c;

  code *local_58;

  undefined *local_50;

  undefined1 auStack_48 [8];

  undefined8 local_40;

  long local_38;

  undefined8 local_30;

  long local_28;

  

  local_30 = 0;

  local_28 = param_1;

  _objc_storeStrong(&local_30);

  local_38 = param_1;

  _objc_msgSend_alertControllerWithTitle_message_preferredStyle_

            (&_OBJC_CLASS___UIAlertController,local_c8,&cf_veW_,&cf___,1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_68 = PTR___NSConcreteStackBlock_001104f0;

  local_60 = 0xc2000000;

  local_5c = 0;

  local_58 = ___36__WCMFeedController_customizeHeader__block_invoke_2;

  local_50 = &___block_descriptor_40_e8_32w_e21_v16__0__UITextField_8l;

  local_40 = uVar1;

  _objc_copyWeak(auStack_48,param_1 + 0x20);

  _objc_msgSend_addTextFieldWithConfigurationHandler_(uVar1,local_c8,&local_68);

  uVar1 = local_40;

  uVar2 = _objc_msgSend_actionWithTitle_style_handler_

                    (&_OBJC_CLASS___UIAlertAction,local_c8,&cf_Sm,1,0);

  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

  _objc_msgSend_addAction_(uVar1,local_c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_initWeak(auStack_80,local_40);

  uVar1 = local_40;

  local_b0 = PTR___NSConcreteStackBlock_001104f0;

  local_a8 = 0xc2000000;

  local_a4 = 0;

  local_a0 = ___36__WCMFeedController_customizeHeader__block_invoke_2111;

  local_98 = &___block_descriptor_48_e8_32w40w_e23_v16__0__UIAlertAction_8l;

  _objc_copyWeak(auStack_90,param_1 + 0x20);

  _objc_copyWeak(auStack_88,auStack_80);

  uVar2 = _objc_msgSend_actionWithTitle_style_handler_

                    (&_OBJC_CLASS___UIAlertAction,local_c8,&cf_OX_,0,&local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

  _objc_msgSend_addAction_(uVar1,local_c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  uVar2 = _objc_msgSend_host(uVar1,local_c8);

  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

  _objc_msgSend_presentViewController_animated_completion_(uVar2,local_c8,local_40,1,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_destroyWeak(auStack_88);

  _objc_destroyWeak(auStack_90);

  _objc_destroyWeak(auStack_80);

  _objc_destroyWeak(auStack_48);

  _objc_storeStrong(&local_40);

  _objc_storeStrong(&local_30,0);

  return;

}






// ---- ___36-[WCMFeedController_customizeHeader]_block_invoke_2 @0x53164 ----


void ___36__WCMFeedController_customizeHeader__block_invoke_2(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 local_40;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_headerBrandKey(uVar2,local_40);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_dictionaryForKey_(uVar1,local_40);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar4,local_40,&cf_text);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Text();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setText_(local_20,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_setPlaceholder_(local_20,local_40,&cf_gSW);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___36-[WCMFeedController_customizeHeader]_block_invoke.2111 @0x532c0 ----


void ___36__WCMFeedController_customizeHeader__block_invoke_2111(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 local_68;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  _objc_msgSend_textFields(uVar2,local_68);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_firstObject(uVar3,local_68);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_text(uVar4,local_68);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_saveHeaderText_(uVar1,local_68);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___36-[WCMFeedController_customizeHeader]_block_invoke.2114 @0x53450 ----


void ___36__WCMFeedController_customizeHeader__block_invoke_2114(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_70;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_28 = param_1;

  local_30 = _objc_opt_new(&_OBJC_CLASS___PHPickerConfiguration);

  _objc_msgSend_imagesFilter(&_OBJC_CLASS___PHPickerFilter,local_70);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFilter_(local_30,local_70);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_setSelectionLimit_(local_30,local_70,1);

  uVar1 = _objc_alloc(&_OBJC_CLASS___PHPickerViewController);

  local_38 = _objc_msgSend_initWithConfiguration_(uVar1,local_70,local_30);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_setDelegate_(local_38,local_70);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_account(uVar1,local_70);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_setHeaderPickerAccount_(uVar3,local_70,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_host(uVar1,local_70);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_presentViewController_animated_completion_(uVar2,local_70,local_38,1,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___36-[WCMFeedController_customizeHeader]_block_invoke_2.2120 @0x53640 ----


void ___36__WCMFeedController_customizeHeader__block_invoke_2_2120(long param_1)



{

  undefined8 uVar1;

  undefined8 local_48;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_adjustHeaderSize(uVar1,local_48);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___36-[WCMFeedController_customizeHeader]_block_invoke_3 @0x536b0 ----


void ___36__WCMFeedController_customizeHeader__block_invoke_3(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_48;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_48);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_headerBrandKey(uVar2,local_48);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_removeObjectForKey_(uVar1,local_48);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_applyHeaderBrand(uVar1,local_48);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- openMyMoments @0x565b0 ----


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::openMyMoments(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  ulong uVar6;

  undefined8 local_a0;

  long local_38;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSend_host(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_navigationController(uVar2,local_a0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topViewController(uVar3,local_a0);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_host(local_18,local_a0);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  (*(code *)PTR__objc_release_00110458)(lVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (lVar4 == lVar5) {

    uVar2 = _NSClassFromString(0,&cf_WCCommentListViewController);

    local_28 = uVar2;

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

    uVar6 = _objc_msgSend_isSubclassOfClass_(uVar2,local_a0,uVar3);

    if ((uVar6 & 1) != 0) {

      local_30 = _objc_alloc_init(local_28);

      _objc_msgSend_host(local_18,local_a0);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_addChildViewController_(uVar2,local_a0,local_30);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_msgSend_restoreChrome(local_18,local_a0);

      _Call(local_30,&cf_showMyWCListView,PTR____NSArray0__struct_00110718);

      local_38 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_removeFromParentViewController(local_30,local_a0);

      bVar1 = true;

      if (local_38 != 0) {

        _objc_msgSend_host(local_18,local_a0);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_navigationController(uVar2,local_a0);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_topViewController(uVar3,local_a0);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_host(local_18,local_a0);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        bVar1 = lVar4 == lVar5;

        (*(code *)PTR__objc_release_00110458)(lVar5);

        (*(code *)PTR__objc_release_00110458)(lVar4);

        (*(code *)PTR__objc_release_00110458)(uVar3);

        (*(code *)PTR__objc_release_00110458)(uVar2);

      }

      if (bVar1) {

        _objc_msgSend_coverHost(local_18,local_a0);

        _objc_msgSend_status_(local_18,local_a0,&cf_feelSb);

      }

      _objc_storeStrong(&local_38);

      _objc_storeStrong(&local_30,0);

    }

  }

  return;

}






// ---- openMessages @0x5691c ----


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::openMessages(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSend_host(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_navigationController(uVar1,local_50);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topViewController(uVar2,local_50);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_host(local_18,local_50);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  (*(code *)PTR__objc_release_00110458)(lVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (lVar3 == lVar4) {

    uVar1 = _objc_alloc(&objc::class_t::WCMInboxController);

    local_28 = _objc_msgSend_initWithStyle_(uVar1,local_50,0);

    _objc_msgSend_setHidesBottomBarWhenPushed_(local_28,local_50,1);

    _objc_msgSend_restoreChrome(local_18,local_50);

    _objc_msgSend_host(local_18,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_navigationController(uVar1,local_50);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_pushViewController_animated_(uVar2,local_50,local_28,1);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_28,0);

  }

  return;

}





