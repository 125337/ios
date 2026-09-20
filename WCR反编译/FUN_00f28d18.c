// FUN_00f28d18 @ 00f28d18

void FUN_00f28d18(byte param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_icons_filled_mike_off;
  if ((param_1 & 1) == 0) {
    pcVar1 = &cf_icons_filled_mike;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

