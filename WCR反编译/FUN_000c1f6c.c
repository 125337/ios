// FUN_000c1f6c @ 000c1f6c

void FUN_000c1f6c(void)

{
  char *pcVar1;
  
  pcVar1 = "CommonMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onHeadImageClicked__0269e700,FUN_000c2018,&DAT_028c81b8);
  pcVar1 = "TextMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onHeadImageClicked__0269e700,FUN_000c22a8,&DAT_028c81c0);
  pcVar1 = "NewChatRoomMemberContainView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_openContactInfo__0269e708,FUN_000c2538,&DAT_028c81c8);
  return;
}

