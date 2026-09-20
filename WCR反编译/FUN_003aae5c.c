// FUN_003aae5c @ 003aae5c

void FUN_003aae5c(long param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_e_WMR;
  if (param_1 != 0) {
    pcVar1 = &cf__g_WMR;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

