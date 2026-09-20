// FUN_007e28c4 @ 007e28c4

void FUN_007e28c4(void)

{
  char *pcVar1;
  
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_007e290c,&DAT_028ccea8);
  return;
}

