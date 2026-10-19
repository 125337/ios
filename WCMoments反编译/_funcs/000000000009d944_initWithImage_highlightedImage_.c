// initWithImage:highlightedImage: @0x9d944

/* Function Stack Size: 0x20 bytes */

ID WCMYYAnimatedImageView::initWithImage_highlightedImage_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 in_d1;
  undefined8 local_a8;
  undefined8 local_50;
  undefined8 uStack_48;
  ID local_40;
  class_t *local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = 0;
  local_38 = &objc::class_t::WCMYYAnimatedImageView;
  local_18 = _objc_msgSendSuper2(&local_40,"init");
  _objc_storeStrong(&local_18);
  _objc_storeStrong(local_18 + (long)_runloopMode,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0)
  ;
  *(undefined1 *)(local_18 + (long)_autoPlayAnimatedImage) = 1;
  if (local_28 == 0) {
    local_50 = _objc_msgSend_size(local_30,local_a8);
    uStack_48 = in_d1;
  }
  else {
    local_50 = _objc_msgSend_size(local_28,local_a8);
    uStack_48 = in_d1;
  }
  _objc_msgSend_setFrame_
            (*(undefined8 *)PTR__CGPointZero_00110850,*(undefined8 *)(PTR__CGPointZero_00110850 + 8)
             ,local_50,uStack_48,local_18,local_a8);
  _objc_msgSend_setImage_(local_18,local_a8,local_28);
  _objc_msgSend_setHighlightedImage_(local_18,local_a8,local_30);
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

