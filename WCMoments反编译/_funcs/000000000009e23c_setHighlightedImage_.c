// setHighlightedImage: @0x9e23c

/* Function Stack Size: 0x18 bytes */

void WCMYYAnimatedImageView::setHighlightedImage_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_highlightedImage(local_18,local_48);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 - lVar1 != 0) {
    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

