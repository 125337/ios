// FUN_002dda08 @ 002dda08

void FUN_002dda08(void)

{
  char *pcVar1;
  
  pcVar1 = "FlutterFoundationCrashPlugin";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_handleMethodCall_result__026a1c48,FUN_002dda70,&DAT_028c9840);
  _MSHookMessageEx(pcVar1,PTR_s_onStackReportCompleted__026a1c50,FUN_002de04c,&DAT_028c9848);
  return;
}

