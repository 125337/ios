// dealloc @0x62bcc

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::dealloc(ID param_1,SEL param_2)

{
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_setHiddenProjectiveView_(param_1,param_2,0);
  _objc_msgSend_showStatusBar(local_18,local_38);
  local_30 = local_18;
  local_28 = &objc::class_t::WCMYBImageBrowser;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

