// ___69-[WCMTOCropViewController_animationControllerForDismissedController:]_block_invoke @0xa7ad0

void ___69__WCMTOCropViewController_animationControllerForDismissedController___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_5;
  local_18 = param_5;
  local_28 = _objc_loadWeakRetained(param_5 + 0x20);
  _objc_msgSend_transitionController(local_28,local_68);
  local_30 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_toFrame(local_30,local_68);
  uVar2 = _CGRectIsEmpty(uVar4,param_2,param_3,param_4);
  bVar1 = true;
  if ((uVar2 & 1) != 0) {
    _objc_msgSend_toView(local_30,local_68);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  if (bVar1) {
    _objc_msgSend_cropView(local_28,local_68);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setCroppingViewsHidden_(uVar4,local_68,1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  else {
    _objc_msgSend_cropView(local_28,local_68);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setSimpleRenderMode_(uVar4,local_68,1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  _objc_msgSend_prepareForTransitionHandler(local_28,local_68);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar3 != 0) {
    _objc_msgSend_prepareForTransitionHandler(local_28,local_68);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

