// setHighlighted: @0x9e434

/* Function Stack Size: 0x14 bytes */

void WCMYYAnimatedImageView::setHighlighted_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 local_40;
  ID local_38;
  class_t *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = &objc::class_t::WCMYYAnimatedImageView;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"setHighlighted:",param_3 & 1);
  if (*(long *)(local_18 + (long)_link) != 0) {
    _objc_msgSend_resetAnimated(local_18,local_40);
  }
  _objc_msgSend_imageChanged(local_18,local_40);
  return;
}

