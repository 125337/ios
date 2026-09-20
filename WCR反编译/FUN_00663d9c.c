// FUN_00663d9c @ 00663d9c

void FUN_00663d9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 local_28;
  long local_20;
  char *local_18;
  
  local_18 = (char *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if ((local_18 != (char *)0x0) && (local_20 != 0)) {
    pcVar1 = local_18;
    _object_getClass();
    FUN_00655f20(pcVar1,local_20);
    if ((pcVar1 != (char *)0x0) &&
       ((pcVar2 = pcVar1, _ivar_getTypeEncoding(), pcVar2 != (char *)0x0 && (*pcVar2 == '@')))) {
      _object_setIvar(0,local_18,pcVar1,local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

