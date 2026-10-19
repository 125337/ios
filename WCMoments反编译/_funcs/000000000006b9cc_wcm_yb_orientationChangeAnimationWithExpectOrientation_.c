// wcm_yb_orientationChangeAnimationWithExpectOrientation: @0x6b9cc

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::wcm_yb_orientationChangeAnimationWithExpectOrientation_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 local_60;
  
  _objc_msgSend_imageScrollView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar1,local_60);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_image(uVar2,local_60);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_size(uVar3,local_60);
  _objc_msgSend_updateImageLayoutWithOrientation_previousImageSize_
            (uVar4,in_d1,param_1,local_60,param_3);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

