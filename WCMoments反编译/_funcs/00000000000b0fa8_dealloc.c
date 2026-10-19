// dealloc @0xb0fa8

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_invalidate(*(undefined8 *)(param_1 + (long)_resetTimer));
  local_30 = local_18;
  local_28 = &objc::class_t::WCMTOCropView;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

