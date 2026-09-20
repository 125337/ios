// FUN_00fc74cc @ 00fc74cc

void FUN_00fc74cc(undefined8 param_1)

{
  cfstringStruct **ppcVar1;
  cfstringStruct *local_40;
  long *local_28;
  undefined4 local_1c;
  cfstringStruct *local_18;
  
  ppcVar1 = &local_18;
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar1,param_1);
  if ((DAT_028e2ef4 & 1) == 0) {
    FUN_00fc6168();
    _objc_retainAutoreleasedReturnValue();
    local_28 = (long *)ppcVar1;
    if (ppcVar1 == (cfstringStruct **)0x0) {
      local_1c = 1;
    }
    else {
      _objc_storeWeak(&DAT_028e2ee8,ppcVar1);
      if (local_18 == (cfstringStruct *)0x0) {
        local_40 = &cf_already_visible;
      }
      else {
        local_40 = local_18;
      }
      FUN_00fc5bcc(local_28,local_40);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  else {
    local_1c = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

