// FUN_004d0fc8 @ 004d0fc8

void FUN_004d0fc8(void)

{
  char *pcVar1;
  
  pcVar1 = "MultiSelectController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showChooseMultiOrSingleView_para_026a4140,FUN_004d1108,&DAT_028cacb0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_actionSheet_clickedButtonAtIndex_026a1170,FUN_004d1228,&DAT_028cacb8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_sendMultiMsgToFriend__026a3948,FUN_004d1540,&DAT_028cacc0);
  _MSHookMessageEx(pcVar1,PTR_s_OnForwardMessageSend__026a3950,FUN_004d16ac,&DAT_028cacc8);
  _MSHookMessageEx(pcVar1,PTR_s_OnForwardMessageCancel__026a3958,FUN_004d1754,&DAT_028cacd0);
  pcVar1 = "WCActionSheet";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showInView__0269d310,FUN_004d17fc,&DAT_028cacd8);
  pcVar1 = "ForwardMsgUtil";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsg_ToContact_Scene_forwa_026a4148,FUN_004d190c,&DAT_028cace0
                  );
  return;
}

