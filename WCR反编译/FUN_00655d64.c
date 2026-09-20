// FUN_00655d64 @ 00655d64

void FUN_00655d64(undefined8 param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (char *)0x0) || (param_2 == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    _object_getClass();
    FUN_00655f20(pcVar1,param_2);
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = pcVar1;
      _ivar_getTypeEncoding();
      if ((pcVar2 == (char *)0x0) || (*pcVar2 != '@')) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar2 = local_20;
        _object_getIvar(0,local_20,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

