// FUN_00192294 @0x192294


void FUN_00192294(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("CommonMessageViewModel");

  _MSHookMessageEx(uVar1,"rowHeight",FUN_00192438,&DAT_003e95d8);

  uVar1 = _objc_getClass("TextMessageViewModel");

  _MSHookMessageEx(uVar1,"rowHeight",FUN_001924f0,&DAT_003e95e0);

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00192580,&DAT_003e95e8);

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_00193828,&DAT_003e95f0);

  _MSHookMessageEx(uVar1,"traitCollectionDidChange:",FUN_00193be4,&DAT_003e95f8);

  uVar1 = _objc_getClass("BaseMsgContentViewController");

  _MSHookMessageEx(uVar1,"viewDidAppear:",FUN_00193ca4,&DAT_003e9600);

  uVar1 = _objc_getClass("TextMessageCellView");

  _MSHookMessageEx(uVar1,"layoutContentView",FUN_00193dec,&DAT_003e9608);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00193e18,&DAT_003e9610);

  _MSHookMessageEx(uVar1,"onVoiceTransClose:",FUN_00193e44,&DAT_003e9618);

  _MSHookMessageEx(uVar1,"stopTextAnimation",FUN_00193eb0,&DAT_003e9620);

  FUN_0018da3c();

  _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038dfc0);

  return;

}




