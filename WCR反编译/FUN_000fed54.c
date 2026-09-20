// FUN_000fed54 @ 000fed54

undefined8 FUN_000fed54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_18 = 0;
  }
  else {
    lVar2 = local_20;
    _object_getClass();
    _class_getInstanceVariable(lVar2,param_2);
    lVar1 = local_20;
    if (lVar2 == 0) {
      local_18 = 0;
    }
    else {
      _ivar_getOffset();
      local_18 = *(undefined8 *)(lVar1 + lVar2);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

