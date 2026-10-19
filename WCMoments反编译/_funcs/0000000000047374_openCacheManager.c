// openCacheManager @0x47374

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

