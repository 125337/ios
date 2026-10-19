// ___71-[WCMYBIBImageCell_updateImageLayoutWithOrientation:previousImageSize:]_block_invoke @0x6c220

void ___71__WCMYBIBImageCell_updateImageLayoutWithOrientation_previousImageSize___block_invoke
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_78;
  
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar1,local_78);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar3,uVar5,uVar4,uVar6,uVar2,local_78);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

