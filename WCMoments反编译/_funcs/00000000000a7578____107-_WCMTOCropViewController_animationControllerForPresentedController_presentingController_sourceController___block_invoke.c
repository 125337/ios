// ___107-[WCMTOCropViewController_animationControllerForPresentedController:presentingController:sourceController:]_block_invoke @0xa7578

void ___107__WCMTOCropViewController_animationControllerForPresentedController_presentingController_sourceController___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_d8;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_5;
  local_28 = param_5;
  local_38 = _objc_loadWeakRetained(param_5 + 0x20);
  _objc_msgSend_transitionController(local_38,local_d8);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cropView(local_38,local_d8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cropView(local_38,local_d8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar7 = _objc_msgSend_cropBoxFrame(uVar3,local_d8);
  _objc_msgSend_view(local_38,local_d8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar7 = _objc_msgSend_convertRect_toView_(uVar7,uVar2,local_d8);
  _objc_msgSend_setToFrame_(uVar7,local_40,local_d8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = _objc_msgSend_fromFrame(local_40,local_d8);
  uVar5 = _CGRectIsEmpty(uVar2,param_2,param_3,param_4);
  bVar1 = true;
  if ((uVar5 & 1) != 0) {
    _objc_msgSend_fromView(local_40,local_d8);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar6 != 0;
    (*(code *)PTR__objc_release_00110458)(lVar6);
  }
  if (bVar1) {
    _objc_msgSend_cropView(local_38,local_d8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setCroppingViewsHidden_(uVar2,local_d8,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_msgSend_prepareForTransitionHandler(local_38,local_d8);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar6 != 0) {
    _objc_msgSend_prepareForTransitionHandler(local_38,local_d8);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar6);
  }
  _objc_msgSend_setPrepareForTransitionHandler_(local_38,local_d8);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

