// initWithCoder: @0xa0a5c

/* Function Stack Size: 0x18 bytes */

ID WCMYYAnimatedImageView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  undefined8 local_50;
  long local_48;
  long local_40;
  ID local_38;
  class_t *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_18 = 0;
  local_30 = &objc::class_t::WCMYYAnimatedImageView;
  local_18 = _objc_msgSendSuper2(&local_38,"initWithCoder:",local_28);
  _objc_storeStrong(&local_18);
  _objc_msgSend_decodeObjectForKey_(local_28,local_50,&cf_runloopMode);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(local_18 + (long)_runloopMode);
  *(undefined8 *)(local_18 + (long)_runloopMode) = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  lVar4 = _objc_msgSend_length(*(undefined8 *)(local_18 + (long)_runloopMode),local_50);
  if (lVar4 == 0) {
    _objc_storeStrong(local_18 + (long)_runloopMode,
                      *(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);
  }
  uVar5 = _objc_msgSend_containsValueForKey_(local_28,local_50,&cf_autoPlayAnimatedImage);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(local_18 + (long)_autoPlayAnimatedImage) = 1;
  }
  else {
    uVar1 = _objc_msgSend_decodeBoolForKey_(local_28,local_50,&cf_autoPlayAnimatedImage);
    *(undefined1 *)(local_18 + (long)_autoPlayAnimatedImage) = uVar1;
  }
  _objc_msgSend_decodeObjectForKey_(local_28,local_50,&cf_WCMYYAnimatedImage);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_decodeObjectForKey_(local_28,local_50,&cf_WCMYYHighlightedAnimatedImage);
  local_48 = _objc_retainAutoreleasedReturnValue();
  if (local_40 != 0) {
    _objc_msgSend_setImage_(local_18,local_50,local_40);
    _objc_msgSend_setImage_withType_(local_18,local_50,local_40,1);
  }
  if (local_48 != 0) {
    _objc_msgSend_setHighlightedImage_(local_18,local_50,local_48);
    _objc_msgSend_setImage_withType_(local_18,local_50,local_48,2);
  }
  IVar6 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar6;
}

