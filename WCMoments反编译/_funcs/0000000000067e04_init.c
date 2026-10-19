// init @0x67e04

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageLayout::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMYBIBImageLayout;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = _objc_msgSendSuper2(&local_30,"init");
  _objc_storeStrong(&local_18);
  if (local_18 != 0) {
    *(undefined8 *)(local_18 + 8) = 1;
    *(undefined8 *)(local_18 + 0x10) = 0;
    *(undefined8 *)(local_18 + 0x20) = 0x3ff8000000000000;
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

