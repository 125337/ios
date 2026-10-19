// supportedOfOrientation: @0x897f4

/* Function Stack Size: 0x18 bytes */

bool WCMYBIBScreenRotationHandler::supportedOfOrientation_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar2 = _WCMYBIBValidDeviceOrientation(param_3);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    _objc_msgSend_set(&_OBJC_CLASS___NSMutableSet,local_40);
    local_38 = _objc_retainAutoreleasedReturnValue();
    if (((uint)*(undefined8 *)(local_20 + 0x48) >> 1 & 1) != 0) {
      _objc_msgSend_addObject_
                (local_38,local_40,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fe78);
    }
    if (((uint)*(undefined8 *)(local_20 + 0x48) >> 2 & 1) != 0) {
      _objc_msgSend_addObject_
                (local_38,local_40,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fe90);
    }
    if (((uint)*(undefined8 *)(local_20 + 0x48) >> 3 & 1) != 0) {
      _objc_msgSend_addObject_
                (local_38,local_40,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fea8);
    }
    if (((uint)*(undefined8 *)(local_20 + 0x48) >> 4 & 1) != 0) {
      _objc_msgSend_addObject_
                (local_38,local_40,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fec0);
    }
    uVar1 = local_38;
    _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_40,local_30);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_11 = _objc_msgSend_containsObject_(uVar1,local_40);
    local_11 = local_11 & 1;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_38,0);
  }
  return local_11 & 1;
}

