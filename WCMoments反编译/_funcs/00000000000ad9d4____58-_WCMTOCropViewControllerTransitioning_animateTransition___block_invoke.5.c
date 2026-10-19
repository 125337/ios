// ___58-[WCMTOCropViewControllerTransitioning_animateTransition:]_block_invoke.5 @0xad9d4

void ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke_5(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_38;
  
  uVar1 = _objc_msgSend_isDismissing(*(undefined8 *)(param_1 + 0x28));
  fVar3 = 0.0;
  if ((uVar1 & 1) == 0) {
    fVar3 = 1.0;
  }
  _objc_msgSend_view(uVar1 & 1,*(undefined8 *)(param_1 + 0x20),local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_((double)fVar3,uVar2,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

