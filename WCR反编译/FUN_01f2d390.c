// FUN_01f2d390 @ 01f2d390

void FUN_01f2d390(undefined8 param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf__;
  if ((param_2 & 1) == 0) {
    pcVar1 = &cf__g_T_u;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

