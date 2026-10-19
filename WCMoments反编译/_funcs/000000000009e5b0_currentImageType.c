// currentImageType @0x9e5b0

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYYAnimatedImageView::currentImageType(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_28;
  
  local_28 = 0;
  uVar1 = _objc_msgSend_isHighlighted(param_1);
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_highlightedAnimationImages(param_1,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar3 = _objc_msgSend_count(uVar2,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if (lVar3 == 0) {
      _objc_msgSend_highlightedImage(param_1,local_40);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      if (lVar3 != 0) {
        local_28 = 2;
      }
    }
    else {
      local_28 = 4;
    }
  }
  if (local_28 == 0) {
    _objc_msgSend_animationImages(param_1,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar3 = _objc_msgSend_count(uVar2,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if (lVar3 == 0) {
      _objc_msgSend_image(param_1,local_40);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      if (lVar3 != 0) {
        local_28 = 1;
      }
    }
    else {
      local_28 = 3;
    }
  }
  return local_28;
}

