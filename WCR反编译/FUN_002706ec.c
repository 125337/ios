// FUN_002706ec @ 002706ec

void FUN_002706ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if ((local_18 != 0) && (local_20 != 0)) {
    lVar1 = local_18;
    _object_getClass();
    _class_getInstanceVariable(lVar1,local_20);
    if (lVar1 != 0) {
      _object_setIvar(local_18,lVar1,local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

