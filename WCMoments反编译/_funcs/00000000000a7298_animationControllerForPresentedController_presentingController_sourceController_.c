// animationControllerForPresentedController:presentingController:sourceController: @0xa7298

/* Function Stack Size: 0x28 bytes */

ID WCMTOCropViewController::
   animationControllerForPresentedController_presentingController_sourceController_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_b0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [12];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  _objc_msgSend_navigationController(local_30,local_b0);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (lVar2 == 0) {
    lVar3 = _objc_msgSend_modalTransitionStyle(local_30,local_b0);
    bVar1 = lVar3 == 0;
  }
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if (bVar1) {
    local_28 = 0;
    local_54 = 1;
  }
  else {
    _objc_msgSend_cropView(local_30,local_b0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setSimpleRenderMode_(uVar4,local_b0,1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_initWeak(auStack_60,local_30);
    local_88 = PTR___NSConcreteStackBlock_001104f0;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = 
    ___107__WCMTOCropViewController_animationControllerForPresentedController_presentingController_sourceController___block_invoke
    ;
    local_70 = &___block_descriptor_40_e8_32w_e5_v8__0l;
    _objc_copyWeak(auStack_68,auStack_60);
    uVar4 = _objc_msgSend_transitionController(local_30,local_b0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    _objc_msgSend_setPrepareForTransitionHandler_(uVar4,local_b0,&local_88);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = _objc_msgSend_transitionController(local_30,local_b0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    _objc_msgSend_setIsDismissing_(uVar4,local_b0,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = _objc_msgSend_transitionController(local_30,local_b0);
    local_28 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_54 = 1;
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  IVar5 = _objc_autoreleaseReturnValue(local_28);
  return IVar5;
}

