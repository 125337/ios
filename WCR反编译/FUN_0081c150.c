// FUN_0081c150 @ 0081c150

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0081c150(ulong param_1)

{
  char *pcVar1;
  
  if (((DAT_028cd2d9 & 1) == 0) &&
     ((FUN_00821dcc(), (param_1 & 1) != 0 || (FUN_0082d7bc(), (param_1 & 1) != 0)))) {
    DAT_028cd2d9 = 1;
    pcVar1 = "WCListView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_initTableView_026a8e30,FUN_00841690,&DAT_028cd2e0);
    pcVar1 = "UIViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00841770,&DAT_028cd2e8);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_008417e4,&DAT_028cd2f0);
    _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_00841874,&DAT_028cd2f8);
    pcVar1 = "MMUIViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_008418e8,&DAT_028cd300);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0084194c,&DAT_028cd308);
    _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_008419cc,&DAT_028cd310);
    pcVar1 = "MainTabBarViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00841a30,&DAT_028cd318);
    _MSHookMessageEx(pcVar1,PTR_s_setSelectedIndex__0269e450,FUN_00841c48,&DAT_028cd320);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00841e48,&DAT_028cd328);
    _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_0084206c,&DAT_028cd330);
    pcVar1 = "NewMainFrameViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_willAppear_026a8e38,FUN_008422b8,&DAT_028cd338);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00842314,&DAT_028cd340);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0084235c,&DAT_028cd348);
    pcVar1 = "ContactsViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_willAppear_026a8e38,FUN_008423b0,&DAT_028cd350);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_0084240c,&DAT_028cd358);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00842454,&DAT_028cd360);
    pcVar1 = "FindFriendEntryViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_willAppear_026a8e38,FUN_008424a8,&DAT_028cd368);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00842504,&DAT_028cd370);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0084254c,&DAT_028cd378);
    pcVar1 = "WCTimeLineViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_008425a0,&DAT_028cd380);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00842640,&DAT_028cd388);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00842690,&DAT_028cd390);
    _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_00842704,&DAT_028cd398);
    _MSHookMessageEx(pcVar1,PTR_s_scrollViewDidEndDragging_willDec_0269eb38,FUN_00842754,
                     &DAT_028cd3a0);
    _MSHookMessageEx(pcVar1,PTR_s_scrollViewDidEndDecelerating__0269eb40,FUN_00842804,&DAT_028cd3a8)
    ;
    pcVar1 = "BaseMsgContentViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00842890,&DAT_028cd3b0);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_008428fc,&DAT_028cd3b8);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0084295c,&DAT_028cd3c0);
    _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_008429e0,&DAT_028cd3c8);
    pcVar1 = "NewSettingViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00842a30,&DAT_028cd3d0);
    pcVar1 = "WCTableView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842a8c,&DAT_028cd3d8);
    pcVar1 = "MMTableView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842ad0,&DAT_028cd3e0);
    pcVar1 = "MMMainTableView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842b0c,&DAT_028cd3e8);
    _MSHookMessageEx(pcVar1,PTR_s_didAddSubview__026a19c0,FUN_00842b48,&DAT_028cd3f0);
    pcVar1 = "WCTimelineTableView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842c0c,&DAT_028cd3f8);
    _MSHookMessageEx(pcVar1,PTR_s_didAddSubview__026a19c0,FUN_00842c50,&DAT_028cd400);
    pcVar1 = "WCSearchBar";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842cdc,&DAT_028cd408);
    _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_00842d18,&DAT_028cd410);
    pcVar1 = "WCCommentBackgroundView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842d94,&DAT_028cd418);
    _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_00842dd0,&DAT_028cd420);
    pcVar1 = "UrlLabel";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842e4c,&DAT_028cd428);
    pcVar1 = "WCCommentViewFB";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00842e88,&DAT_028cd430);
    pcVar1 = "WCMicroMerchantSubTimelineViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00842ec4,&DAT_028cd438);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00842f60,&DAT_028cd440);
    pcVar1 = "WCNewCommentListViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00843008,&DAT_028cd448);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00843058,&DAT_028cd450);
    pcVar1 = "WCCommentDetailViewControllerFB";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_008430b4,&DAT_028cd458);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00843104,&DAT_028cd460);
    _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_00843160,&DAT_028cd468);
    pcVar1 = "MoreViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_willAppear_026a8e38,FUN_008431b0,&DAT_028cd470);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_0084320c,&DAT_028cd478);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00843254,&DAT_028cd480);
  }
  return;
}

