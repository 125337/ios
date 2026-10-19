// ___132-[WCMTOCropViewController_presentAnimatedFromParentViewController:fromImage:fromView:fromFrame:angle:toImageFrame:setup:completion:]_block_invoke @0xa6abc

void ___132__WCMTOCropViewController_presentAnimatedFromParentViewController_fromImage_fromView_fromFrame_angle_toImageFrame_setup_completion___block_invoke
               (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_msgSend_cropView(local_28,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCroppingViewsHidden_animated_(uVar1,local_40,0,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = _CGRectIsEmpty(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                         *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  if ((uVar2 & 1) == 0) {
    _objc_msgSend_cropView(local_28,local_40);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setGridOverlayHidden_animated_(uVar1,local_40,0,1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

