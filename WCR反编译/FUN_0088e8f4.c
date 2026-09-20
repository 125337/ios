// FUN_0088e8f4 @ 0088e8f4

void FUN_0088e8f4(void)

{
  char *pcVar1;
  
  pcVar1 = "SessionSelectController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_recentForwardHidden_026a91b8,FUN_0088ea3c,&DAT_028cd8d0);
  pcVar1 = "SessionSelectView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_recentForwardHidden_026a91b8,FUN_0088eaa4,&DAT_028cd8d8);
  pcVar1 = "RecentForwardScrollView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0088eb0c,&DAT_028cd8e0);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_0088eb48,&DAT_028cd8e8);
  pcVar1 = "MMScrollActionSheet";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_relayoutScrollSheet_026a1340,FUN_0088eb84,&DAT_028cd8f0);
  _MSHookMessageEx(pcVar1,PTR_s_showInView__0269d310,FUN_0088ec40,&DAT_028cd8f8);
  _MSHookMessageEx(pcVar1,PTR_s_showInView_isConstraintByParent__026a91c0,FUN_0088ed68,&DAT_028cd900
                  );
  return;
}

