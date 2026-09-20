// FUN_003e8704 @ 003e8704

bool FUN_003e8704(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca480 == (cfstringStruct *)0x0) {
    pcVar2 = &cf_UIInputSetHostView;
    _NSClassFromString();
    DAT_028ca480 = pcVar2;
  }
  bVar1 = false;
  if (local_18 != (cfstringStruct *)0x0) {
    bVar1 = false;
    if (DAT_028ca480 != (cfstringStruct *)0x0) {
      pcVar2 = local_18;
      _object_getClass();
      bVar1 = pcVar2 == DAT_028ca480;
    }
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

