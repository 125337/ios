// _WCMYBIBTopController @0x834a0

void _WCMYBIBTopController(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _WCMYBIBNormalWindow();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _WCMYBIBTopControllerByWindow();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

