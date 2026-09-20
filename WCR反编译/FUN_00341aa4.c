// FUN_00341aa4 @ 00341aa4

void FUN_00341aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (((local_18 != 0) && (lVar1 = local_20, _NSSelectorFromString(), lVar1 != 0)) &&
     (lVar2 = local_18, _class_getInstanceMethod(local_18,lVar1), lVar2 != 0)) {
    _MSHookMessageEx(local_18,lVar1,param_3,param_4);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

