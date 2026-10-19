// initWithFrame: @0x62c2c

/* Function Stack Size: 0x30 bytes */

ID WCMYBImageBrowser::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_70;
  undefined8 local_58;
  ID local_50;
  class_t *local_48;
  SEL local_40;
  long local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_18 = param_3.field1_0x10.field1_0x8;
  local_20 = param_3.field1_0x10.field0_0x0;
  local_28 = param_3.field0_0x0.field1_0x8;
  local_30 = param_3.field0_0x0.field0_0x0;
  local_38 = 0;
  local_48 = &objc::class_t::WCMYBImageBrowser;
  local_50 = param_1;
  local_40 = param_2;
  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");
  _objc_storeStrong(&local_38);
  if (local_38 != 0) {
    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_70);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_38,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);
    local_58 = _objc_msgSend_initWithTarget_action_(uVar1,local_70,local_38,"respondsToLongPress:");
    _objc_msgSend_addGestureRecognizer_(local_38,local_70,local_58);
    _objc_msgSend_initValue(local_38,local_70);
    _objc_storeStrong(&local_58,0);
  }
  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38,0);
  return IVar2;
}

