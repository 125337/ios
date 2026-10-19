// ___41-[WCMTOCropViewController_viewDidAppear:]_block_invoke @0xa25c0

void ___41__WCMTOCropViewController_viewDidAppear___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_setNeedsStatusBarAppearanceUpdate(*(undefined8 *)(param_1 + 0x20));
  _objc_msgSend_titleLabel(*(undefined8 *)(param_1 + 0x20),local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0x3ff0000000000000,uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

