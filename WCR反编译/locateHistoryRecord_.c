// locateHistoryRecord: @ 01b312e4

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryViewController::locateHistoryRecord_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  uVar1 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_shouldAutoDeleteViewedHistoryRec_026beb90);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_locateHistoryRecord_autoRemoveOn_026beb98,uVar1,IVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

