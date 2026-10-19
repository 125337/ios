// showText:click: @0x808a0

/* Function Stack Size: 0x20 bytes */

void WCMYBIBLoadingView::showText_click_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_setUserInteractionEnabled_(local_30 != 0,local_18,local_58,local_30 != 0);
  *(undefined8 *)(local_18 + (long)_type) = 2;
  _objc_msgSend_drawView(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_58,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_textLabel(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_58,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_imageView(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_58,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_stopImageViewAnimation(local_18,local_58);
  uVar1 = local_28;
  _objc_msgSend_textLabel(local_18,local_58);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(uVar2,local_58,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setClickTextLabelBlock_(local_18,local_58,local_30);
  _objc_msgSend_drawView(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNeedsDisplay(uVar1,local_58);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

