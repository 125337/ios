// refreshRunningState @ 00521a38

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsAutoRefreshManager::refreshRunningState(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shouldRun_026a4940);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stopAutoRefresh_026a4910);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startAutoRefresh_026a4948);
  }
  return;
}

