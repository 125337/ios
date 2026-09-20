// FUN_00241fdc @ 00241fdc

void FUN_00241fdc(void)

{
  char *pcVar1;
  
  pcVar1 = "EcsEcInitService";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_handleResp__026a0d58,FUN_00242024,&DAT_028c9350);
  return;
}

