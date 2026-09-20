// FUN_0050c018 @ 0050c018

void FUN_0050c018(void)

{
  char *pcVar1;
  
  pcVar1 = "WCListViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initBarItem_0269fe20,FUN_0050c208,&DAT_028caff8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_0050c244,&DAT_028cb000);
  _MSHookMessageEx(pcVar1,PTR_s_onOperate__026a4688,FUN_0050c2a0,&DAT_028cb008);
  pcVar1 = "WCCommentUploadMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getFailedLike_026a4690,FUN_0050c358,&DAT_028cb010);
  _MSHookMessageEx(pcVar1,PTR_s_setTopTaskFailWithRet__026a4698,FUN_0050c4e8,&DAT_028cb018);
  pcVar1 = "WCFacade";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getFailedLike_026a4690,FUN_0050c554,&DAT_028cb020);
  pcVar1 = "WCTimeLineViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_0050c638,&DAT_028cb028);
  _MSHookMessageEx(pcVar1,PTR_s_onCommentOrLikeFailQueueChange_026a46a0,FUN_0050c68c,&DAT_028cb030);
  _MSHookMessageEx(pcVar1,PTR_s_showDetailViewForFailedCommentIt_026a46a8,FUN_0050c784,&DAT_028cb038
                  );
  pcVar1 = "MMTipsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_show_0269d280,FUN_0050c8e4,&DAT_028cb040);
  _MSHookMessageEx(pcVar1,PTR_s_showInView__0269d310,FUN_0050c93c,&DAT_028cb048);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0050ca04,&DAT_028cb050);
  return;
}

