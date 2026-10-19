// ___48-[WCMTOCropViewController_viewDidLayoutSubviews]_block_invoke @0xa4838

void ___48__WCMTOCropViewController_viewDidLayoutSubviews__block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  uVar1 = _objc_msgSend_verticalLayout(*(undefined8 *)(param_5 + 0x20));
  uVar2 = _objc_msgSend_frameForToolbarWithVerticalLayout_(uVar2,local_70,uVar1);
  _objc_msgSend_toolbar(*(undefined8 *)(param_5 + 0x20),local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,param_2,param_3,param_4,uVar1,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_adjustToolbarInsets(*(undefined8 *)(param_5 + 0x20),local_70);
  _objc_msgSend_toolbar(*(undefined8 *)(param_5 + 0x20),local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNeedsLayout(uVar1,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

