// init @0x71044

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageData::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_40;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMYBIBImageData;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = _objc_msgSendSuper2(&local_30,"init");
  _objc_storeStrong(&local_18);
  if (local_18 != 0) {
    _objc_msgSend_initValue(local_18,local_40);
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

