// toggleDailyForEntry: @ 01f1baf0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::toggleDailyForEntry_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_daily_026c7138);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDaily__026c76a0,(uint)lVar2 ^ 1);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backend_026c7148);
  IVar1 = local_18;
  lVar2 = local_28;
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateLocalEntry__026c8320,local_28);
  }
  else {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_done_026a1598);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_writeOfficialMetaForEntry_comple_026c8318,lVar2,lVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_broadcastChanged_026c8298);
  _objc_storeStrong(&local_28,0);
  return;
}

