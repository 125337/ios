// openVideo: @0x551c0

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::openVideo_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_180;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined1 auStack_148 [8];
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined1 auStack_f8 [8];
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  _objc_msgSend_host(local_28,local_180);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_presentedViewController(uVar4,local_180);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  if (lVar5 == 0) {
    _objc_msgSend_prepareNativeVideoEnvironment(local_28,local_180);
    _objc_msgSend_videoQueueRows(local_28,local_180);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_50 = 0xffffffffffffffff;
    local_58 = 0;
    while( true ) {
      uVar2 = local_58;
      uVar6 = _objc_msgSend_count(local_48,local_180);
      if (uVar6 <= uVar2) break;
      _objc_msgSend_objectAtIndexedSubscript_(uVar2 - uVar6,local_48,local_180,local_58);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectForKeyedSubscript_(uVar4,local_180,&cf_id);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar3 = _objc_msgSend_isEqual_(uVar7,local_180,local_38);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      if ((uVar3 & 1) != 0) {
        local_50 = local_58;
        break;
      }
      local_58 = local_58 + 1;
    }
    bVar1 = -1 < (long)local_50;
    if (bVar1) {
      local_60 = _objc_opt_new(&objc::class_t::WCMVideoController);
      _objc_msgSend_setVideos_(local_60,local_180,local_48);
      _objc_msgSend_setIndex_(local_60,local_180,local_50);
      _objc_msgSend_setModalPresentationStyle_(local_60,local_180,5);
      _objc_msgSend_setModalPresentationCapturesStatusBarAppearance_(local_60,local_180,1);
      _objc_initWeak(auStack_68,local_28);
      local_90 = PTR___NSConcreteStackBlock_001104f0;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = ___31__WCMFeedController_openVideo___block_invoke;
      local_78 = &___block_descriptor_40_e8_32w_e17___NSArray_12__0B8l;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_msgSend_setNextVideos_(local_60,local_180,&local_90);
      local_c8 = PTR___NSConcreteStackBlock_001104f0;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = ___31__WCMFeedController_openVideo___block_invoke_2153;
      local_b0 = &___block_descriptor_40_e8_32w_e18__16__0__NSString_8l;
      _objc_copyWeak(auStack_a8,auStack_68);
      _objc_msgSend_setResolveItem_(local_60,local_180,&local_c8);
      local_f0 = PTR___NSConcreteStackBlock_001104f0;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = ___31__WCMFeedController_openVideo___block_invoke_2155;
      local_d8 = &___block_descriptor_40_e8_32w_e18_v16__0__NSString_8l;
      _objc_copyWeak(auStack_d0,auStack_68);
      _objc_msgSend_setOpenDetail_(local_60,local_180,&local_f0);
      local_118 = PTR___NSConcreteStackBlock_001104f0;
      local_110 = 0xc2000000;
      local_10c = 0;
      local_108 = ___31__WCMFeedController_openVideo___block_invoke_2157;
      local_100 = &___block_descriptor_40_e8_32w_e18_B16__0__NSString_8l;
      _objc_copyWeak(auStack_f8,auStack_68);
      _objc_msgSend_setIsFollowing_(local_60,local_180,&local_118);
      local_140 = PTR___NSConcreteStackBlock_001104f0;
      local_138 = 0xc2000000;
      local_134 = 0;
      local_130 = ___31__WCMFeedController_openVideo___block_invoke_2159;
      local_128 = &___block_descriptor_40_e8_32w_e18_v16__0__NSString_8l;
      _objc_copyWeak(auStack_120,auStack_68);
      _objc_msgSend_setFollowAuthor_(local_60,local_180,&local_140);
      local_168 = PTR___NSConcreteStackBlock_001104f0;
      local_160 = 0xc2000000;
      local_15c = 0;
      local_158 = ___31__WCMFeedController_openVideo___block_invoke_2;
      local_150 = &___block_descriptor_40_e8_32w_e18_v16__0__NSString_8l;
      _objc_copyWeak(auStack_148,auStack_68);
      _objc_msgSend_setOpenAuthorProfile_(local_60,local_180,&local_168);
      uVar4 = _objc_msgSend_host(local_28,local_180);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      _objc_msgSend_presentViewController_animated_completion_(uVar4,local_180,local_60,1,0);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(auStack_120);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      _objc_msgSend_openNativeDetail_(local_28,local_180,local_38);
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

