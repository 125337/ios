// FUN_0015d8d0 @ 0015d8d0

void FUN_0015d8d0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *local_68;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    else {
      local_68 = local_20;
    }
    _objc_setAssociatedObject(local_18,DAT_026df938,local_68,3);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

