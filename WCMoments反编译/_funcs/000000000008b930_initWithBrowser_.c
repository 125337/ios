// initWithBrowser: @0x8b930

/* Function Stack Size: 0x18 bytes */

ID WCMYBIBDataMediator::initWithBrowser_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  local_30 = &objc::class_t::WCMYBIBDataMediator;
  IVar1 = _objc_msgSendSuper2(&local_38,"init");
  local_18 = IVar1;
  _objc_storeStrong(&local_18);
  if (IVar1 != 0) {
    _objc_storeWeak(local_18 + 8,local_28);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCache);
    uVar3 = *(undefined8 *)(local_18 + 0x10);
    *(undefined8 *)(local_18 + 0x10) = uVar2;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

