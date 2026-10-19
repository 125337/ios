// respondsToTapTextlabel @0x80a84

/* Function Stack Size: 0x10 bytes */

void WCMYBIBLoadingView::respondsToTapTextlabel(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 local_38;
  
  _objc_msgSend_clickTextLabelBlock(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_clickTextLabelBlock(param_1,local_38);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  return;
}

