// FUN_014d63c8 @ 014d63c8

void FUN_014d63c8(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == (char *)0x0)) {
    local_18 = 0;
  }
  else {
    pcVar1 = param_2;
    _ivar_getTypeEncoding();
    if ((pcVar1 == (char *)0x0) || (*pcVar1 != '@')) {
      local_18 = 0;
    }
    else {
      lVar2 = local_20;
      _object_getIvar(0,local_20,param_2);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

