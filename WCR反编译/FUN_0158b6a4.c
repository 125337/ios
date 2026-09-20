// FUN_0158b6a4 @ 0158b6a4

void FUN_0158b6a4(undefined8 param_1,long param_2,undefined8 param_3)

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
    FUN_0158c4f4();
    if (lVar1 != 0) {
      _object_setIvarWithStrongDefault(local_18,lVar1,local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

