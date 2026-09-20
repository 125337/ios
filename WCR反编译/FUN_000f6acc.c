// FUN_000f6acc @ 000f6acc

void FUN_000f6acc(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addMessageNode_layout_addMoreMsg_0269eaf8,FUN_000f6e3c,&DAT_028c83c0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onPositionModeChangeTo_Animated__0269eb00,FUN_000f6fc4,&DAT_028c83c8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ToolViewPositionDidChanged_anima_0269eb08,FUN_000f7138,&DAT_028c83d0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_scrollTableToBottomAnimated_init_0269eb10,FUN_000f72b0,&DAT_028c83d8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ScrollToBottomAnimated__0269eb18,FUN_000f7348,&DAT_028c83e0);
  _MSHookMessageEx(pcVar1,PTR_s_tryScrollToBottomAnimated__0269eb20,FUN_000f73a0,&DAT_028c83e8);
  _MSHookMessageEx(pcVar1,PTR_s_onLoadFirstScreenMsg__0269eb28,FUN_000f73f8,&DAT_028c83f0);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_000f77f0,&DAT_028c83f8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_000f7890,&DAT_028c8400);
  _MSHookMessageEx(pcVar1,PTR_s_scrollViewDidEndDragging_willDec_0269eb38,FUN_000f7bbc,&DAT_028c8408
                  );
  _MSHookMessageEx(pcVar1,PTR_s_scrollViewDidEndDecelerating__0269eb40,FUN_000f7d60,&DAT_028c8410);
  _MSHookMessageEx(pcVar1,PTR_s_scrollViewDidScroll__0269eb48,FUN_000f7ec4,&DAT_028c8418);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_000f855c,&DAT_028c8420);
  _MSHookMessageEx(pcVar1,PTR_s_onClickEdgeTipsView__0269eb50,FUN_000f8598,&DAT_028c8428);
  _MSHookMessageEx(pcVar1,PTR_s_onClickJumpToFirstUnreadMsg_0269eb58,FUN_000f8724,&DAT_028c8430);
  _MSHookMessageEx(pcVar1,PTR_s_onTipViewClick__0269eb60,FUN_000f8760,&DAT_028c8438);
  _MSHookMessageEx(pcVar1,PTR_s_onScrollToFirstUnReadMsg_0269eb68,FUN_000f87ec,&DAT_028c8440);
  _class_addMethod(pcVar1,PTR_s_wcr_onChatPositionDIYTipTap__0269eb70,FUN_000f8828);
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_realStartRecordingAfterImpactOcc_0269eb78,FUN_000f8bd0,&DAT_028c8448
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

