// FUN_006ad1d8 @ 006ad1d8

void FUN_006ad1d8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  _NSClassFromString();
  FUN_006a60d0();
  _NSClassFromString(&cf_CContactMgr);
  FUN_006a60d0();
  _NSClassFromString(&cf_CContactMgr);
  FUN_006a60d0();
  _NSClassFromString(&cf_CContactMgr);
  FUN_006a60d0();
  _NSClassFromString();
  FUN_006a60d0();
  _NSClassFromString(&cf_ContactsDataLogic);
  FUN_006a60d0();
  _NSClassFromString(&cf_ContactsDataLogic);
  FUN_006a60d0();
  _NSClassFromString(&cf_ContactsDataLogic);
  FUN_006a60d0();
  _NSClassFromString(&cf_ContactsDataLogic);
  FUN_006a60d0();
  _NSClassFromString(&cf_ContactsDataLogic);
  FUN_006a60d0();
  _NSClassFromString(&cf_ContactsDataLogic);
  FUN_006a60d0();
  pcVar1 = &cf_MMNewSessionMgr;
  _NSClassFromString();
  local_38 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_SessionNewArray_0269d988,FUN_006ae720,&DAT_028cbf18);
  FUN_006a60d0(local_38,PTR_s_GetUserNamesOnSessionList_0269f7e8,FUN_006ae7e0,&DAT_028cbf20);
  FUN_006a60d0(local_38,PTR_s_recentForwardSessions_026a6760,FUN_006ae8a0,&DAT_028cbf28);
  pcVar1 = &cf_MFTitleView;
  _NSClassFromString();
  local_40 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_006ae960,&DAT_028cbf30);
  FUN_006a60d0(local_40,PTR_s_updateTitleView_title__026a6768,FUN_006ae9e8,&DAT_028cbf38);
  pcVar1 = &cf_NewMainFrameViewController;
  _NSClassFromString();
  local_48 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_updateUnReadCount_026a6770,FUN_006aeaa8,&DAT_028cbf40);
  FUN_006a60d0(local_48,PTR_s_viewDidAppear__0269cd50,FUN_006aeb2c,&DAT_028cbf48);
  FUN_006a60d0(local_48,PTR_s_initNavigationTitileView_026a3ed8,FUN_006aebc4,&DAT_028cbf50);
  pcVar1 = &cf_MainSessionMgr;
  _NSClassFromString();
  local_50 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_setTopSessions__026a2ff0,FUN_006aec48,&DAT_028cbf58);
  FUN_006a60d0(local_50,PTR_s_setNormalSessions__026a2f60,FUN_006aecf0,&DAT_028cbf60);
  FUN_006a60d0(local_50,PTR_s_setAllTopSessions__026a2fe8,FUN_006aed98,&DAT_028cbf68);
  FUN_006a60d0(local_50,PTR_s_rebuildMainSessions_026a2f68,FUN_006aee40,&DAT_028cbf70);
  pcVar1 = &cf_FTSContactMgr;
  _NSClassFromString();
  local_58 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_getAllContactsWithTaskKey__026a6778,FUN_006aeec0,&DAT_028cbf78);
  FUN_006a60d0(local_58,PTR_s_getSingleContactsWithTaskKey__026a6780,FUN_006aefa8,&DAT_028cbf80);
  FUN_006a60d0(local_58,PTR_s_getGroupContactsWithTaskKey__026a6788,FUN_006af090,&DAT_028cbf88);
  _NSClassFromString(&cf_FTSTopHitMgr);
  FUN_006a60d0();
  local_60 = PTR_s_showLocalNotificationWithIdentif_026a0c50;
  _NSClassFromString(&cf_MMLocalNotificationUtil);
  _object_getClass();
  FUN_006a60d0();
  pcVar1 = &cf_MMLocalNotificationMgr;
  _NSClassFromString();
  local_68 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_OnShowPush_isAlwaysShow__026a6798,FUN_006af7ec,&DAT_028cbfa0);
  FUN_006a60d0(local_68,PTR_s_showPushWithMessageWrap_fireDate_026a67a0,FUN_006af8bc,&DAT_028cbfa8);
  pcVar1 = &cf_FTSContactDataProvider;
  _NSClassFromString();
  _object_getClass();
  local_70 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_isFtsValidContact__026a67a8,FUN_006af9b0,&DAT_028cbfb0);
  FUN_006a60d0(local_70,PTR_s_isFtsValidContact_needGroupMembe_026a67b0,FUN_006afac0,&DAT_028cbfb8);
  _NSClassFromString(&cf_ContactInfoViewController);
  FUN_006a60d0();
  _NSClassFromString(&cf_CBaseContactInfoAssist);
  FUN_006a60d0();
  pcVar1 = &cf_CBaseContact;
  _NSClassFromString();
  pcVar2 = &cf_CContact;
  local_78 = pcVar1;
  _NSClassFromString();
  pcVar1 = local_78;
  local_80 = pcVar2;
  FUN_006a60d0(local_78,PTR_s_isMyContact_0269ef80,FUN_006afdf0,&DAT_028cbfd0);
  if (((ulong)pcVar1 & 1) == 0) {
    FUN_006a60d0(local_80,PTR_s_isMyContact_0269ef80,FUN_006afdf0,&DAT_028cbfd0);
  }
  pcVar1 = local_78;
  FUN_006a60d0(local_78,PTR_s_isInMyContactList_026a67b8,FUN_006aff1c,&DAT_028cbfd8);
  if (((ulong)pcVar1 & 1) == 0) {
    FUN_006a60d0(local_80,PTR_s_isInMyContactList_026a67b8,FUN_006aff1c,&DAT_028cbfd8);
  }
  pcVar1 = &cf_BraceletRankViewController;
  _NSClassFromString();
  local_88 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_refreshRankingDataWith__026a67c0,FUN_006b0048,&DAT_028cbfe0);
  FUN_006a60d0(local_88,PTR_s_refreshLikedMeDataWith__026a67c8,FUN_006b00f0,&DAT_028cbfe8);
  FUN_006a60d0(local_88,PTR_s_initWithRankInfoDictionary_bExpi_026a67d0,FUN_006b0264,&DAT_028cbff0);
  _NSClassFromString();
  FUN_006a60d0();
  _NSClassFromString(&cf_WCHomepageMgr);
  FUN_006a60d0();
  _NSClassFromString(&cf_WCFacade);
  FUN_006a60d0();
  pcVar1 = &cf_FTSMessageMgr;
  _NSClassFromString();
  local_90 = pcVar1;
  FUN_006a60d0(pcVar1,PTR_s_getSessionUsernameForQuery_atInd_026a67d8,FUN_006b08f4,&DAT_028cc010);
  FUN_006a60d0(local_90,PTR_s_getSessionMsgItemsForQuery_atInd_026a67e0,FUN_006b0a5c,&DAT_028cc018);
  FUN_006a60d0(local_90,PTR_s_getSessionUserCountForQuery_task_026a67e8,FUN_006b0bc4,&DAT_028cc020);
  FUN_006a60d0(local_90,PTR_s_getTotalSessionUserCountForQuery_026a67f0,FUN_006b0cdc,&DAT_028cc028);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_class_0269cd60);
  FUN_006a60d0();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)PTR__UITextFieldTextDidChangeNotification_02578210;
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  local_98 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_addObserverForName_object_queue__026ca4b0,uVar5,0,puVar4,
             &PTR___NSConcreteGlobalBlock_0257ecf8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_98;
  uVar5 = *(undefined8 *)PTR__UITextViewTextDidChangeNotification_02578218;
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_addObserverForName_object_queue__026ca4b0,uVar5,0,puVar4,
             &PTR___NSConcreteGlobalBlock_0257ed18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_refreshRuntimeSnapshot_026a66a8);
  DAT_028cbea0 = 1;
  _objc_storeStrong(&local_98,0);
  return;
}

