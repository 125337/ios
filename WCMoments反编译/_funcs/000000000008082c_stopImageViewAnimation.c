// stopImageViewAnimation @0x8082c

/* Function Stack Size: 0x10 bytes */

void WCMYBIBLoadingView::stopImageViewAnimation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_imageView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAllAnimations(uVar2,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

