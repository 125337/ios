// initWithImage: @0x9d7f4

/* Function Stack Size: 0x18 bytes */

ID WCMYYAnimatedImageView::initWithImage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 local_a8;
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
  local_18 = _objc_msgSendSuper2(&local_38,"init");
  _objc_storeStrong(&local_18);
  _objc_storeStrong(local_18 + (long)_runloopMode,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0)
  ;
  *(undefined1 *)(local_18 + (long)_autoPlayAnimatedImage) = 1;
  uVar4 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
  uVar2 = *(undefined8 *)PTR__CGPointZero_00110850;
  uVar3 = _objc_msgSend_size(local_28,local_a8);
  _objc_msgSend_setFrame_(uVar2,uVar4,uVar3,in_d1,local_18,local_a8);
  _objc_msgSend_setImage_(local_18,local_a8,local_28);
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

