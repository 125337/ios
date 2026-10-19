// didMoveToWindow @0xa037c

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::didMoveToWindow(ID param_1,SEL param_2)

{
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMYYAnimatedImageView;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"didMoveToWindow");
  _objc_msgSend_didMoved(local_18,local_38);
  return;
}

