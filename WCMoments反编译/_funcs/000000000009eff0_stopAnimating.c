// stopAnimating @0x9eff0

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::stopAnimating(ID param_1,SEL param_2)

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
  _objc_msgSendSuper2(&local_30,"stopAnimating");
  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_18 + (long)_requestQueue),local_38);
  _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_38,1);
  _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_38,0);
  return;
}

