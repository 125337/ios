// FUN_006c0d28 @ 006c0d28

void FUN_006c0d28(void)

{
  char *pcVar1;
  
  pcVar1 = "CommonMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_handleTapForReferMsg__026a6908,FUN_006c0dc0,&DAT_028cc1f8);
  _MSHookMessageEx(pcVar1,PTR_s_handleTapReferMessage_026a6910,FUN_006c0fdc,&DAT_028cc200);
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onTapMsgReplyView__026a6918,FUN_006c1110,&DAT_028cc208);
  return;
}

