// FUN_005dbf5c @ 005dbf5c

void FUN_005dbf5c(void)

{
  char *pcVar1;
  
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setM_nsContent__0269ef88,FUN_005dbfa4,&DAT_028cb7f0);
  return;
}

