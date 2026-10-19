// didMoved @0xa026c

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::didMoved(ID param_1,SEL param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_40;
  
  uVar2 = _objc_msgSend_autoPlayAnimatedImage(param_1);
  if ((uVar2 & 1) != 0) {
    _objc_msgSend_superview(param_1,local_40);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar3 != 0) {
      _objc_msgSend_window(param_1,local_40);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      (*(code *)PTR__objc_release_00110458)(lVar4);
    }
    (*(code *)PTR__objc_release_00110458)(lVar3);
    if (bVar1) {
      _objc_msgSend_startAnimating(param_1,local_40);
    }
    else {
      _objc_msgSend_stopAnimating(param_1,local_40);
    }
  }
  return;
}

