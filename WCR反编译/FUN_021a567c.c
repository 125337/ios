// FUN_021a567c @ 021a567c

void FUN_021a567c(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::onActionSelected);
  uVar4 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::onGestureActionId);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::onQuickChatOpenUsername);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = WCRSuperFloatBallWindow::ballContainer;
  FUN_021c7714();
  FUN_021a087c();
  uVar5 = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = WCRSuperFloatBallWindow::iconView;
  FUN_021c7774();
  FUN_021a0914();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = WCRSuperFloatBallWindow::quickChatAvatarHost;
  FUN_021a087c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatOfficialBadge) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatLinked) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatTapOpen) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUsername);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatShowBadge) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatBadgeSide) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUnread) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatMutedOnly) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAlertStyle) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarSide) = 0x4046000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatGradientLayer) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::petTapResetWorkItem) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::menuBackdropView) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::isDismissingMenu) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::dismissGeneration) = 0;
  lVar2 = WCRSuperFloatBallWindow::snapshot;
  puVar6 = &DAT_028c6c20;
  FUN_021c77d4(&DAT_028c6c20,&DAT_0233a7e0);
  uVar4 = 0;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,puVar6);
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballSize) = 0x404a000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballIconCornerPercent) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::panStart);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::hiddenHotEdge) = 0x4032000000000000;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::autoSnapEnabled) = 1;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::idleHoverSeconds) = 0x4008000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballIdleAlpha) = 0x3feb333333333333;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballAlpha) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset) = 0x4018000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineWidth) = 0x4014000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHeight) = 0x4043000000000000;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight) = 1;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::singleTapRecognizer) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::doubleTapRecognizer) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressRecognizer) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragStart);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressTouchStart);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::didRestoreBallPosition) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::pendingSwipeKey);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::holdOpenTracking) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::menuPanDidMove) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapAfterIdleWorkItem) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::dismissWatchdog) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::secureField) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::secureShieldOn) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::previewTouchYield) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::pausedAnimatedIcon) = 0;
  pcVar7 = "init(coder:) has not been implemented";
  uVar4 = 0x25;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("init(coder:) has not been implemented",0x25,1);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,pcVar7,uVar4,"WCRefine/WCRSuperFloatBallWindow.swift",0x26,2,0x9a,0
            );
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x21a5c34);
  (*pcVar3)();
}

