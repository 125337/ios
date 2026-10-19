// setImage:withType: @0x9e720

/* Function Stack Size: 0x20 bytes */

void WCMYYAnimatedImageView::setImage_withType_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined8 local_78;
  ID local_70;
  class_t *local_68;
  ID local_60;
  class_t *local_58;
  ID local_50;
  class_t *local_48;
  ID local_40;
  class_t *local_38;
  unsigned_long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  _objc_msgSend_stopAnimating(local_18,local_78);
  if (*(long *)(local_18 + (long)_link) != 0) {
    _objc_msgSend_resetAnimated(local_18,local_78);
  }
  _objc_storeStrong(local_18 + (long)_curFrame,0);
  if (local_30 != 0) {
    if (local_30 == 1) {
      local_40 = local_18;
      local_38 = &objc::class_t::WCMYYAnimatedImageView;
      _objc_msgSendSuper2(&local_40,"setImage:",local_28);
    }
    else if (local_30 == 2) {
      local_50 = local_18;
      local_48 = &objc::class_t::WCMYYAnimatedImageView;
      _objc_msgSendSuper2(&local_50,"setHighlightedImage:",local_28);
    }
    else if (local_30 == 3) {
      local_60 = local_18;
      local_58 = &objc::class_t::WCMYYAnimatedImageView;
      _objc_msgSendSuper2(&local_60,"setAnimationImages:",local_28);
    }
    else if (local_30 == 4) {
      local_70 = local_18;
      local_68 = &objc::class_t::WCMYYAnimatedImageView;
      _objc_msgSendSuper2(&local_70,"setHighlightedAnimationImages:",local_28);
    }
  }
  _objc_msgSend_imageChanged(local_18,local_78);
  _objc_storeStrong(&local_28,0);
  return;
}

