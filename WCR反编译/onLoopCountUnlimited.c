// onLoopCountUnlimited @ 00583a28

/* Function Stack Size: 0x10 bytes */

void WCRMomentsScheduledTaskListViewController::onLoopCountUnlimited(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingLoopMinutes_026a5480);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcr_applyLoopMinutes_repeatLimit_026a5488,IVar1,0);
  return;
}

