// _Install @0x5c58c

undefined1 _Install(void)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_828;
  ulong local_820;
  ulong local_758;
  ulong local_750;
  ulong local_6b0;
  ulong local_6a8;
  undefined8 local_660;
  undefined *local_650;
  undefined4 local_648;
  undefined4 local_644;
  code *local_640;
  undefined *local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  long local_618;
  undefined *local_610;
  undefined4 local_608;
  undefined4 local_604;
  code *local_600;
  undefined *local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  long local_5d8;
  undefined *local_5d0;
  undefined4 local_5c8;
  undefined4 local_5c4;
  code *local_5c0;
  undefined *local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  long local_598;
  undefined *local_590;
  undefined4 local_588;
  undefined4 local_584;
  code *local_580;
  undefined *local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined *local_558;
  undefined4 local_550;
  undefined4 local_54c;
  code *local_548;
  undefined *local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined *local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  code *local_4f8;
  undefined *local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  byte local_4d8;
  undefined8 local_4d0;
  byte local_4c1;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined1 auStack_4a8 [8];
  long local_4a0;
  long *local_498;
  undefined8 local_468;
  undefined *local_460;
  undefined4 local_458;
  undefined4 local_454;
  code *local_450;
  undefined *local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined *local_410;
  undefined4 local_408;
  undefined4 local_404;
  code *local_400;
  undefined *local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined *local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  code *local_3b0;
  undefined *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 auStack_360 [8];
  long local_358;
  long *local_350;
  undefined8 local_320;
  undefined8 local_318;
  undefined *local_310;
  undefined4 local_308;
  undefined4 local_304;
  code *local_300;
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  code *local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  undefined *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  code *local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a9;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  if ((_HookInstalled & 1) == 0) {
    local_1b8 = _NSClassFromString(&cf_FindFriendEntryViewController);
    local_1c0 = _class_getInstanceMethod(local_1b8,"viewDidAppear:");
    uVar4 = local_1b8;
    if (local_1c0 != 0) {
      uVar2 = _objc_opt_class(&_OBJC_CLASS___UIViewController);
      uVar3 = _objc_msgSend_isSubclassOfClass_(uVar4,local_660,uVar2);
      if ((uVar3 & 1) != 0) {
        _InstallMessageStyleHooks();
        local_1c8 = _NSClassFromString(&cf_WCFacade);
        local_1d0 = _NSSelectorFromString(&cf_onDownloadFinish_downloadType_);
        local_1d8 = _class_getInstanceMethod(local_1c8,local_1d0);
        uVar3 = _HookEncodingMatches(local_1d8,"v32@0:8@16q24");
        if ((uVar3 & 1) != 0) {
          local_1f8 = _method_getImplementation(local_1d8);
          local_218 = PTR___NSConcreteStackBlock_001104f0;
          local_210 = 0xc0000000;
          local_20c = 0;
          local_208 = ___Install_block_invoke;
          local_200 = &___block_descriptor_48_e14_v32__0_8_16q24l;
          local_1f0 = local_1d0;
          local_1e0 = local_1f8;
          uVar4 = _objc_retainBlock(&local_218);
          uVar5 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar2 = local_1c8;
          uVar4 = local_1d0;
          local_1e8 = uVar5;
          uVar6 = _method_getTypeEncoding(local_1d8);
          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_1d8,local_1e8);
          }
        }
        _memset(auStack_260,0,0x40);
        uVar4 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010fb30);
        local_6a8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_660,auStack_260,auStack_a8,0x10);
        if (local_6a8 != 0) {
          lVar8 = *local_250;
          local_6b0 = 0;
          do {
            do {
              if (*local_250 - lVar8 != 0) {
                _objc_enumerationMutation(*local_250 - lVar8,uVar4);
              }
              local_220 = *(undefined8 *)(local_258 + local_6b0 * 8);
              local_268 = _NSSelectorFromString(local_220);
              local_270 = _class_getInstanceMethod(local_1c8,local_268);
              uVar3 = _HookEncodingMatches(local_270,"v32@0:8@16q24");
              if ((uVar3 & 1) != 0) {
                local_278 = _method_getImplementation(local_270);
                uVar3 = _objc_msgSend_hasPrefix_(local_220,local_660,&cf_onBegin);
                pcVar1 = &cf_video_native_begin;
                if ((uVar3 & 1) == 0) {
                  pcVar1 = &cf_video_native_queued;
                }
                local_280 = (*(code *)PTR__objc_retain_00110460)(pcVar1);
                local_2c0 = PTR___NSConcreteStackBlock_001104f0;
                local_2b8 = 0xc2000000;
                local_2b4 = 0;
                local_2b0 = ___Install_block_invoke_3;
                local_2a8 = &___block_descriptor_56_e8_32s_e14_v32__0_8_16q24l;
                local_298 = local_278;
                local_290 = local_268;
                local_2a0 = (*(code *)PTR__objc_retain_00110460)(local_280);
                uVar2 = _objc_retainBlock(&local_2c0);
                uVar6 = _imp_implementationWithBlock();
                (*(code *)PTR__objc_release_00110458)(uVar2);
                uVar5 = local_1c8;
                uVar2 = local_268;
                local_288 = uVar6;
                uVar7 = _method_getTypeEncoding(local_270);
                uVar3 = _class_addMethod(uVar5,uVar2,uVar6,uVar7);
                if ((uVar3 & 1) == 0) {
                  _method_setImplementation(local_270,local_288);
                }
                _objc_storeStrong(&local_2a0);
                _objc_storeStrong(&local_280,0);
              }
              local_6b0 = local_6b0 + 1;
            } while (local_6b0 < local_6a8);
            local_6a8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar4,local_660,auStack_260,auStack_a8,0x10);
            local_6b0 = 0;
          } while (local_6a8 != 0);
        }
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_2c8 = _NSSelectorFromString
                              (&cf_onDownloadMediaProcessChange_downloadType_current_total_);
        local_2d0 = _class_getInstanceMethod(local_1c8,local_2c8);
        uVar3 = _HookEncodingMatches(local_2d0,"v40@0:8@16q24i32i36");
        if ((uVar3 & 1) != 0) {
          local_2f0 = _method_getImplementation(local_2d0);
          local_310 = PTR___NSConcreteStackBlock_001104f0;
          local_308 = 0xc0000000;
          local_304 = 0;
          local_300 = ___Install_block_invoke_3018;
          local_2f8 = &___block_descriptor_48_e20_v40__0_8_16q24i32i36l;
          local_2e8 = local_2c8;
          local_2d8 = local_2f0;
          uVar4 = _objc_retainBlock(&local_310);
          uVar5 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar2 = local_1c8;
          uVar4 = local_2c8;
          local_2e0 = uVar5;
          uVar6 = _method_getTypeEncoding(local_2d0);
          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_2d0,local_2e0);
          }
        }
        local_318 = _NSClassFromString(&cf_WCDownloadVideoCDNMgr);
        _memset(auStack_360,0,0x40);
        uVar4 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010fb48);
        local_750 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_660,auStack_360,auStack_128,0x10);
        if (local_750 != 0) {
          lVar8 = *local_350;
          local_758 = 0;
          do {
            do {
              if (*local_350 - lVar8 != 0) {
                _objc_enumerationMutation(*local_350 - lVar8,uVar4);
              }
              local_320 = *(undefined8 *)(local_358 + local_758 * 8);
              local_368 = _NSSelectorFromString(local_320);
              local_370 = _class_getInstanceMethod(local_318,local_368);
              uVar3 = _HookEncodingMatches(local_370,"v32@0:8@16@24");
              if ((uVar3 & 1) != 0) {
                local_378 = _method_getImplementation(local_370);
                uVar3 = _objc_msgSend_containsString_(local_320,local_660,&cf_Complete);
                pcVar1 = &cf_video_native_complete;
                if ((uVar3 & 1) == 0) {
                  pcVar1 = &cf_video_native_stop;
                }
                local_380 = (*(code *)PTR__objc_retain_00110460)(pcVar1);
                local_3c0 = PTR___NSConcreteStackBlock_001104f0;
                local_3b8 = 0xc2000000;
                local_3b4 = 0;
                local_3b0 = ___Install_block_invoke_2_3042;
                local_3a8 = &___block_descriptor_56_e8_32s_e14_v32__0_8_16_24l;
                local_398 = local_378;
                local_390 = local_368;
                local_3a0 = (*(code *)PTR__objc_retain_00110460)(local_380);
                uVar2 = _objc_retainBlock(&local_3c0);
                uVar6 = _imp_implementationWithBlock();
                (*(code *)PTR__objc_release_00110458)(uVar2);
                uVar5 = local_318;
                uVar2 = local_368;
                local_388 = uVar6;
                uVar7 = _method_getTypeEncoding(local_370);
                uVar3 = _class_addMethod(uVar5,uVar2,uVar6,uVar7);
                if ((uVar3 & 1) == 0) {
                  _method_setImplementation(local_370,local_388);
                }
                _objc_storeStrong(&local_3a0);
                _objc_storeStrong(&local_380,0);
              }
              local_758 = local_758 + 1;
            } while (local_758 < local_750);
            local_750 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar4,local_660,auStack_360,auStack_128,0x10);
            local_758 = 0;
          } while (local_750 != 0);
        }
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_3c8 = _NSSelectorFromString(&cf_onPlayerDownloadStartFail_argsWrap_);
        local_3d0 = _class_getInstanceMethod(local_318,local_3c8);
        uVar3 = _HookEncodingMatches(local_3d0,"v28@0:8i16@20");
        if ((uVar3 & 1) != 0) {
          local_3f0 = _method_getImplementation(local_3d0);
          local_410 = PTR___NSConcreteStackBlock_001104f0;
          local_408 = 0xc0000000;
          local_404 = 0;
          local_400 = ___Install_block_invoke_3047;
          local_3f8 = &___block_descriptor_48_e14_v28__0_8i16_20l;
          local_3e8 = local_3c8;
          local_3d8 = local_3f0;
          uVar4 = _objc_retainBlock(&local_410);
          uVar5 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar2 = local_318;
          uVar4 = local_3c8;
          local_3e0 = uVar5;
          uVar6 = _method_getTypeEncoding(local_3d0);
          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_3d0,local_3e0);
          }
        }
        local_418 = _NSSelectorFromString(&cf_onTimelineDataChangedWithAdded_andChanged_andDeleted_)
        ;
        local_420 = _class_getInstanceMethod(local_1c8,local_418);
        uVar3 = _HookEncodingMatches(local_420,"v40@0:8@16@24@32");
        if ((uVar3 & 1) != 0) {
          local_440 = _method_getImplementation(local_420);
          local_460 = PTR___NSConcreteStackBlock_001104f0;
          local_458 = 0xc0000000;
          local_454 = 0;
          local_450 = ___Install_block_invoke_2_3055;
          local_448 = &___block_descriptor_48_e17_v40__0_8_16_24_32l;
          local_438 = local_418;
          local_428 = local_440;
          uVar4 = _objc_retainBlock(&local_460);
          uVar5 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar2 = local_1c8;
          uVar4 = local_418;
          local_430 = uVar5;
          uVar6 = _method_getTypeEncoding(local_420);
          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_420,local_430);
          }
        }
        _memset(auStack_4a8,0,0x40);
        uVar4 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010fb60);
        local_820 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_660,auStack_4a8,auStack_1a8,0x10);
        if (local_820 != 0) {
          lVar8 = *local_498;
          local_828 = 0;
          do {
            do {
              if (*local_498 - lVar8 != 0) {
                _objc_enumerationMutation(*local_498 - lVar8,uVar4);
              }
              local_468 = *(undefined8 *)(local_4a0 + local_828 * 8);
              local_4b0 = _NSSelectorFromString(local_468);
              local_4b8 = _class_getInstanceMethod(local_1c8,local_4b0);
              uVar3 = _HookEncodingMatches(local_4b8,"v16@0:8");
              if ((uVar3 & 1) != 0) {
                local_4c0 = _method_getImplementation(local_4b8);
                local_4c1 = _objc_msgSend_isEqualToString_
                                      (local_468,local_660,&cf_onTimelineServerError);
                local_508 = PTR___NSConcreteStackBlock_001104f0;
                local_500 = 0xc0000000;
                local_4fc = 0;
                local_4f8 = ___Install_block_invoke_4;
                local_4f0 = &___block_descriptor_49_e8_v16__0_8l;
                local_4e8 = local_4c0;
                local_4e0 = local_4b0;
                local_4d8 = local_4c1 & 1;
                uVar2 = _objc_retainBlock(&local_508);
                uVar6 = _imp_implementationWithBlock();
                (*(code *)PTR__objc_release_00110458)(uVar2);
                uVar5 = local_1c8;
                uVar2 = local_4b0;
                local_4d0 = uVar6;
                uVar7 = _method_getTypeEncoding(local_4b8);
                uVar3 = _class_addMethod(uVar5,uVar2,uVar6,uVar7);
                if ((uVar3 & 1) == 0) {
                  _method_setImplementation(local_4b8,local_4d0);
                }
              }
              local_828 = local_828 + 1;
            } while (local_828 < local_820);
            local_820 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar4,local_660,auStack_4a8,auStack_1a8,0x10);
            local_828 = 0;
          } while (local_820 != 0);
        }
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_510 = _NSSelectorFromString(&cf_onNoMoreTimelineData);
        local_518 = _class_getInstanceMethod(local_1c8,local_510);
        uVar3 = _HookEncodingMatches(local_518,"v16@0:8");
        if ((uVar3 & 1) != 0) {
          local_538 = _method_getImplementation(local_518);
          local_558 = PTR___NSConcreteStackBlock_001104f0;
          local_550 = 0xc0000000;
          local_54c = 0;
          local_548 = ___Install_block_invoke_3070;
          local_540 = &___block_descriptor_48_e8_v16__0_8l;
          local_530 = local_510;
          local_520 = local_538;
          uVar4 = _objc_retainBlock(&local_558);
          uVar5 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar2 = local_1c8;
          uVar4 = local_510;
          local_528 = uVar5;
          uVar6 = _method_getTypeEncoding(local_518);
          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_518,local_528);
          }
        }
        local_570 = _method_getImplementation(local_1c0);
        local_590 = PTR___NSConcreteStackBlock_001104f0;
        local_588 = 0xc0000000;
        local_584 = 0;
        local_580 = ___Install_block_invoke_3_3073;
        local_578 = &___block_descriptor_40_e29_v20__0__UIViewController_8B16l;
        local_560 = local_570;
        uVar4 = _objc_retainBlock(&local_590);
        uVar2 = _imp_implementationWithBlock();
        (*(code *)PTR__objc_release_00110458)(uVar4);
        uVar4 = local_1b8;
        local_568 = uVar2;
        uVar5 = _method_getTypeEncoding(local_1c0);
        uVar3 = _class_addMethod(uVar4,"viewDidAppear:",uVar2,uVar5);
        if ((uVar3 & 1) == 0) {
          _method_setImplementation(local_1c0,local_568);
        }
        local_598 = _class_getInstanceMethod(local_1b8,"viewWillDisappear:");
        if (local_598 != 0) {
          local_5b0 = _method_getImplementation(local_598);
          local_5d0 = PTR___NSConcreteStackBlock_001104f0;
          local_5c8 = 0xc0000000;
          local_5c4 = 0;
          local_5c0 = ___Install_block_invoke_4_3077;
          local_5b8 = &___block_descriptor_40_e29_v20__0__UIViewController_8B16l;
          local_5a0 = local_5b0;
          uVar4 = _objc_retainBlock(&local_5d0);
          uVar2 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar4 = local_1b8;
          local_5a8 = uVar2;
          uVar5 = _method_getTypeEncoding(local_598);
          uVar3 = _class_addMethod(uVar4,"viewWillDisappear:",uVar2,uVar5);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_598,local_5a8);
          }
        }
        local_5d8 = _class_getInstanceMethod(local_1b8,"viewWillAppear:");
        if (local_5d8 != 0) {
          local_5f0 = _method_getImplementation(local_5d8);
          local_610 = PTR___NSConcreteStackBlock_001104f0;
          local_608 = 0xc0000000;
          local_604 = 0;
          local_600 = ___Install_block_invoke_5_3078;
          local_5f8 = &___block_descriptor_40_e29_v20__0__UIViewController_8B16l;
          local_5e0 = local_5f0;
          uVar4 = _objc_retainBlock(&local_610);
          uVar2 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar4 = local_1b8;
          local_5e8 = uVar2;
          uVar5 = _method_getTypeEncoding(local_5d8);
          uVar3 = _class_addMethod(uVar4,"viewWillAppear:",uVar2,uVar5);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_5d8,local_5e8);
          }
        }
        local_618 = _class_getInstanceMethod(local_1b8,"viewDidLayoutSubviews");
        if (local_618 != 0) {
          local_630 = _method_getImplementation(local_618);
          local_650 = PTR___NSConcreteStackBlock_001104f0;
          local_648 = 0xc0000000;
          local_644 = 0;
          local_640 = ___Install_block_invoke_6;
          local_638 = &___block_descriptor_40_e26_v16__0__UIViewController_8l;
          local_620 = local_630;
          uVar4 = _objc_retainBlock(&local_650);
          uVar2 = _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_00110458)(uVar4);
          uVar4 = local_1b8;
          local_628 = uVar2;
          uVar5 = _method_getTypeEncoding(local_618);
          uVar3 = _class_addMethod(uVar4,"viewDidLayoutSubviews",uVar2,uVar5);
          if ((uVar3 & 1) == 0) {
            _method_setImplementation(local_618,local_628);
          }
        }
        _HookInstalled = 1;
        local_1a9 = 1;
        goto LAB_0005d680;
      }
    }
    local_1a9 = 0;
  }
  else {
    local_1a9 = 1;
  }
LAB_0005d680:
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return local_1a9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

