// dealloc @0x936a4

/* Function Stack Size: 0x10 bytes */

void WCMYYImageDecoder::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x50) != 0) {
    _CFRelease(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(local_18 + 0x58) != 0) {
    _wcm_yy_png_info_release(*(undefined8 *)(local_18 + 0x58));
  }
  if (*(long *)(local_18 + 0x88) != 0) {
    _CFRelease(*(undefined8 *)(local_18 + 0x88));
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(local_18 + 8));
  local_30 = local_18;
  local_28 = &objc::class_t::WCMYYImageDecoder;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

