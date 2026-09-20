// FUN_00656eac @ 00656eac

void FUN_00656eac(long param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_quote;
  if (param_1 != 1) {
    pcVar1 = &cf_file;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

