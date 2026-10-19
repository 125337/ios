// animationControllerForDismissedController: @0xa7878

/* Function Stack Size: 0x18 bytes */

ID WCMTOCropViewController::animationControllerForDismissedController_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_90;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  _objc_msgSend_navigationController(local_20,local_90);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (lVar2 == 0) {
    lVar3 = _objc_msgSend_modalTransitionStyle(local_20,local_90);
    bVar1 = lVar3 == 0;
  }
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if (bVar1) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    _objc_initWeak(auStack_40,local_20);
    local_68 = PTR___NSConcreteStackBlock_001104f0;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = 
    ___69__WCMTOCropViewController_animationControllerForDismissedController___block_invoke;
    local_50 = &___block_descriptor_40_e8_32w_e5_v8__0l;
    _objc_copyWeak(auStack_48,auStack_40);
    uVar4 = _objc_msgSend_transitionController(local_20,local_90);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    _objc_msgSend_setPrepareForTransitionHandler_(uVar4,local_90,&local_68);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = _objc_msgSend_transitionController(local_20,local_90);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    _objc_msgSend_setIsDismissing_(uVar4,local_90,1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = _objc_msgSend_transitionController(local_20,local_90);
    local_18 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_34 = 1;
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  _objc_storeStrong(&local_30,0);
  IVar5 = _objc_autoreleaseReturnValue(local_18);
  return IVar5;
}

