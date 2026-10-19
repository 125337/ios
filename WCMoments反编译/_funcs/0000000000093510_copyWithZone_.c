// copyWithZone: @0x93510

/* Function Stack Size: 0x18 bytes */

ID _YYImageDecoderFrame::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  undefined8 local_58;
  ID local_40;
  class_t *local_38;
  undefined8 local_30;
  _NSZone *local_28;
  SEL local_20;
  ID local_18;
  
  local_38 = &objc::class_t::_YYImageDecoderFrame;
  local_40 = param_1;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  local_30 = _objc_msgSendSuper2(&local_40,"copyWithZone:",param_3);
  _objc_msgSend_setHasAlpha_(local_30,local_58,*(byte *)(local_18 + 0x50) & 1);
  _objc_msgSend_setIsFullSize_(local_30,local_58,*(byte *)(local_18 + 0x51) & 1);
  _objc_msgSend_setBlendFromIndex_(local_30,local_58,*(undefined8 *)(local_18 + 0x58));
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_storeStrong(&local_30,0);
  return IVar1;
}

