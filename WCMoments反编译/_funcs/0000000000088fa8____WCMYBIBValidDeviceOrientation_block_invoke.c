// ___WCMYBIBValidDeviceOrientation_block_invoke @0x88fa8

void ___WCMYBIBValidDeviceOrientation_block_invoke(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend_setWithObjects_
            (&_OBJC_CLASS___NSSet,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fe78);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _WCMYBIBValidDeviceOrientation_validSet;
  _WCMYBIBValidDeviceOrientation_validSet = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

