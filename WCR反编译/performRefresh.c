// performRefresh @ 00521dec

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineMomentsAutoRefreshManager::performRefresh
          (WCRefineMomentsAutoRefreshManager *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  ID IVar4;
  ID IVar5;
  double in_d0;
  double dVar6;
  ID local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shouldRun_026a4940);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stopAutoRefresh_026a4910);
  }
  else {
    _CACurrentMediaTime();
    IVar4 = local_18;
    local_28 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_interval_026a4958);
    dVar6 = (double)(long)IVar4;
    local_30 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastRefreshTime_026a4998);
    dVar3 = local_28;
    if ((dVar6 <= 0.0) ||
       (dVar6 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastRefreshTime_026a4998),
       local_30 * DAT_02323c60 <= dVar3 - dVar6)) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_18,PTR_s_setLastRefreshTime__026a4980);
      _objc_autoreleasePoolPush();
      IVar5 = IVar4;
      FUN_00522020();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_s_reloadTimelineDataItems_026a49a8;
      puVar1 = PTR_s_updateTimelineHead_026a49a0;
      local_38 = IVar5;
      if (IVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_respondsToSelector__026ca818,PTR_s_updateTimelineHead_026a49a0);
        if ((IVar5 & 1) == 0) {
          IVar5 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,puVar2);
          if ((IVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,puVar2);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,puVar1);
        }
      }
      _objc_storeStrong(&local_38,0);
      _objc_autoreleasePoolPop(IVar4);
    }
  }
  return;
}

