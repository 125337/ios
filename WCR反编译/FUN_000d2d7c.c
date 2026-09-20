// FUN_000d2d7c @ 000d2d7c

void FUN_000d2d7c(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_2a80;
  undefined *local_2a78;
  undefined1 auStack_29a0 [8];
  long local_2998;
  long *local_2990;
  undefined8 local_2960;
  undefined **local_2958 [3];
  undefined *local_2940;
  undefined *local_2938;
  char *local_2930;
  undefined4 local_2924;
  uint local_2920;
  uint local_291c;
  uint local_2918;
  uint local_2914;
  undefined4 local_2910;
  undefined4 local_290c;
  char *local_2908;
  uint local_28fc;
  uint local_28f8;
  uint local_28f4;
  char *local_28f0;
  char *local_28e8;
  char *local_28e0;
  char *local_28d8;
  undefined8 local_28d0;
  undefined8 local_28c8;
  undefined4 local_28bc;
  undefined8 local_28b8;
  cfstringStruct *local_28b0;
  undefined1 auStack_28a8 [128];
  undefined1 uStack_2828;
  undefined1 uStack_2827;
  undefined1 uStack_2826;
  undefined1 uStack_2825;
  undefined1 auStack_2428 [1024];
  undefined1 auStack_2028 [1024];
  undefined1 auStack_1c28 [1024];
  undefined1 auStack_1828 [1024];
  undefined1 uStack_1428;
  undefined1 uStack_1427;
  undefined1 uStack_1426;
  undefined1 uStack_1425;
  undefined1 uStack_1424;
  undefined1 uStack_1028;
  undefined1 uStack_1027;
  undefined1 uStack_1026;
  undefined1 uStack_1025;
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_28d0 = param_3;
  local_28c8 = param_2;
  local_28bc = param_1;
  _objc_getClass();
  _objc_getClass();
  _NSLog(&cf__wcr__chat_member_search_ctorlist__plogic__p);
  pcVar1 = "MsgSearchHelper";
  _objc_getClass();
  local_28d8 = pcVar1;
  _MSHookMessageEx(pcVar1,PTR_s_m_bShowSearchByName_0269e890,FUN_000d3d28,&DAT_028c82a0);
  _MSHookMessageEx(local_28d8,PTR_s_reloadView_0269e898,FUN_000d3e14,&DAT_028c82a8);
  _MSHookMessageEx(local_28d8,PTR_s_msgSearchBarSearchByName_0269e8a0,FUN_000d3e50,&DAT_028c82b0);
  _MSHookMessageEx(local_28d8,PTR_s_initBackGroundView_0269e8a8,FUN_000d3f80,&DAT_028c82b8);
  _MSHookMessageEx(local_28d8,PTR_s_msgSearchBarSearchByGift_0269e8b0,FUN_000d3fbc,&DAT_028c82c0);
  pcVar1 = "MsgFileBrowseViewController";
  _objc_getClass();
  local_28e0 = pcVar1;
  _MSHookMessageEx(pcVar1,PTR_s_onMsgNewImgLogicDataMatch__0269e8b8,FUN_000d40f8,&DAT_028c82c8);
  _MSHookMessageEx(local_28e0,PTR_s_tableView_didSelectRowAtIndexPat_0269e8c0,FUN_000d424c,
                   &DAT_028c82d0);
  pcVar1 = "ChatRoomMemMsgDataLogic";
  _objc_getClass();
  local_28e8 = pcVar1;
  _MSHookMessageEx(pcVar1,PTR_s_isMsgMatch__0269e8c8,FUN_000d458c,&DAT_028c82d8);
  _MSHookMessageEx(local_28e8,PTR_s_getMsgsLimit__0269e8d0,FUN_000d46e4,&DAT_028c82e0);
  pcVar1 = "ChatRoomMemMsgListViewController";
  _objc_getClass();
  local_28f0 = pcVar1;
  _MSHookMessageEx(pcVar1,PTR_s_tableView_numberOfRowsInSection__0269e8d8,FUN_000d492c,&DAT_028c82e8
                  );
  _MSHookMessageEx(local_28f0,PTR_s_tableView_heightForRowAtIndexPat_0269e8e0,FUN_000d4c98,
                   &DAT_028c82f0);
  _MSHookMessageEx(local_28f0,PTR_s_tableView_cellForRowAtIndexPath__0269e790,FUN_000d5050,
                   &DAT_028c82f8);
  _MSHookMessageEx(local_28f0,PTR_s_tableView_didSelectRowAtIndexPat_0269e8c0,FUN_000d5484,
                   &DAT_028c8300);
  _MSHookMessageEx(local_28f0,PTR_s_getMoreData_0269e8e8,FUN_000d5824,&DAT_028c8308);
  _MSHookMessageEx(local_28f0,PTR_s_MMRefreshTableFooterDidTriggerRe_0269e8f0,FUN_000d5880,
                   &DAT_028c8310);
  _MSHookMessageEx(local_28f0,PTR_s_viewDidLoad_0269cee8,FUN_000d5944,&DAT_028c8318);
  _MSHookMessageEx(local_28f0,PTR_s_viewWillAppear__0269cd48,FUN_000d5998,&DAT_028c8320);
  _MSHookMessageEx(local_28f0,PTR_s_viewDidLayoutSubviews_0269de90,FUN_000d59e0,&DAT_028c8328);
  _MSHookMessageEx(local_28f0,PTR_s_onChatRoomMemMsgDataDone_End__0269e8f8,FUN_000d5a24,
                   &DAT_028c8330);
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  local_28f4 = 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  local_28f4 = local_28f4 + (int)sVar2;
  uVar7 = (ulong)local_28f4;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + uVar7,"@",sVar2);
  sVar2 = _strlen("@");
  local_28f4 = local_28f4 + (int)sVar2;
  auStack_428[local_28f4] = 0;
  _class_addMethod(local_28f0,PTR_s_searchBar_textDidChange__0269e900,FUN_000d6440);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  local_28f8 = 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  local_28f8 = local_28f8 + (int)sVar2;
  auStack_828[local_28f8] = 0;
  _class_addMethod(local_28f0,PTR_s_searchBarSearchButtonClicked__0269e908,FUN_000d66c4);
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  local_28fc = 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  local_28fc = local_28fc + (int)sVar2;
  auStack_c28[local_28fc] = 0;
  _class_addMethod(local_28f0,PTR_s_WCRChatRoomMemberFilterChanged__0269e910,FUN_000d675c);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  local_2908 = pcVar1;
  _MSHookMessageEx(pcVar1,PTR_s_updateTitleView__0269e918,FUN_000d67d8,&DAT_028c8338);
  _MSHookMessageEx(local_2908,PTR_s_viewWillAppear__0269cd48,FUN_000d6870,&DAT_028c8340);
  _MSHookMessageEx(local_2908,PTR_s_viewDidAppear__0269cd50,FUN_000d68c8,&DAT_028c8348);
  _MSHookMessageEx(local_2908,PTR_s_viewDidLayoutSubviews_0269de90,FUN_000d6918,&DAT_028c8350);
  _MSHookMessageEx(local_2908,PTR_s_viewDidDisappear__0269de98,FUN_000d6a34,&DAT_028c8358);
  uStack_1028 = 0x76;
  uStack_1027 = 0x40;
  uStack_1026 = 0x3a;
  local_290c = 3;
  uStack_1025 = 0;
  _class_addMethod(local_2908,PTR_s_WCRefine_openChatRecordSearch_0269e920,FUN_000d6b68);
  uStack_1428 = 0x76;
  uStack_1427 = 0x40;
  uStack_1426 = 0x3a;
  uStack_1425 = 0x40;
  local_2910 = 4;
  uStack_1424 = 0;
  _class_addMethod(local_2908,PTR_s_WCRefine_onChatTopBarSearchButto_0269e928,FUN_000d6bc0);
  _MSHookMessageEx(local_2908,PTR_s_msgSearchBarCancel_0269e930,FUN_000d6dc4,&DAT_028c8360);
  auStack_1828[0] = 0x76;
  auStack_1828[1] = 0x40;
  auStack_1828[2] = 0x3a;
  local_2914 = 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_1828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  local_2914 = local_2914 + (int)sVar2;
  auStack_1828[local_2914] = 0;
  _class_addMethod(local_2908,PTR_s_WCRefine_onChatMsgSearchLocalSea_0269e938,FUN_000d6e18);
  auStack_1c28[0] = 0x76;
  auStack_1c28[1] = 0x40;
  auStack_1c28[2] = 0x3a;
  local_2918 = 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_1c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  local_2918 = local_2918 + (int)sVar2;
  auStack_1c28[local_2918] = 0;
  _class_addMethod(local_2908,PTR_s_WCRefine_onChatTopBarSearchButto_0269e940,FUN_000d70d8);
  auStack_2028[0] = 0x76;
  auStack_2028[1] = 0x40;
  auStack_2028[2] = 0x3a;
  local_291c = 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_2028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  local_291c = local_291c + (int)sVar2;
  auStack_2028[local_291c] = 0;
  _class_addMethod(local_2908,PTR_s_WCRefine_onChatTopBarMoreButtonL_0269e948,FUN_000d73a8);
  auStack_2428[0] = 0x76;
  auStack_2428[1] = 0x40;
  auStack_2428[2] = 0x3a;
  local_2920 = 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_2428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  local_2920 = local_2920 + (int)sVar2;
  auStack_2428[local_2920] = 0;
  _class_addMethod(local_2908,PTR_s_WCRefine_onChatTopBarGroupMenuTa_0269e950,FUN_000d7788);
  uStack_2828 = 0x76;
  uStack_2827 = 0x40;
  uStack_2826 = 0x3a;
  local_2924 = 3;
  uStack_2825 = 0;
  _class_addMethod(local_2908,PTR_s_WCRefine_openPluginSearchSetting_0269e958,FUN_000d7958);
  pcVar1 = "_UITAMICAdaptorView";
  _objc_getClass();
  local_2930 = pcVar1;
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_000d7980,&DAT_028c8368);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  local_2938 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR___NSConcreteGlobalBlock_02579fd0;
  local_2940 = puVar4;
  _objc_retainBlock();
  local_2958[0] = ppuVar5;
  _memset(auStack_29a0,0,0x40);
  local_28b8 = _WCRefineGroupAuthorizationDidResolveNotification;
  local_28b0 = &cf_WCRefineRemoteUpdateInfoDidChange;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28b8,2
            );
  _objc_retainAutoreleasedReturnValue();
  local_2a78 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2a78 != (undefined *)0x0) {
    lVar6 = *local_2990;
    local_2a80 = (undefined *)0x0;
    do {
      do {
        if (*local_2990 - lVar6 != 0) {
          _objc_enumerationMutation(*local_2990 - lVar6,puVar3);
        }
        local_2960 = *(undefined8 *)(local_2998 + (long)local_2a80 * 8);
        puVar4 = local_2938;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2938,PTR_s_addObserverForName_object_queue__026ca4b0,local_2960,0,
                   local_2940,local_2958[0]);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
        local_2a80 = local_2a80 + 1;
      } while (local_2a80 < local_2a78);
      local_2a78 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_29a0,auStack_28a8,
                 0x10);
      local_2a80 = (undefined *)0x0;
    } while (local_2a78 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(local_2958);
  _objc_storeStrong(&local_2940,0);
  _objc_storeStrong(&local_2938,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

