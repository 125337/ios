// FUN_00334b14 @ 00334b14

void FUN_00334b14(void)

{
  char *pcVar1;
  
  pcVar1 = "RoomContactSelectForHalfScreenViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initChatRoomAllMemberView_026a2140,FUN_00334b8c,&DAT_028c9ec0);
  pcVar1 = "ChatRoomContactSelectForHalfScreenViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initData_0269ec58,FUN_00334c64,&DAT_028c9ec8);
  return;
}

