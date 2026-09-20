// FUN_0054f6cc @ 0054f6cc

void FUN_0054f6cc(byte param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_include_non_friends_v2;
  if ((param_1 & 1) == 0) {
    pcVar1 = &cf_friends_only_v2;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

