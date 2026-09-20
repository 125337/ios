// FUN_00806740 @ 00806740

void FUN_00806740(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "UIApplication";
  _objc_getClass();
  pcVar2 = pcVar1;
  _object_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_load_026a8a88,FUN_008067b4,&DAT_028ccf88);
  _MSHookMessageEx(pcVar1,PTR_s_sendEvent__026a67f8,FUN_008067f8,&DAT_028ccf90);
  return;
}

