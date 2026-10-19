// openGallery: @0x4cb34

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMFeedController::openGallery_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  ID IVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double local_470;
  long local_268;
  undefined8 local_208;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined8 local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  undefined8 local_178;
  undefined8 local_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double dStack_148;
  double local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  double dStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_e0;
  int local_d4;
  undefined8 local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_99;
  long local_98;
  byte local_89;
  undefined8 local_88;
  byte local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_61;
  long local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  uVar5 = _objc_msgSend_host(local_38,local_208);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = _objc_msgSend_presentedViewController(uVar5,local_208);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_51 = 0;
  local_61 = 0;
  bVar3 = true;
  uVar1 = lVar7 == 0;
  if ((bool)uVar1) {
    uVar6 = _objc_msgSend_gallery(local_38,local_208);
    local_50 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_51 = 1;
    uVar6 = _objc_msgSend_superview(local_50,local_208);
    local_60 = _objc_retainAutoreleasedReturnValue(uVar6);
    bVar3 = local_60 != 0;
    local_61 = uVar1;
    (*(code *)PTR__objc_release_00110458)(local_60);
    uVar1 = local_61;
  }
  local_61 = uVar1;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_50);
  }
  (*(code *)PTR__objc_release_00110458)(lVar7);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  if (bVar3) {
    local_68 = 1;
  }
  else {
    uVar5 = _objc_msgSend_items(local_38,local_208);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = _objc_msgSend_objectForKeyedSubscript_(uVar5,local_208,local_48);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_79 = 0;
    local_89 = 0;
    local_99 = 0;
    local_268 = lVar7;
    if (lVar7 == 0) {
      uVar6 = _objc_msgSend_facade(local_38,local_208);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_79 = 1;
      local_30 = local_48;
      local_78 = uVar6;
      uVar8 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_208,&local_30,1);
      local_88 = _objc_retainAutoreleasedReturnValue(uVar8);
      local_89 = 1;
      uVar6 = _Call(uVar6,&cf_getDataItemByID_);
      local_98 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_268 = local_98;
    }
    local_99 = lVar7 == 0;
    local_70 = (*(code *)PTR__objc_retain_00110460)(local_268);
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_78);
    }
    (*(code *)PTR__objc_release_00110458)(lVar7);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    uVar5 = _Call(local_70,&cf_contentObj,PTR____NSArray0__struct_00110718);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = _Call(uVar5,&cf_mediaList,PTR____NSArray0__struct_00110718);
    local_a8 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    uVar5 = local_a8;
    uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);
    uVar4 = _objc_opt_isKindOfClass(uVar5,uVar6);
    if (((uVar4 & 1) == 0) || (lVar7 = _objc_msgSend_count(local_a8,local_208), lVar7 == 0)) {
      _objc_msgSend_openNativeDetail_(local_38,local_208,local_48);
      local_68 = 1;
    }
    else {
      uVar5 = _objc_msgSend_account(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setGalleryAccount_(local_38,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_msgSend_setGalleryIdleSamples_(local_38,local_208,0);
      _objc_msgSend_setGalleryLastOffset_(0,local_38,local_208);
      _objc_msgSend_setGalleryItemID_(local_38,local_208,local_48);
      _objc_msgSend_setGalleryMedia_(local_38,local_208,local_a8);
      uVar5 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
      _objc_msgSend_setGalleryPaths_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
      _objc_msgSend_setGalleryRequestTimes_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_opt_new(&_OBJC_CLASS___NSCache);
      _objc_msgSend_setGalleryValidatedData_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_galleryValidatedData(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setTotalCostLimit_(uVar5,local_208,0x4000000);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);
      _objc_msgSend_setGalleryPendingChecks_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);
      _objc_msgSend_setGalleryInvalidFiles_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_opt_new(&_OBJC_CLASS___NSOperationQueue);
      _objc_msgSend_setGalleryDecodeQueue_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_galleryDecodeQueue(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setMaxConcurrentOperationCount_(uVar5,local_208,2);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_opt_new(&objc::class_t::WCMYBImageBrowser);
      _objc_msgSend_setGallery_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setShouldHideStatusBar_(uVar5,local_208,0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      IVar2 = local_38;
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setDelegate_(uVar5,local_208,IVar2);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setToolViewHandlers_(uVar5,local_208,PTR____NSArray0__struct_00110718);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setPreloadCount_(uVar5,local_208,1);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_sharedManager(&objc::class_t::WCMYBIBIconManager,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setLoadingImage_(uVar5,local_208,&___block_literal_global_2062);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_msgSend_updateGalleryDataBeforeShow(local_38,local_208);
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_host(local_38,local_208);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = _objc_msgSend_view(uVar6,local_208);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = _objc_msgSend_window(uVar8,local_208);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      _objc_msgSend_showToView_(uVar5,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar9);
      (*(code *)PTR__objc_release_00110458)(uVar8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_208,1);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_b0 = uVar5;
      uVar6 = _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_208,&cf_xmark);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      _objc_msgSend_setImage_forState_(uVar5,local_208,uVar6,0);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      uVar5 = _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setTintColor_(local_b0,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar9 = 0x3fd0000000000000;
      uVar5 = _objc_msgSend_colorWithWhite_alpha_(0,&_OBJC_CLASS___UIColor,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setBackgroundColor_(local_b0,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_layer(local_b0,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setCornerRadius_(0x4036000000000000,uVar5,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_d4 = 0x18;
      uVar5 = _objc_msgSend_host(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_view(uVar5,local_208);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = _objc_msgSend_window(uVar6,local_208);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      dVar10 = (double)_objc_msgSend_safeAreaInsets(uVar8,local_208);
      local_100 = dVar10;
      local_f8 = uVar9;
      (*(code *)PTR__objc_release_00110458)(uVar8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_470 = dVar10;
      if (dVar10 <= (double)(long)local_d4) {
        local_470 = (double)(long)local_d4;
      }
      local_108 = local_470;
      local_470 = local_470 + 8.0;
      uVar9 = 0x4046000000000000;
      uVar8 = 0x4046000000000000;
      local_e0 = dVar10;
      local_130 = _CGRectMake(0x4030000000000000);
      dStack_128 = local_470;
      local_120 = uVar8;
      uStack_118 = uVar9;
      local_d0 = local_130;
      dStack_c8 = local_470;
      local_c0 = uVar8;
      uStack_b8 = uVar9;
      _objc_msgSend_setFrame_(local_130,local_b0,local_208);
      _objc_msgSend_setAccessibilityLabel_(local_b0,local_208,&cf_sQVGrOm);
      _objc_msgSend_addTarget_action_forControlEvents_
                (local_b0,local_208,local_38,"closeGallery",0x40);
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_addSubview_(uVar5,local_208,local_b0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_opt_new(&_OBJC_CLASS___UILabel);
      _objc_msgSend_setGalleryCounter_(local_38,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_galleryCounter(local_38,local_208);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      _objc_msgSend_setTextColor_(uVar6,local_208,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_galleryCounter(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setTextAlignment_(uVar5,local_208,1);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar6 = _objc_msgSend_frame(local_b0,local_208);
      dVar10 = local_470;
      local_170 = uVar6;
      local_168 = local_470;
      local_160 = uVar8;
      local_158 = uVar9;
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_190 = _objc_msgSend_bounds(uVar5,local_208);
      dVar11 = dVar10 - 152.0;
      uVar9 = 0x4046000000000000;
      local_188 = uVar8;
      local_180 = dVar10;
      local_178 = uVar6;
      local_150 = _CGRectMake(0x4053000000000000);
      dStack_148 = local_470;
      local_140 = dVar11;
      uStack_138 = uVar9;
      uVar6 = _objc_msgSend_galleryCounter(local_38,local_208);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      dStack_1a8 = dStack_148;
      local_1b0 = local_150;
      uStack_198 = uStack_138;
      local_1a0 = local_140;
      _objc_msgSend_setFrame_(local_150,dStack_148,local_140,uStack_138,uVar6,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_gallery(local_38,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_galleryCounter(local_38,local_208);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      _objc_msgSend_addSubview_(uVar5,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_msgSend_pumpGallery(local_38,local_208);
      _objc_initWeak(auStack_1b8,local_38);
      local_1e0 = PTR___NSConcreteStackBlock_001104f0;
      local_1d8 = 0xc2000000;
      local_1d4 = 0;
      local_1d0 = ___33__WCMFeedController_openGallery___block_invoke_2;
      local_1c8 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;
      _objc_copyWeak(auStack_1c0,auStack_1b8);
      uVar5 = _objc_msgSend_timerWithTimeInterval_repeats_block_
                        (0x3fe3333333333333,&_OBJC_CLASS___NSTimer,local_208,1,&local_1e0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_setGalleryTimer_(local_38,local_208);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = _objc_msgSend_mainRunLoop(&_OBJC_CLASS___NSRunLoop,local_208);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_galleryTimer(local_38,local_208);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      _objc_msgSend_addTimer_forMode_
                (uVar5,local_208,uVar6,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_destroyWeak(auStack_1c0);
      _objc_destroyWeak(auStack_1b8);
      _objc_storeStrong(&local_b0,0);
      local_68 = 0;
    }
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

