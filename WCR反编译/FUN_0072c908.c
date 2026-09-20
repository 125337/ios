// FUN_0072c908 @ 0072c908

void FUN_0072c908(void)

{
  char *pcVar1;
  
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_UpdateMsgSource_0269d440,FUN_0072cb60,&DAT_028cc408);
  _MSHookMessageEx(pcVar1,PTR_s_IsMsgBubbleForbidAll_026a7a68,FUN_0072cc2c,&DAT_028cc410);
  _MSHookMessageEx(pcVar1,PTR_s_IsMsgBubbleForbidForward_026a7a70,FUN_0072cdf8,&DAT_028cc418);
  pcVar1 = "CMessageDB";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap_withTimeFixed__026a7a78,FUN_0072cfe0,&DAT_028cc420);
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_0072d0b8,&DAT_028cc428);
  _MSHookMessageEx(pcVar1,PTR_s_AddAppMsg_MsgWrap_Data_Scene__026a6418,FUN_0072d17c,&DAT_028cc430);
  pcVar1 = "CdnComMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_GetUploadImageBuffer_NoCommitCdn_026a7a80,FUN_0072d280,&DAT_028cc438
                  );
  pcVar1 = "ImageMessageUtils";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_genUploadMsgImgRequest_hitMd5_im_026a7a88,FUN_0072d338,&DAT_028cc440
                  );
  pcVar1 = "AppMsgSendStage";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getSendAppMsgRequest_026a7a90,FUN_0072d498,&DAT_028cc448);
  pcVar1 = "AudioSender";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addMessageToDB__026a7a98,FUN_0072d5cc,&DAT_028cc450);
  pcVar1 = "OpenUploadMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_CreateAppMsgWithMsgWrap__026a7aa0,FUN_0072d660,&DAT_028cc458);
  _MSHookMessageEx(pcVar1,PTR_s_StartUpload_MsgWrap_Scene__026a7aa8,FUN_0072d704,&DAT_028cc460);
  pcVar1 = "OpenUploadCDNMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_StartUpload_MsgWrap_Scene__026a7aa8,FUN_0072d7d8,&DAT_028cc468);
  return;
}

