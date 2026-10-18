// FUN_00090bec @0x90bec


void FUN_00090bec(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  char acStack_1070 [1024];

  char acStack_c70 [1024];

  char acStack_870 [1024];

  undefined4 local_470;

  undefined1 uStack_46c;

  undefined1 uStack_46b;

  undefined1 uStack_46a;

  undefined4 uStack_469;

  undefined4 uStack_465;

  undefined1 uStack_461;

  char *local_460;

  char *local_458;

  char *local_450;

  char *local_448;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("MMUILongPressImageView");

  local_470 = 0x3161d8;

  uStack_46c = 0;

  uStack_46b = 0;

  uStack_46a = 0;

  uStack_469 = 0x3161da00;

  uStack_465 = 0;

  uStack_461 = 0;

  local_460 = "&";

  local_458 = "";

  local_450 = "N";

  local_448 = "";

  _class_addProperty(uVar1,"coverImageView",&local_470,3);

  _snprintf(acStack_870,0x400,"%s@:");

  _class_addMethod(uVar1,"coverImageView",FUN_0007e400,acStack_870);

  _snprintf(acStack_870,0x400,"v@:%s");

  _class_addMethod(uVar1,"setCoverImageView:",FUN_0007e424,acStack_870);

  local_470 = 0x3161d8;

  uStack_46c = 0;

  uStack_46b = 0;

  uStack_46a = 0;

  uStack_469 = 0x3161f600;

  uStack_465 = 0;

  uStack_461 = 0;

  local_460 = "&";

  local_458 = "";

  local_450 = "N";

  local_448 = "";

  _class_addProperty(uVar1,"notificationObserver",&local_470,3);

  _snprintf(acStack_c70,0x400,"%s@:");

  _class_addMethod(uVar1,"notificationObserver",FUN_0007e434,acStack_c70);

  _snprintf(acStack_c70,0x400,"v@:%s");

  _class_addMethod(uVar1,"setNotificationObserver:",FUN_0007e458,acStack_c70);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00091c50,&DAT_003e7780);

  _MSHookMessageEx(uVar1,"didMoveToSuperview",FUN_000921e8,&DAT_003e7788);

  local_470 = 0x3a4042;

  _class_addMethod(uVar1,"isInChatPage",FUN_00092258,&local_470);

  local_470 = 0x3a4042;

  _class_addMethod(uVar1,"isInBannerNotify",FUN_00092310,&local_470);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"setupGlobalCoverForNonChat",FUN_000923d0,&local_470);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"setupCoverImageView",FUN_00092c6c,&local_470);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"updateCoverImageViewLayout",FUN_00093690,&local_470);

  local_470 = 0x3a4040;

  _class_addMethod(uVar1,"getCurrentCoverImagePath",FUN_00093a74,&local_470);

  local_470 = 0x3a4040;

  _class_addMethod(uVar1,"getCoverResDirectory",thunk_FUN_000a1efc,&local_470);

  local_470 = 0x3a4040;

  _class_addMethod(uVar1,"getGlobalCoverDirectory",thunk_FUN_000a1c2c,&local_470);

  local_470 = 0x3a4040;

  _class_addMethod(uVar1,"getSelfWxId",thunk_FUN_000a1fe0,&local_470);

  local_470 = 0x3a4042;

  _class_addMethod(uVar1,"isSelfAvatar",FUN_00093cc0,&local_470);

  local_470 = 0x3a4040;

  _class_addMethod(uVar1,"getCurrentPersonalCoverImagePath",FUN_00093f74,&local_470);

  local_470 = 0x3a4040;

  _class_addMethod(uVar1,"getCurrentPeerCoverImagePath",FUN_000940f8,&local_470);

  local_470 = 0x3a4040;

  _class_addMethod(uVar1,"getAllCoverImages",FUN_0009427c,&local_470);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"addNotificationObserver",FUN_000943e0,&local_470);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"removeNotificationObserver",FUN_00094538,&local_470);

  local_470 = 0x3a4064;

  _class_addMethod(uVar1,"getCoverImageDisplaySize",FUN_000945f8,&local_470);

  local_470 = 0x403a4040;

  uStack_46c = 0x7b;

  uStack_46b = 0x43;

  uStack_46a = 0x47;

  uStack_469 = 0x657a6953;

  uStack_465 = 0x7d64643d;

  uStack_461 = 0;

  _class_addMethod(uVar1,"resizeImageToSize:targetSize:",FUN_00094614,&local_470);

  local_470 = 0x403a4040;

  uStack_46c = 0;

  _class_addMethod(uVar1,"createAnimatedImageFromGIFData:",FUN_000946d0,&local_470);

  local_470 = 0x403a4040;

  uStack_46c = 0;

  _class_addMethod(uVar1,"createAnimatedImageFromWebPData:",FUN_00094a10,&local_470);

  _MSHookMessageEx(uVar1,"traitCollectionDidChange:",FUN_00094da0,&DAT_003e7790);

  uVar2 = _sel_registerName("dealloc");

  _MSHookMessageEx(uVar1,uVar2,FUN_000951dc,&DAT_003e7798);

  uVar1 = _objc_getClass("MMHeadImageView");

  local_470 = 0x3161d8;

  uStack_46c = 0;

  uStack_46b = 0;

  uStack_46a = 0;

  uStack_469 = 0x3161da00;

  uStack_465 = 0;

  uStack_461 = 0;

  local_460 = "&";

  local_458 = "";

  local_450 = "N";

  local_448 = "";

  _class_addProperty(uVar1,"coverImageView",&local_470,3);

  _snprintf(acStack_1070,0x400,"%s@:");

  _class_addMethod(uVar1,"coverImageView",FUN_0007e468,acStack_1070);

  _snprintf(acStack_1070,0x400,"v@:%s");

  _class_addMethod(uVar1,"setCoverImageView:",FUN_0007e48c,acStack_1070);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00095210,&DAT_003e77a0);

  _MSHookMessageEx(uVar1,"traitCollectionDidChange:",FUN_00095460,&DAT_003e77a8);

  uVar1 = _objc_getClass("CMessageMgr");

  _MSHookMessageEx(uVar1,"AddLocalMsg:MsgWrap:",FUN_00095524,&DAT_003e77b0);

  _MSHookMessageEx(uVar1,"AddMsg:MsgWrap:",FUN_000956b8,&DAT_003e77b8);

  _MSHookMessageEx(uVar1,"AsyncOnAddMsg:MsgWrap:",FUN_00096090,&DAT_003e77c0);

  uVar1 = _objc_getClass("AudioSender");

  _MSHookMessageEx(uVar1,"ResendVoiceMsg:MsgWrap:",FUN_000968fc,&DAT_003e77c8);

  uVar1 = _objc_getClass("CommonMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_00096b30,&DAT_003e77d0);

  _MSHookMessageEx(uVar1,"initHeadImageView",FUN_00096f0c,&DAT_003e77d8);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00097308,&DAT_003e77e0);

  uVar1 = _objc_getClass("WAAppPageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00097fa0,&DAT_003e77e8);

  uVar1 = _objc_getClass("AppUrlMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000981bc,&DAT_003e77f0);

  uVar1 = _objc_getClass("UITextView");

  _MSHookMessageEx(uVar1,"insertText:",FUN_000983d8,&DAT_003e77f8);

  _MSHookMessageEx(uVar1,"deleteBackward",FUN_00098440,&DAT_003e7800);

  uVar1 = _objc_getClass("BaseMsgContentViewController");

  _MSHookMessageEx(uVar1,"viewDidLoad",FUN_000984a8,&DAT_003e7808);

  _MSHookMessageEx(uVar1,"viewDidLayoutSubviews",FUN_000985a4,&DAT_003e7810);

  uVar2 = _sel_registerName("dealloc");

  _MSHookMessageEx(uVar1,uVar2,FUN_00098638,&DAT_003e7818);

  _MSHookMessageEx(uVar1,"traitCollectionDidChange:",FUN_000986b8,&DAT_003e7820);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"xzy_handleDarkModeChange:",FUN_00098864,&local_470);

  _MSHookMessageEx(uVar1,"viewWillAppear:",FUN_000988bc,&DAT_003e7828);

  _MSHookMessageEx(uVar1,"viewWillDisappear:",FUN_00098a24,&DAT_003e7830);

  _MSHookMessageEx(uVar1,"viewDidAppear:",FUN_00098a50,&DAT_003e7838);

  _MSHookMessageEx(uVar1,"reloadTableData",FUN_00098b00,&DAT_003e7840);

  _MSHookMessageEx(uVar1,"scrollViewWillBeginDragging:",FUN_00098ce0,&DAT_003e7848);

  _MSHookMessageEx(uVar1,"scrollViewWillBeginDecelerating:",FUN_00098e94,&DAT_003e7850);

  _MSHookMessageEx(uVar1,"scrollViewDidEndDecelerating:",FUN_00098ebc,&DAT_003e7858);

  _MSHookMessageEx(uVar1,"scrollViewDidEndDragging:willDecelerate:",FUN_0009917c,&DAT_003e7860);

  _MSHookMessageEx(uVar1,"scrollTableToBottomAnimated:init:",FUN_00099448,&DAT_003e7868);

  uVar1 = _objc_getClass("ImageMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00099670,&DAT_003e7870);

  _MSHookMessageEx(uVar1,"didMoveToWindow",FUN_0009969c,&DAT_003e7878);

  uVar1 = _objc_getClass("EmoticonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000996f0,&DAT_003e7880);

  _MSHookMessageEx(uVar1,"didMoveToWindow",FUN_0009971c,&DAT_003e7888);

  uVar1 = _objc_getClass("CommonMessageViewModel");

  _MSHookMessageEx(uVar1,"onMessageDownloadThumbImageOK",FUN_00099770,&DAT_003e7890);

  _MSHookMessageEx(uVar1,"rowHeight",FUN_00099820,&DAT_003e7898);

  _MSHookMessageEx(uVar1,"isShowChatRoomDisplayName",FUN_0009ab64,&DAT_003e78a0);

  uVar1 = _objc_getClass("TextMessageViewModel");

  _MSHookMessageEx(uVar1,"rowHeight",FUN_0009afac,&DAT_003e78a8);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_0009bdec,&DAT_003e78b0);

  _MSHookMessageEx(uVar1,"didMoveToWindow",FUN_0009c0b4,&DAT_003e78b8);

  _MSHookMessageEx(uVar1,"touchesBegan:withEvent:",FUN_0009c110,&DAT_003e78c0);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0009c19c,&DAT_003e78c8);

  _MSHookMessageEx(uVar1,"onVoiceTransClose:",FUN_0009cd90,&DAT_003e78d0);

  _MSHookMessageEx(uVar1,"stopTextAnimation",FUN_0009cfc0,&DAT_003e78d8);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"mesRefreshTableView",FUN_0009d1c8,&local_470);

  uVar1 = _objc_getClass("MMInputMsgReferView");

  _MSHookMessageEx(uVar1,"didMoveToWindow",FUN_0009d220,&DAT_003e78e0);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0009d24c,&DAT_003e78e8);

  uVar1 = _objc_getClass("TextMessageCellView");

  _MSHookMessageEx(uVar1,"onTranslateMsg:",FUN_0009d278,&DAT_003e78f0);

  _MSHookMessageEx(uVar1,"layoutContentView",FUN_0009d624,&DAT_003e78f8);

  uVar1 = _objc_getClass("TranslateMsgMgr");

  _MSHookMessageEx(uVar1,"translateMsg:translateNow:hideLoading:",FUN_0009db64,&DAT_003e7900);

  _MSHookMessageEx(uVar1,"translateMsg:",FUN_0009dbec,&DAT_003e7908);

  uVar1 = _objc_getClass("MMDiskUsageScaner");

  _MSHookMessageEx(uVar1,"startWithScanConfig:",FUN_0009dd24,&DAT_003e7910);

  uVar1 = _objc_getClass("MMDiskUsageScanConfig");

  _MSHookMessageEx(uVar1,"setM_isDeleteUnknow:",FUN_0009ddc0,&DAT_003e7918);

  _MSHookMessageEx(uVar1,"setM_isReportDelUnknow:",FUN_0009ddd0,&DAT_003e7920);

  _MSHookMessageEx(uVar1,"setIsDeleteEmptyFolder:",FUN_0009dde0,&DAT_003e7928);

  uVar1 = _objc_getClass("AddContactToChatRoomViewController");

  _MSHookMessageEx(uVar1,"reloadTableData",FUN_0009ddf0,&DAT_003e7930);

  local_470 = 0x403a4076;

  uStack_46c = 0x40;

  uStack_46b = 0x40;

  uStack_46a = 0;

  _class_addMethod(uVar1,"addMsgMergeReverseControl:toSection:tableViewInfo:",FUN_0009e3f0,

                   &local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"onAISwitchChanged:",FUN_0009e7ec,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"onAICustomPromptSwitchChanged:",FUN_0009e880,&local_470);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"showAICustomPromptEditor",FUN_0009e928,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"saveCustomPrompt:",FUN_0009f3bc,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"onMsgMergeReverseChanged:",FUN_0009f5a0,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"onMsgMergeAvatarAboveChanged:",FUN_0009f634,&local_470);

  uVar1 = _objc_getClass("ChatRoomInfoViewController");

  _MSHookMessageEx(uVar1,"reloadTableData",FUN_0009f838,&DAT_003e7938);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"addCustomSwitches",FUN_0009f8a8,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"aiSwitchChanged:",FUN_000a0378,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"aiNoAtSwitchChanged:",FUN_000a040c,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"aiCustomPromptSwitchChanged:",FUN_000a055c,&local_470);

  local_470 = 0x3a4076;

  _class_addMethod(uVar1,"showAICustomPromptEditor",FUN_000a0604,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"saveCustomPrompt:",FUN_000a1098,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"msgMergeReverseChanged:",FUN_000a127c,&local_470);

  local_470 = 0x403a4076;

  uStack_46c = 0;

  _class_addMethod(uVar1,"msgMergeAvatarAboveChanged:",FUN_000a1310,&local_470);

  uVar1 = _objc_getClass("ThemeBoxDrawerActionViewController");

  _MSHookMessageEx(uVar1,"initData",FUN_000a1514,&DAT_003e7940);

  _objc_getClass("ThemeBoxUtil");

  uVar1 = _object_getClass();

  _MSHookMessageEx(uVar1,"panelActionWithIndex:",FUN_000a1558,&DAT_003e7948);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




