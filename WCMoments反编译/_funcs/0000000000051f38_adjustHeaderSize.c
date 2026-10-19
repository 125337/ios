// adjustHeaderSize @0x51f38

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::adjustHeaderSize(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double local_108;
  undefined8 local_c0;
  undefined8 local_a8 [3];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_40 = param_2;
  local_38 = param_1;
  local_48 = _objc_opt_new(&objc::class_t::WCMHeaderSizeController);
  uVar1 = _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = _objc_msgSend_headerBrandKey(local_38,local_c0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = _objc_msgSend_dictionaryForKey_(uVar1,local_c0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = _objc_msgSend_objectForKeyedSubscript_(uVar3,local_c0,&cf_scale);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  dVar5 = (double)_objc_msgSend_doubleValue(uVar4,local_c0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_108 = dVar5;
  if (dVar5 <= 0.0) {
    local_108 = 1.0;
  }
  local_50 = dVar5;
  _objc_msgSend_setScale_(local_108,local_48,local_c0);
  uVar1 = _objc_msgSend_account(local_38,local_c0);
  local_58 = _objc_retainAutoreleasedReturnValue(uVar1);
  _objc_initWeak(auStack_60,local_38);
  local_90 = PTR___NSConcreteStackBlock_001104f0;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = ___37__WCMFeedController_adjustHeaderSize__block_invoke;
  local_78 = &___block_descriptor_48_e8_32s40w_e8_v16__0d8l;
  _objc_copyWeak(auStack_68,auStack_60);
  local_70 = (*(code *)PTR__objc_retain_00110460)(local_58);
  _objc_msgSend_setOnChange_(local_48,local_c0,&local_90);
  uVar1 = _objc_alloc(&_OBJC_CLASS___UINavigationController);
  local_a8[0] = _objc_msgSend_initWithRootViewController_(uVar1,local_c0,local_48);
  _objc_msgSend_setModalPresentationStyle_(local_a8[0],local_c0,1);
  uVar1 = _objc_msgSend_mediumDetent(&_OBJC_CLASS___UISheetPresentationControllerDetent,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  local_30 = uVar1;
  uVar2 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_c0,&local_30,1);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = _objc_msgSend_sheetPresentationController(local_a8[0],local_c0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  _objc_msgSend_setDetents_(uVar3,local_c0,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_msgSend_host(local_38,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  _objc_msgSend_presentViewController_animated_completion_(uVar1,local_c0,local_a8[0],1,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(local_a8,0);
  _objc_storeStrong(&local_70,0);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

