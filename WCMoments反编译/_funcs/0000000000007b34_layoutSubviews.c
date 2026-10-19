// layoutSubviews @0x7b34

/* Function Stack Size: 0x10 bytes */

void WCMQQRefreshControl::layoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMQQRefreshControl;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  _objc_msgSend_positionIndicator(local_18,local_50);
  _objc_msgSend_layoutIndicatorContent(local_18,local_50);
  _objc_msgSend_qqIndicatorView(local_18,local_50);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_superview(uVar1,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_qqIndicatorView(local_18,local_50);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bringSubviewToFront_(uVar2,local_50);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

