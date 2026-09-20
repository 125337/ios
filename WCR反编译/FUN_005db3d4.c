// FUN_005db3d4 @ 005db3d4

void FUN_005db3d4(void)

{
  char *pcVar1;
  
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_005db41c,&DAT_028cb7d8);
  return;
}

