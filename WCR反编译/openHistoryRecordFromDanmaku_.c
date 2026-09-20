// openHistoryRecordFromDanmaku: @ 00ff99ac

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertDanmakuPresenter::openHistoryRecordFromDanmaku_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  int local_6c;
  undefined *local_40;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar4 = &cf_WCRefineKeywordAlertHistoryViewController;
  _NSClassFromString();
  puVar2 = PTR_s_openHistoryRecordAndLocate_autoR_026ad868;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,
               PTR_s_openHistoryRecordAndLocate_autoR_026ad868);
    uVar3 = local_28;
    if (((ulong)pcVar5 & 1) != 0) {
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageDanmakuOnly);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        local_40 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_6c = (int)puVar8;
      }
      else {
        local_6c = 0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar2,uVar3,local_6c != 0);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      goto LAB_00ff9b8c;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_l_N_gR_e_TQ);
LAB_00ff9b8c:
  _objc_storeStrong(&local_28,0);
  return;
}

