// FUN_000fd06c @ 000fd06c

void FUN_000fd06c(long param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_wcr_chat_position_restore_tip;
  if (param_1 != 1) {
    pcVar1 = &cf_wcr_chat_position_bottom_tip;
  }
  _objc_retainAutoreleaseReturnValue(pcVar1);
  return;
}

