// customizeHeader @0x524b4

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

