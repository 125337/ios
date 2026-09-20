// welcomeCountModeChanged: @ 018aae08

/* Function Stack Size: 0x18 bytes */

void WCRefineChatRoomFunctionViewController::welcomeCountModeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_38 = (long)(int)(uint)(lVar3 == 1);
  local_41 = 0;
  local_51 = 0;
  bVar1 = false;
  if (local_38 == 1) {
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatRoomWelcomeMultiContent_0269ee60);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar2 == (undefined *)0x0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_30;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatRoomWelcomeText_0269ee40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    FUN_018a82b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = local_60;
    if (puVar5 != (undefined *)0x0) {
      puVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatRoomWelcomeText_0269ee40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatRoomWelcomeRepositoryCode_0269ee48);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    FUN_018a82b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_60;
    if (puVar5 != (undefined *)0x0) {
      puVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatRoomWelcomeRepositoryCode_0269ee48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_autoReplyEncodedMultiContentFrom_026b7858,local_60)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setChatRoomWelcomeMultiContent__026b7860);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_60,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setChatRoomWelcomeCountMode__026b7868,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

