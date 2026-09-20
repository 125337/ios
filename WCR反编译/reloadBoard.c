// reloadBoard @ 01dcf76c

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::reloadBoard(ID param_1,SEL param_2)

{
  byte bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *local_40;
  byte local_31;
  SEL local_30;
  undefined *local_28;
  
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_31 = (byte)IVar2;
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startButton_026c53d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeButton_026c53c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_rangeTitle_026c5558);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitle_forState__026caab8,puVar3,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898);
  if (((ulong)puVar4 & 1) == 0) {
    if (local_40 == (undefined *)0x0) {
      puVar4 = PTR_WCRefineSessionStatsResult_026ced38;
      _objc_alloc_init();
      puVar3 = local_40;
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatUsr_026c5438);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUsr__026af828);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsGroup__026af830,puVar3);
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDisplayName__026ae2f8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setTypeCounts__026af838,
                 *(undefined8 *)PTR____NSDictionary0___02578288);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setTypeOrder__026af840,*(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSessionResult__026c5560,local_40);
    }
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineSessionStatsEngine_026ced48,PTR_s_fillPrivateSnapshot__026afd38,
                 local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineSessionStatsEngine_026ced48,PTR_s_fillPeopleSnapshot__026c4d58,local_40
                );
    }
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_segment_026c54c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_board_026c5450);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_board_026c5450);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewResult_026c54e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_40;
  puVar7 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898);
  bVar1 = local_31;
  puVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressText_026c5570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_rangeTitle_026c5558);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_visibleBoardPages_026c5578);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_portraitMode_026afd68);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_reloadOverview_session_overviewM_026c5588,puVar6,puVar3,
             (ulong)puVar7 & 0xffffffff,bVar1 & 1,puVar8,puVar9,puVar10,puVar4,(char)puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_40,0);
  return;
}

