// touchesCancelled:withEvent: @0xaf394

/* Function Stack Size: 0x20 bytes */

void WCMTOCropScrollView::touchesCancelled_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 local_50;
  ID local_40;
  class_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_touchesCancelled(local_18,local_50);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_touchesCancelled(local_18,local_50);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  local_40 = local_18;
  local_38 = &objc::class_t::WCMTOCropScrollView;
  _objc_msgSendSuper2(&local_40,"touchesCancelled:withEvent:",local_28,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

