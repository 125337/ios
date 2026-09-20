// FUN_0158b778 @ 0158b778

void FUN_0158b778(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 != 0) && (param_2 != 0)) {
    lVar1 = local_18;
    _object_getClass();
    FUN_0158c4f4();
    if (lVar1 != 0) {
      _ivar_getOffset();
      *(bool *)(local_18 + lVar1) = (param_3 & 1) != 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

