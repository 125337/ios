// FUN_002a31d0 @ 002a31d0

void FUN_002a31d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = "MiniTaskPanGestureHandler";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_gestureRecognizerShouldBegin__0269e2b8,FUN_002a3bd8,&DAT_028c9618)
    ;
    _MSHookMessageEx(pcVar3,PTR_s_handlePanGesture__026a1900,FUN_002a3d58,&DAT_028c9620);
    pcVar3 = "MiniTaskViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_setupFakeSnapshot_026a1908,FUN_002a40e4,&DAT_028c9628);
    _MSHookMessageEx(pcVar3,PTR_s_updateTaskTransitionContext__026a1910,FUN_002a41d8,&DAT_028c9630);
    _MSHookMessageEx(pcVar3,PTR_s_updateDefaultTaskTransitionConte_026a1918,FUN_002a433c,
                     &DAT_028c9638);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillAppear__0269cd48,FUN_002a44a0,&DAT_028c9640);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidAppear__0269cd50,FUN_002a45a8,&DAT_028c9648);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillDisappear__0269eb30,FUN_002a4688,&DAT_028c9650);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidDisappear__0269de98,FUN_002a4784,&DAT_028c9658);
    pcVar3 = "MainTabBarViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_viewDidLoad_0269cee8,FUN_002a4894,&DAT_028c9660);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillAppear__0269cd48,FUN_002a4b00,&DAT_028c9668);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidAppear__0269cd50,FUN_002a4d74,&DAT_028c9670);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidLayoutSubviews_0269de90,FUN_002a4f08,&DAT_028c9678);
    _MSHookMessageEx(pcVar3,PTR_s_setSelectedIndex__0269e450,FUN_002a51b0,&DAT_028c9680);
    _MSHookMessageEx(pcVar3,PTR_s_setSelectedViewController__0269e458,FUN_002a5480,&DAT_028c9688);
    _MSHookMessageEx(pcVar3,PTR_s_tabBarController_didSelectViewCo_026a1920,FUN_002a57d4,
                     &DAT_028c9690);
    _MSHookMessageEx(pcVar3,PTR_s_OnMainTabBarHiddenChange__026a1928,FUN_002a5adc,&DAT_028c9698);
    _MSHookMessageEx(pcVar3,PTR_s_traitCollectionDidChange__0269f168,FUN_002a5e88,&DAT_028c96a0);
    pcVar4 = "dealloc";
    _sel_registerName("dealloc");
    _MSHookMessageEx(pcVar3,pcVar4,FUN_002a6014,&DAT_028c96a8);
    auStack_428[0] = 0x76;
    auStack_428[1] = 0x40;
    auStack_428[2] = 0x3a;
    sVar5 = _strlen("@");
    _memcpy(auStack_428 + 3,"@",sVar5);
    sVar5 = _strlen("@");
    auStack_428[(int)sVar5 + 3] = 0;
    _class_addMethod(pcVar3,PTR_s_wcr_floatingTabBarSettingsChange_026a1930,FUN_002a60d4);
    pcVar3 = "MMTabBarBaseViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_viewWillAppear__0269cd48,FUN_002a6190,&DAT_028c96b0);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidAppear__0269cd50,FUN_002a6d28,&DAT_028c96b8);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillDisappear__0269eb30,FUN_002a725c,&DAT_028c96c0);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidDisappear__0269de98,FUN_002a77a8,&DAT_028c96c8);
    _MSHookMessageEx(pcVar3,PTR_s_fixTabbarState_026a1938,FUN_002a7af8,&DAT_028c96d0);
    _MSHookMessageEx(pcVar3,PTR_s_fixTabBarHierarchy_026a1940,FUN_002a7c7c,&DAT_028c96d8);
    _MSHookMessageEx(pcVar3,PTR_s_onMainTabBarHiddenChange__026a1948,FUN_002a7cb0,&DAT_028c96e0);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillPop__026a1950,FUN_002a7e4c,&DAT_028c96e8);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidPop__026a1958,FUN_002a7e8c,&DAT_028c96f0);
    pcVar3 = "MMTabBarController";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_viewWillLayoutSubviews_0269f360,FUN_002a7ecc,&DAT_028c96f8);
    _MSHookMessageEx(pcVar3,PTR_s_makeSureFrame_026a1960,FUN_002a7fec,&DAT_028c9700);
    _MSHookMessageEx(pcVar3,PTR_s_onTabBarItemViewsRelayout_026a1968,FUN_002a810c,&DAT_028c9708);
    _MSHookMessageEx(pcVar3,PTR_s_relayoutButtons__026a1970,FUN_002a822c,&DAT_028c9710);
    _MSHookMessageEx(pcVar3,PTR_s_showTabBar_026a1978,FUN_002a83b8,&DAT_028c9718);
    _MSHookMessageEx(pcVar3,PTR_s_showTabBarForIndex__026a1980,FUN_002a85c4,&DAT_028c9720);
    _MSHookMessageEx(pcVar3,PTR_s_showTabBarWithNoViewHeightUpdate_026a1988,FUN_002a87dc,
                     &DAT_028c9728);
    _MSHookMessageEx(pcVar3,PTR_s_hideTabBar_026a1990,FUN_002a89f4,&DAT_028c9730);
    _MSHookMessageEx(pcVar3,PTR_s_hideTabBarForIndex__026a1998,FUN_002a8b0c,&DAT_028c9738);
    _MSHookMessageEx(pcVar3,PTR_s_hideTabBarWithNoViewHeightUpdate_026a19a0,FUN_002a8c30,
                     &DAT_028c9740);
    _MSHookMessageEx(pcVar3,PTR_s_onTabBarHiddenChanged__026a19a8,FUN_002a8d54,&DAT_028c9748);
    pcVar3 = "NewMainFrameViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_viewWillPop__026a1950,FUN_002a8ffc,&DAT_028c9750);
    _MSHookMessageEx(pcVar3,PTR_s_onMainTabBarHiddenChange__026a1948,FUN_002a92b4,&DAT_028c9758);
    pcVar3 = "WCTimeLineViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_getVisibleHeight_026a19b0,FUN_002a97e8,&DAT_028c9760);
    _MSHookMessageEx(pcVar3,PTR_s_setHidesBottomBarWhenPushed__0269db60,FUN_002a9bf0,&DAT_028c9768);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillAppear__0269cd48,FUN_002a9dcc,&DAT_028c9770);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidAppear__0269cd50,FUN_002aa05c,&DAT_028c9778);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillDisappear__0269eb30,FUN_002aa248,&DAT_028c9780);
    pcVar3 = "MMTabBar";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_setTranslucent__026a19b8,FUN_002aa474,&DAT_028c9788);
    _MSHookMessageEx(pcVar3,PTR_s_pointInside_withEvent__0269e768,FUN_002aa564,&DAT_028c9790);
    _MSHookMessageEx(pcVar3,PTR_s_snapshotViewAfterScreenUpdates__0269e2f0,FUN_002ab1c0,
                     &DAT_028c9798);
    _MSHookMessageEx(pcVar3,PTR_s_didAddSubview__026a19c0,FUN_002ab43c,&DAT_028c97a0);
    _MSHookMessageEx(pcVar3,PTR_s_setHidden__026ca970,FUN_002ab524,&DAT_028c97a8);
    _MSHookMessageEx(pcVar3,PTR_s_setFrame__026ca960,FUN_002ab904,&DAT_028c97b0);
    _MSHookMessageEx(pcVar3,PTR_s_willMoveToWindow__026a19c8,FUN_002abf20,&DAT_028c97b8);
    _MSHookMessageEx(pcVar3,PTR_s_didMoveToWindow_0269ddb8,FUN_002ac010,&DAT_028c97c0);
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_002ac0fc,&DAT_028c97c8);
    pcVar3 = "MMTabBarItemView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_002ac1ec,&DAT_028c97d0);
    pcVar3 = "_UIReplicantView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_didMoveToWindow_0269ddb8,FUN_002ac86c,&DAT_028c97d8);
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_002ac944,&DAT_028c97e0);
    _MSHookMessageEx(pcVar3,PTR_s_setFrame__026ca960,FUN_002aca1c,&DAT_028c97e8);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

