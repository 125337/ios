// ___58-[WCMTOCropViewControllerTransitioning_animateTransition:]_block_invoke_2.6 @0xada5c

void ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke_2_6(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_reset(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = _objc_msgSend_transitionWasCancelled(*(undefined8 *)(param_1 + 0x28),local_38);
  _objc_msgSend_completeTransition_(uVar2,local_38,uVar1 ^ 1);
  return;
}

