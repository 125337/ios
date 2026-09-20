// FUN_00100f54 @ 00100f54

undefined4 FUN_00100f54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_14 = 0;
  }
  else {
    lVar2 = local_20;
    _object_getClass();
    _class_getInstanceVariable(lVar2,param_2);
    lVar1 = local_20;
    if (lVar2 == 0) {
      local_14 = 0;
    }
    else {
      _ivar_getOffset();
      local_14 = *(undefined4 *)(lVar1 + lVar2);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

