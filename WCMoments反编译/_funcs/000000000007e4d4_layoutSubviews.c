// layoutSubviews @0x7e4d4

/* Function Stack Size: 0x10 bytes */

void WCMYBIBToastView::layoutSubviews(ID param_1,SEL param_2)

{
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMYBIBToastView;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  _objc_msgSend_startAnimation(local_18,local_38);
  return;
}

