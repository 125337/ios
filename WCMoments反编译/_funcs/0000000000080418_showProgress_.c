// showProgress: @0x80418

/* Function Stack Size: 0x18 bytes */

void WCMYBIBLoadingView::showProgress_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  _objc_msgSend_setUserInteractionEnabled_(param_1,param_2,0);
  *(undefined8 *)(param_1 + (long)_type) = 0;
  _objc_msgSend_drawView(param_1,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_38,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_textLabel(param_1,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_38,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_imageView(param_1,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_38,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_stopImageViewAnimation(param_1,local_38);
  _objc_msgSend_drawView(param_1,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setProgress_(param_3,uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_drawView(param_1,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNeedsDisplay(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

