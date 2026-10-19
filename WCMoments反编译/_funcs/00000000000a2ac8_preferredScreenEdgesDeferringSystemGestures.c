// preferredScreenEdgesDeferringSystemGestures @0xa2ac8

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
WCMTOCropViewController::preferredScreenEdgesDeferringSystemGestures(ID param_1,SEL param_2)

{
  long lVar1;
  ID local_38;
  class_t *local_30;
  SEL local_28;
  ID local_20;
  unsigned_long_long local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_msgSend_navigationController(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == 0) {
    local_18 = 0xf;
  }
  else {
    local_38 = local_20;
    local_30 = &objc::class_t::WCMTOCropViewController;
    local_18 = _objc_msgSendSuper2(&local_38,"preferredScreenEdgesDeferringSystemGestures");
  }
  return local_18;
}

