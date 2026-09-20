// FUN_000c5090 @ 000c5090

void FUN_000c5090(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseChatViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_chatViewControllerWidth_0269e738,FUN_000c5328,&DAT_028c81d0);
  pcVar1 = "MessageNodeComponentHelper";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getTextMessageNodeWidth__0269e740,FUN_000c5418,&DAT_028c81d8);
  _MSHookMessageEx(pcVar1,PTR_s_getMessageBackgroundWidth__0269e748,FUN_000c5588,&DAT_028c81e0);
  _MSHookMessageEx(pcVar1,PTR_s_getMessageBackgroundShorterWidth_0269e750,FUN_000c5688,&DAT_028c81e8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_getImageDisplaySize_originSize__0269e758,FUN_000c5788,&DAT_028c81f0)
  ;
  pcVar1 = "ChatTableViewCell";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_prepareForReuse_0269e760,FUN_000c594c,&DAT_028c81f8);
  _MSHookMessageEx(pcVar1,PTR_s_setFrame__026ca960,FUN_000c59e8,&DAT_028c8200);
  pcVar1 = "MMTableView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_pointInside_withEvent__0269e768,FUN_000c5d88,&DAT_028c8208);
  _MSHookMessageEx(pcVar1,PTR_s_setFrame__026ca960,FUN_000c6098,&DAT_028c8210);
  _MSHookMessageEx(pcVar1,PTR_s_setContentInset__0269e770,FUN_000c6690,&DAT_028c8218);
  _MSHookMessageEx(pcVar1,PTR_s_setScrollIndicatorInsets__0269e778,FUN_000c672c,&DAT_028c8220);
  _MSHookMessageEx(pcVar1,PTR_s_setContentOffset__0269e780,FUN_000c67d0,&DAT_028c8228);
  _MSHookMessageEx(pcVar1,PTR_s_setContentOffset_animated__0269ddd8,FUN_000c683c,&DAT_028c8230);
  _MSHookMessageEx(pcVar1,PTR_s_scrollToRowAtIndexPath_atScrollP_0269e788,FUN_000c68b4,&DAT_028c8238
                  );
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_000c6aa4,&DAT_028c8240);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_000c6ce0,&DAT_028c8248);
  _MSHookMessageEx(pcVar1,PTR_s_tableView_cellForRowAtIndexPath__0269e790,FUN_000c6f28,&DAT_028c8250
                  );
  return;
}

