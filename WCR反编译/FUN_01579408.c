// FUN_01579408 @ 01579408

byte FUN_01579408(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar1 = &cf_CameraScanViewController;
  _NSClassFromString();
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    local_20 = pcVar1;
    _objc_alloc_init();
    local_11 = pcVar1 != (cfstringStruct *)0x0;
    local_28 = pcVar1;
    if ((bool)local_11) {
      FUN_01556938(pcVar1);
    }
    _objc_storeStrong(&local_28,0);
  }
  return local_11 & 1;
}

