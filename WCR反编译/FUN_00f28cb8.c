// FUN_00f28cb8 @ 00f28cb8

void FUN_00f28cb8(byte param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_other_dnd_plus_on;
  if ((param_1 & 1) == 0) {
    pcVar1 = &cf_other_dnd_plus_off;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

