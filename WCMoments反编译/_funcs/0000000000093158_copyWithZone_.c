// copyWithZone: @0x93158

/* Function Stack Size: 0x18 bytes */

ID WCMYYImageFrame::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_50;
  undefined8 local_30;
  _NSZone *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_opt_class(param_1);
  local_30 = _objc_opt_new();
  _objc_msgSend_setIndex_(local_30,local_50,*(undefined8 *)(local_18 + 8));
  _objc_msgSend_setWidth_(local_30,local_50,*(undefined8 *)(local_18 + 0x10));
  _objc_msgSend_setHeight_(local_30,local_50,*(undefined8 *)(local_18 + 0x18));
  _objc_msgSend_setOffsetX_(local_30,local_50,*(undefined8 *)(local_18 + 0x20));
  _objc_msgSend_setOffsetY_(local_30,local_50,*(undefined8 *)(local_18 + 0x28));
  _objc_msgSend_setDuration_(*(undefined8 *)(local_18 + 0x30),local_30,local_50);
  _objc_msgSend_setDispose_(local_30,local_50,*(undefined8 *)(local_18 + 0x38));
  _objc_msgSend_setBlend_(local_30,local_50,*(undefined8 *)(local_18 + 0x40));
  uVar1 = _objc_msgSend_copy(*(undefined8 *)(local_18 + 0x48),local_50);
  _objc_msgSend_setImage_(local_30,local_50);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_storeStrong(&local_30,0);
  return IVar2;
}

