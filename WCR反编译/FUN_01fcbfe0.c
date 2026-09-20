// FUN_01fcbfe0 @ 01fcbfe0

void FUN_01fcbfe0(undefined8 param_1)

{
  void *pvVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_01fcb534();
  if (local_18 != 0) {
    pvVar1 = _dispatch_get_specific(DAT_028c6af0);
    if (pvVar1 == (void *)0x0) {
      _dispatch_sync(DAT_028e4918,local_18);
    }
    else {
      (**(code **)(local_18 + 0x10))();
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

