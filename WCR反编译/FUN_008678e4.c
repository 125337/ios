// FUN_008678e4 @ 008678e4

void FUN_008678e4(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "BaseAudioPlayer";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setAutoMode_026a8f68,FUN_008689b0,&DAT_028cd4f0);
  _MSHookMessageEx(pcVar1,PTR_s_setEarpieceMode_026a8f70,FUN_00868a10,&DAT_028cd4f8);
  _MSHookMessageEx(pcVar1,PTR_s_switchOutputToEarpieceMode_026a8f78,FUN_00868a70,&DAT_028cd500);
  pcVar1 = "RingBackSoundCoordinator";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_ringFilePromise_026a8f80,FUN_00868ad0,&DAT_028cd508);
  _MSHookMessageEx(pcVar1,PTR_s_playRingBackSound_026a8f88,FUN_00868c80,&DAT_028cd510);
  pcVar1 = "TextStateMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_shouldShowTextState_026a8f90,FUN_00868e6c,&DAT_028cd518);
  _MSHookMessageEx(pcVar1,PTR_s_shouldShowTextStateIconInTimelin_026a8f98,FUN_00868ecc,&DAT_028cd520
                  );
  _MSHookMessageEx(pcVar1,PTR_s_shouldShowTextStateIconInTimelin_026a8fa0,FUN_00868f2c,&DAT_028cd528
                  );
  _MSHookMessageEx(pcVar1,PTR_s_shouldShowTextStateIconInTimelin_026a8fa8,FUN_00868f8c,&DAT_028cd530
                  );
  _MSHookMessageEx(pcVar1,PTR_s_shouldShowTextStateIconInGroupCh_026a8fb0,FUN_00868fec,&DAT_028cd538
                  );
  _MSHookMessageEx(pcVar1,PTR_s_shouldShowTextStateIconInContact_026a8fb8,FUN_0086904c,&DAT_028cd540
                  );
  pcVar1 = "WCFacadeDynamicConfig";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s__TextState_canShowIconWithContac_026a8fc0,FUN_008690ac,&DAT_028cd548
                  );
  pcVar1 = "UIButton";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setAccessibilityLabel__0269e968,FUN_00869168,&DAT_028cd550);
  pcVar1 = "ChatBotResMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getImage__026a8fc8,FUN_00869304,&DAT_028cd558);
  _MSHookMessageEx(pcVar1,PTR_s_getSvg_size_color__026a8fd0,FUN_00869788,&DAT_028cd560);
  pcVar1 = "MMThemeManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed__0269fd20,FUN_00869c98,&DAT_028cd568);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_warnIfNotFound__026a0008,FUN_00869f90,&DAT_028cd570);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_inBundle__026a8bd0,FUN_0086a29c,&DAT_028cd578);
  _MSHookMessageEx(pcVar1,PTR_s_svgImageNamed_size_color__026a1350,FUN_0086a5c4,&DAT_028cd580);
  _MSHookMessageEx(pcVar1,PTR_s_svgImageNamed_size_color_alpha__026a3d18,FUN_0086a90c,&DAT_028cd588)
  ;
  _MSHookMessageEx(pcVar1,PTR_s_svgImageNamed_size_color_alpha_a_026a0010,FUN_0086ac64,&DAT_028cd590
                  );
  _MSHookMessageEx(pcVar1,PTR_s_svgImageNamed_color__0269f760,FUN_0086afe0,&DAT_028cd598);
  _MSHookMessageEx(pcVar1,PTR_s_svgImageNamed_color_ignoreNotFou_026a0018,FUN_0086b308,&DAT_028cd5a0
                  );
  pcVar1 = "MainFrameHeaderLogic";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addBannerBtn_withAnim__026a8fd8,FUN_0086b644,&DAT_028cd5a8);
  _MSHookMessageEx(pcVar1,PTR_s_addBannerBtn_atIndex_withAnim__026a8fe0,FUN_0086b718,&DAT_028cd5b0);
  _MSHookMessageEx(pcVar1,PTR_s_addBannerBtn_atIndex_editable_wi_026a8328,FUN_0086b7fc,&DAT_028cd5b8
                  );
  pcVar1 = "MainFrameTableView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addSubview__026ca4c0,FUN_0086b8f4,&DAT_028cd5c0);
  pcVar1 = "_UITAMICAdaptorView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086b9b4,&DAT_028cd5c8);
  pcVar1 = "MMBarButton";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setAccessibilityLabel__0269e968,FUN_0086b9f8,&DAT_028cd5d0);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086ba8c,&DAT_028cd5d8);
  pcVar1 = "MainFrameLeftBarView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086bad0,&DAT_028cd5e0);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_0086bb14,&DAT_028cd5e8);
  pcVar1 = "NewMainFrameRightTopMenuBtn";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086bb58,&DAT_028cd5f0);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_0086bb9c,&DAT_028cd5f8);
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initTableHeaderView_026a4fc0,FUN_0086bbe0,&DAT_028cd600);
  _MSHookMessageEx(pcVar1,PTR_s_initTableHeaderTopView_026a8fe8,FUN_0086bc1c,&DAT_028cd608);
  _MSHookMessageEx(pcVar1,PTR_s_setSearchBarToTableHeaderView_0269fe30,FUN_0086bcb4,&DAT_028cd610);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_0086bcf0,&DAT_028cd618);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_0086bdbc,&DAT_028cd620);
  _MSHookMessageEx(pcVar1,PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0,FUN_0086be88,&DAT_028cd628
                  );
  _MSHookMessageEx(pcVar1,PTR_s_mainPullDown__026a8ff8,FUN_0086bef8,&DAT_028cd630);
  _MSHookMessageEx(pcVar1,PTR_s_showTableHeaderTopViewByPullDown_026a9000,FUN_0086bfd0,&DAT_028cd638
                  );
  _MSHookMessageEx(pcVar1,PTR_s_startDragToShow_026a9008,FUN_0086c020,&DAT_028cd640);
  _MSHookMessageEx(pcVar1,PTR_s_showTableHeaderTopView_fromScene_026a9010,FUN_0086c068,&DAT_028cd648
                  );
  pcVar1 = "WCSearchBar";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setLeftIconImage__026a9018,FUN_0086c0e4,&DAT_028cd650);
  _MSHookMessageEx(pcVar1,PTR_s_setUnactiveStyle_026a9020,FUN_0086c17c,&DAT_028cd658);
  pcVar1 = "ContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initSearchBar_0269fe28,FUN_0086c1c0,&DAT_028cd660);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_0086c1fc,&DAT_028cd668);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_0086c24c,&DAT_028cd670);
  pcVar1 = "MMTableViewIndexView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_reloadView_0269e898,FUN_0086c290,&DAT_028cd678);
  _MSHookMessageEx(pcVar1,PTR_s_totallyReloadView_026a9028,FUN_0086c2cc,&DAT_028cd680);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToSuperview_0269f328,FUN_0086c308,&DAT_028cd688);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086c344,&DAT_028cd690);
  pcVar1 = "MMTableViewIndexItem";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_reloadViewWithBrandColor__026a9030,FUN_0086c380,&DAT_028cd698);
  pcVar1 = "UIImageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setAccessibilityLabel__0269e968,FUN_0086c4bc,&DAT_028cd6a0);
  pcVar1 = "UILabel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setText__026caa88,FUN_0086c938,&DAT_028cd6a8);
  pcVar1 = "MMUILabel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setText__026caa88,FUN_0086cba0,&DAT_028cd6b0);
  pcVar1 = "ContactInfoViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setM_contact__0269fff0,FUN_0086ce08,&DAT_028cd6b8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_0086ce9c,&DAT_028cd6c0);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_0086cf40,&DAT_028cd6c8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0086d07c,&DAT_028cd6d0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_0086d284,&DAT_028cd6d8);
  pcVar1 = "TextStateProfileTableView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086d3a8,&DAT_028cd6e0);
  _MSHookMessageEx(pcVar1,PTR_s_reloadData_0269e400,FUN_0086d3fc,&DAT_028cd6e8);
  pcVar1 = "MMCPLabel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setTag__026caa80,FUN_0086d450,&DAT_028cd6f0);
  _MSHookMessageEx(pcVar1,PTR_s_setText__026caa88,FUN_0086d60c,&DAT_028cd6f8);
  _MSHookMessageEx(pcVar1,PTR_s_onCopy__026a4340,FUN_0086dcb4,&DAT_028cd700);
  pcVar1 = "MMTitleView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086df54,&DAT_028cd708);
  pcVar1 = "MMGroupView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_0086e568,&DAT_028cd710);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addMessageNode_layout_addMoreMsg_0269eaf8,FUN_0086e620,&DAT_028cd718
                  );
  pcVar1 = "MMNewSessionMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_OnAddMsgListForSession_NotifyUsr_0269e640,FUN_0086e71c,&DAT_028cd720
                  );
  pcVar1 = "ChatTimeCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithViewModel__0269f008,FUN_0086ed4c,&DAT_028cd728);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086ef74,&DAT_028cd730);
  _MSHookMessageEx(pcVar1,PTR_s_layoutInternal_0269f018,FUN_0086f058,&DAT_028cd738);
  _MSHookMessageEx(pcVar1,PTR_s_canBeReused_026a9038,FUN_0086f0a4,&DAT_028cd740);
  _MSHookMessageEx(pcVar1,PTR_s_shouldLayoutIfNeeded_026a9040,FUN_0086f110,&DAT_028cd748);
  _MSHookMessageEx(pcVar1,PTR_s_setViewModel__026a0050,FUN_0086f17c,&DAT_028cd750);
  pcVar1 = "ChatTimeViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_measure__026a9048,FUN_0086f30c,&DAT_028cd758);
  pcVar1 = "SystemMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithViewModel__0269f008,FUN_0086f394,&DAT_028cd760);
  _MSHookMessageEx(pcVar1,PTR_s_layoutInternal_0269f018,FUN_0086f5bc,&DAT_028cd768);
  _MSHookMessageEx(pcVar1,PTR_s_canBeReused_026a9038,FUN_0086f608,&DAT_028cd770);
  _MSHookMessageEx(pcVar1,PTR_s_shouldLayoutIfNeeded_026a9040,FUN_0086f674,&DAT_028cd778);
  pcVar1 = "SystemMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_measure__026a9048,FUN_0086f6e0,&DAT_028cd780);
  pcVar1 = "AppPatMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithViewModel__0269f008,FUN_0086f768,&DAT_028cd788);
  _MSHookMessageEx(pcVar1,PTR_s_layoutInternal_0269f018,FUN_0086f990,&DAT_028cd790);
  _MSHookMessageEx(pcVar1,PTR_s_canBeReused_026a9038,FUN_0086f9dc,&DAT_028cd798);
  _MSHookMessageEx(pcVar1,PTR_s_shouldLayoutIfNeeded_026a9040,FUN_0086fa48,&DAT_028cd7a0);
  pcVar1 = "AppPatMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_measure__026a9048,FUN_0086fab4,&DAT_028cd7a8);
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0086fb3c,&DAT_028cd7b0);
  _MSHookMessageEx(pcVar1,PTR_s_layoutContentView_026a0048,FUN_0086fba8,&DAT_028cd7b8);
  _MSHookMessageEx(pcVar1,PTR_s_initUnreadView_026a9050,FUN_0086fc14,&DAT_028cd7c0);
  _MSHookMessageEx(pcVar1,PTR_s_initQuickTransTipButton_026a9058,FUN_0086fcec,&DAT_028cd7c8);
  _MSHookMessageEx(pcVar1,PTR_s_updateStatus_026a0090,FUN_0086fe60,&DAT_028cd7d0);
  pcVar1 = "MMGrowDictationIconView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithFrame__026ca6e8,FUN_0086feb0,&DAT_028cd7d8);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00870234,&DAT_028cd7e0);
  _MSHookMessageEx(pcVar1,PTR_s_updateMask_026a9060,FUN_008704d8,&DAT_028cd7e8);
  pcVar1 = "MMScreenShotMgr";
  _objc_getClass();
  pcVar2 = pcVar1;
  _object_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_isEnable_026a9068,FUN_00870780,&DAT_028cd7f0);
  _MSHookMessageEx(pcVar1,PTR_s_onUserDidTakeScreenshot_026a9070,FUN_008707ec,&DAT_028cd7f8);
  _MSHookMessageEx(pcVar1,PTR_s_animateShowView_026a9078,FUN_00870838,&DAT_028cd800);
  pcVar1 = "MMTabBarItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showSmallRedDot_026a9080,FUN_00870884,&DAT_028cd808);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_008708e0,&DAT_028cd810);
  pcVar1 = "TypingController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_trySendTyping__026a9088,FUN_00870c44,&DAT_028cd818);
  pcVar1 = "TextMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isShowSourceView_026a9090,FUN_00870c98,&DAT_028cd820);
  pcVar1 = "ImageMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isShowSourceView_026a9090,FUN_00870d9c,&DAT_028cd828);
  pcVar1 = "VideoMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isShowSourceView_026a9090,FUN_00870dfc,&DAT_028cd830);
  pcVar1 = "AppFileMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isShowSourceView_026a9090,FUN_00870e5c,&DAT_028cd838);
  pcVar1 = "AppEmoticonMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isShowSourceView_026a9090,FUN_00870ebc,&DAT_028cd840);
  pcVar1 = "RoomContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getSubTitle_026a9098,FUN_00870f1c,&DAT_028cd848);
  _MSHookMessageEx(pcVar1,PTR_s_getMemeberCountLabel_026a90a0,FUN_00870f7c,&DAT_028cd850);
  return;
}

