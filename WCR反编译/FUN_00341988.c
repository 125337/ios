// FUN_00341988 @ 00341988

void FUN_00341988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_18 != 0) {
    lVar1 = local_18;
    _object_getClass();
    lVar2 = local_20;
    _NSSelectorFromString();
    if (((lVar1 != 0) && (lVar2 != 0)) &&
       (lVar3 = lVar1, _class_getInstanceMethod(lVar1,lVar2), lVar3 != 0)) {
      _MSHookMessageEx(lVar1,lVar2,param_3,param_4);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

