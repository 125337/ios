// FUN_0026d368 @ 0026d368

void FUN_0026d368(void)

{
  char *pcVar1;
  
  pcVar1 = "AppFileMessageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_refreshStateWithInput__026a1488,FUN_0026d450,&DAT_028c9548);
  pcVar1 = "AppFileMessageCellContentView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_refreshState_026a1490,FUN_0026d578,&DAT_028c9550);
  _MSHookMessageEx(pcVar1,PTR_s_fileTransferTaskCompleted__026a1498,FUN_0026dd00,&DAT_028c9558);
  pcVar1 = "MsgFileBrowseItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_updateWidthMsg__026a14a0,FUN_0026ddc8,&DAT_028c9560);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0026dee0,&DAT_028c9568);
  return;
}

