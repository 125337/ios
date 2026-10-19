// encodeWithCoder: @0xa0cc0

/* Function Stack Size: 0x18 bytes */

void WCMYYAnimatedImageView::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_70;
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
  local_30 = &objc::class_t::WCMYYAnimatedImageView;
  _objc_msgSendSuper2(&local_38,"encodeWithCoder:",local_28);
  _objc_msgSend_encodeObject_forKey_
            (local_28,local_70,*(undefined8 *)(local_18 + (long)_runloopMode),&cf_runloopMode);
  _objc_msgSend_encodeBool_forKey_
            (local_28,local_70,*(byte *)(local_18 + (long)_autoPlayAnimatedImage) & 1,
             &cf_autoPlayAnimatedImage);
  _objc_msgSend_image(local_18,local_70);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  bVar2 = _objc_msgSend_conformsToProtocol_(uVar3,local_70,&objc::protocol_t::WCMYYAnimatedImage);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  bVar1 = false;
  if ((bVar2 & 1) != 0) {
    _objc_msgSend_image(local_18,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_animatedImageFrameCount(uVar3,local_70);
    bVar1 = 1 < uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  uVar3 = local_28;
  if (bVar1) {
    _objc_msgSend_image(local_18,local_70);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_encodeObject_forKey_(uVar3,local_70,uVar5,&cf_WCMYYAnimatedImage);
    (*(code *)PTR__objc_release_00110458)(uVar5);
  }
  _objc_msgSend_highlightedImage(local_18,local_70);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  bVar2 = _objc_msgSend_conformsToProtocol_(uVar3,local_70,&objc::protocol_t::WCMYYAnimatedImage);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  bVar1 = false;
  if ((bVar2 & 1) != 0) {
    _objc_msgSend_highlightedImage(local_18,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_animatedImageFrameCount(uVar3,local_70);
    bVar1 = 1 < uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  uVar3 = local_28;
  if (bVar1) {
    _objc_msgSend_highlightedImage(local_18,local_70);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_encodeObject_forKey_(uVar3,local_70,uVar5,&cf_WCMYYHighlightedAnimatedImage);
    (*(code *)PTR__objc_release_00110458)(uVar5);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

