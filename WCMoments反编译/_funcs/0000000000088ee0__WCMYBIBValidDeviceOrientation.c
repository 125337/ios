// _WCMYBIBValidDeviceOrientation @0x88ee0

undefined4 _WCMYBIBValidDeviceOrientation(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYBIBValidDeviceOrientation_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = _WCMYBIBValidDeviceOrientation_validSet;
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_48,param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_containsObject_(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  return uVar2;
}

