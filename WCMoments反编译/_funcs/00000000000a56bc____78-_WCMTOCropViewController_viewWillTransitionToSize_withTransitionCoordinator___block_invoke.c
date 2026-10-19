// ___78-[WCMTOCropViewController_viewWillTransitionToSize:withTransitionCoordinator:]_block_invoke @0xa56bc

void ___78__WCMTOCropViewController_viewWillTransitionToSize_withTransitionCoordinator___block_invoke
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_msgSend_transitionDuration(*(undefined8 *)(param_1 + 0x28),local_48);
  _objc_msgSend__willAnimateRotationToInterfaceOrientation_duration_(uVar1,local_48,uVar2);
  _objc_storeStrong(&local_20,0);
  return;
}

