// FUN_0067a588 @ 0067a588

void FUN_0067a588(void)

{
  char *pcVar1;
  
  pcVar1 = "SendPatMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_sendPat__026a63a8,FUN_0067a5d0,&DAT_028cbce0);
  return;
}

