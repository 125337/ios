// initWithBrowser: @0x893b0

/* Function Stack Size: 0x18 bytes */

ID WCMYBIBScreenRotationHandler::initWithBrowser_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
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
  local_30 = &objc::class_t::WCMYBIBScreenRotationHandler;
  IVar1 = _objc_msgSendSuper2(&local_38,"init");
  local_18 = IVar1;
  _objc_storeStrong(&local_18);
  if (IVar1 != 0) {
    _objc_storeWeak(local_18 + 8,local_28);
    *(undefined1 *)(local_18 + 0x38) = 0;
    *(undefined8 *)(local_18 + 0x48) = 0x1a;
    *(undefined8 *)(local_18 + 0x50) = 0x3fd0000000000000;
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

