// FUN_0025d9a0 @ 0025d9a0

void FUN_0025d9a0(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "CEmoticonUploadMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_CreateUploadEvent__026a1108,FUN_0025e1b0,&DAT_028c9400);
  pcVar1 = "EmojiUploadInfoReq";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setExternXml__026a1110,FUN_0025e378,&DAT_028c9408);
  pcVar1 = "TextMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_triggerMagicEmojiAnimation__026a1118,FUN_0025e58c,&DAT_028c9410);
  pcVar1 = "EmoticonHalfScreenSendView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_calDetailViewHeight_026a1120,FUN_0025e6b4,&DAT_028c9418);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0025e794,&DAT_028c9420);
  _class_addMethod(pcVar1,PTR_s_WCRefine_ensureSaveToAlbumButton_026a1128,FUN_0025ea90);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onSaveEmoticonToAlbumFr_026a1130,FUN_0025f6ac);
  pcVar1 = "WCActionSheet";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showInView__0269d310,FUN_0025f8b0,&DAT_028c9428);
  _MSHookMessageEx(pcVar1,PTR_s_onDismissCompletelyWithClickedBu_026a1138,FUN_0025f93c,&DAT_028c9430
                  );
  pcVar1 = "WCActionSheetWithScanWXCode";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showInView__0269d310,FUN_0025fa30,&DAT_028c9438);
  pcVar1 = "WebviewJSEventHandler_saveImage";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isForbidForward_026a1140,FUN_0025fabc,&DAT_028c9440);
  _MSHookMessageEx(pcVar1,PTR_s_canShowActionSheetOnlyForQrCode_026a1148,FUN_0025fb38,&DAT_028c9448)
  ;
  _MSHookMessageEx(pcVar1,PTR_s_shouldAddSaveToAlbumButton_026a1150,FUN_0025fbb4,&DAT_028c9450);
  _MSHookMessageEx(pcVar1,PTR_s_shouldAddShareButton_026a1158,FUN_0025fc1c,&DAT_028c9458);
  _MSHookMessageEx(pcVar1,PTR_s_shouldAddFavButton_026a1160,FUN_0025fc84,&DAT_028c9460);
  _MSHookMessageEx(pcVar1,PTR_s_handleJSEvent_HandlerFacade_Extr_026a1168,FUN_0025fcec,&DAT_028c9468
                  );
  _MSHookMessageEx(pcVar1,PTR_s_actionSheet_clickedButtonAtIndex_026a1170,FUN_00260350,&DAT_028c9470
                  );
  _class_addMethod(pcVar1,PTR_s_WCRefine_sendAsEmoticonWithImage_026a1178,FUN_00260434);
  _class_addMethod(pcVar1,PTR_s_WCRefine_addAsEmoticonWithImageD_026a1180,FUN_002606f8);
  _class_addMethod(pcVar1,PTR_s_WCRefine_addToLocalRepositoryWit_026a1188,FUN_002609bc);
  _MSHookMessageEx(pcVar1,PTR_s_scanImageBySnapLocation_026a1190,FUN_00260a88,&DAT_028c9478);
  pcVar1 = "MMWebViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_allowShareByImage_026a1198,FUN_00260d74,&DAT_028c9480);
  _MSHookMessageEx(pcVar1,PTR_s_allowFayByImage_026a11a0,FUN_00260ddc,&DAT_028c9488);
  _MSHookMessageEx(pcVar1,PTR_s_enableLongPressDetect_026a11a8,FUN_00260e44,&DAT_028c9490);
  _MSHookMessageEx(pcVar1,PTR_s_enableWebContentImageLongPressin_026a11b0,FUN_00260ea0,&DAT_028c9498
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onLongPressOnWebview__026a11b8,FUN_00260eec,&DAT_028c94a0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00261428,&DAT_028c94a8);
  _MSHookMessageEx(pcVar1,PTR_s_webViewDidFinishLoad_navigation__026a11c0,FUN_00261488,&DAT_028c94b0
                  );
  pcVar1 = "WXBaseWebViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onLongPressOnWebview__026a11b8,FUN_00261570,&DAT_028c94b8);
  _MSHookMessageEx(pcVar1,PTR_s_onDomReady_026a11c8,FUN_002616b4,&DAT_028c94c0);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_ShowMultiSelectMoreOperation__026a11d0,FUN_00261708,&DAT_028c94c8);
  _MSHookMessageEx(pcVar1,PTR_s_scrollActionSheet_didSelecteItem_026a11d8,FUN_00261794,&DAT_028c94d0
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

