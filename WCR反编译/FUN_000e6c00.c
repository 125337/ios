// FUN_000e6c00 @ 000e6c00

byte FUN_000e6c00(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_11 = false;
  }
  else {
    lVar2 = local_20;
    _object_getClass();
    _class_getInstanceVariable(lVar2,param_2);
    lVar1 = local_20;
    if (lVar2 == 0) {
      local_11 = false;
    }
    else {
      _ivar_getOffset();
      local_11 = (*(byte *)(lVar1 + lVar2) & 1) != 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

