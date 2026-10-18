// FUN_00187474 @0x187474


void FUN_00187474(void)



{

  undefined8 uVar1;

  

  FUN_00187694();

  uVar1 = _objc_getClass("MMAssetPickerController");

  _MSHookMessageEx(uVar1,"viewDidAppear:",FUN_00187898,&DAT_003e8cc0);

  uVar1 = _objc_getClass("MsgMediaGroupMgr");

  _MSHookMessageEx(uVar1,"isSenderEnabled",FUN_001879d0,&DAT_003e8cc8);

  _MSHookMessageEx(uVar1,"isReceiverEnabled",FUN_00187a20,&DAT_003e8cd0);

  _objc_getClass("MsgMediaGroupCombineSendView");

  uVar1 = _object_getClass();

  _MSHookMessageEx(uVar1,"minCount",FUN_00187a70,&DAT_003e8cd8);

  uVar1 = _objc_getClass("MMAssetPickerController");

  _MSHookMessageEx(uVar1,"isCombineSendHidden",FUN_00187ac4,&DAT_003e8ce0);

  _MSHookMessageEx(uVar1,"setCombineSendHidden:animated:",FUN_00187b24,&DAT_003e8ce8);

  uVar1 = _objc_getClass("MMImagePreviewBrowserController");

  _MSHookMessageEx(uVar1,"isCombineSendHidden",FUN_00187bc8,&DAT_003e8cf0);

  uVar1 = _objc_getClass("MsgMediaGroupView");

  _MSHookMessageEx(uVar1,"configureWithMediaGroup:index:",FUN_00187cf8,&DAT_003e8cf8);

  _MSHookMessageEx(uVar1,"handlePan:",FUN_00187d6c,&DAT_003e8d00);

  _MSHookMessageEx(uVar1,"updateViewsForPanProgress:",FUN_00187dd8,&DAT_003e8d08);

  _MSHookMessageEx(uVar1,"checkVisibleNodeViews",FUN_00187e04,&DAT_003e8d10);

  _MSHookMessageEx(uVar1,"continueFinishAnimation",FUN_00187e30,&DAT_003e8d18);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00187e5c,&DAT_003e8d20);

  uVar1 = _objc_getClass("MsgMediaGroupCard");

  _MSHookMessageEx(uVar1,"initWithFrame:viewModel:",FUN_00187e88,&DAT_003e8d28);

  return;

}




