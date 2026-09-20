// FUN_00f28ce8 @ 00f28ce8

void FUN_00f28ce8(byte param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_sQRpb;
  if ((param_1 & 1) == 0) {
    pcVar1 = &cf___;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

