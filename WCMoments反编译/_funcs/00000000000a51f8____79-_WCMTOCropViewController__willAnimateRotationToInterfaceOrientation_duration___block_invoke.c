// ___79-[WCMTOCropViewController__willAnimateRotationToInterfaceOrientation:duration:]_block_invoke @0xa51f8

void ___79__WCMTOCropViewController__willAnimateRotationToInterfaceOrientation_duration___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  uVar1 = _UIInterfaceOrientationIsLandscape(*(undefined8 *)(param_5 + 0x28));
  uVar3 = _objc_msgSend_frameForCropViewWithVerticalLayout_(uVar2,local_b0,uVar1 ^ 1);
  _objc_msgSend_cropView(*(undefined8 *)(param_5 + 0x20),local_b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar3,uVar2,local_b0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  uVar2 = _UIInterfaceOrientationIsPortrait(*(undefined8 *)(param_5 + 0x28));
  uVar3 = _objc_msgSend_frameForToolbarWithVerticalLayout_(uVar3,local_b0,uVar2);
  _objc_msgSend_toolbar(*(undefined8 *)(param_5 + 0x20),local_b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar3,param_2,param_3,param_4,uVar2,local_b0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_cropView(*(undefined8 *)(param_5 + 0x20),local_b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_performRelayoutForRotation(uVar2,local_b0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

