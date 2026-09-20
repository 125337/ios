// FUN_017b57cc @ 017b57cc

long FUN_017b57cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_68;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  _object_getClass();
  _class_getInstanceVariable(lVar1,param_2);
  local_68 = local_18;
  if (lVar1 == 0) {
    local_68 = 0;
  }
  else {
    _ivar_getOffset();
    local_68 = local_68 + lVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_68;
}

