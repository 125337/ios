// reset @0x6aa5c

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageScrollView::reset(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  
  _objc_msgSend_setZoomScale_(0x3ff0000000000000,param_1);
  _objc_msgSend_imageView(param_1,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_(uVar1,local_68,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar4 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);
  uVar2 = *(undefined8 *)PTR__CGRectZero_001108d8;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);
  _objc_msgSend_imageView(param_1,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,uVar4,uVar3,uVar5,uVar1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setImageType_(param_1,local_68,0);
  return;
}

