// show @0x80590

/* Function Stack Size: 0x10 bytes */

void WCMYBIBLoadingView::show(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_setUserInteractionEnabled_(param_1,param_2,0);
  *(undefined8 *)(param_1 + (long)_type) = 1;
  _objc_msgSend_drawView(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_30,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_textLabel(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_30,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_imageView(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_30,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_startImageViewAnimation(param_1,local_30);
  _objc_msgSend_drawView(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNeedsDisplay(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

