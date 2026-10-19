// displayLayer: @0x9ff54

/* Function Stack Size: 0x18 bytes */

void WCMYYAnimatedImageView::displayLayer_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(local_18 + (long)_curFrame) != 0) {
    uVar1 = _objc_msgSend_CGImage(*(undefined8 *)(local_18 + (long)_curFrame),local_30);
    _objc_msgSend_setContents_(local_28,local_30,uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

