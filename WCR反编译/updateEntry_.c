// updateEntry: @ 01f1b0cc

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::updateEntry_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backend_026c7148);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateLocalEntry__026c8320,local_28);
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_done_026a1598);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_applyOfficialItemFieldsForEntry__026c8330,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_writeOfficialMetaForEntry_comple_026c8318,local_28,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishOfficialEntry__026c8328,local_28);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_broadcastChanged_026c8298);
  _objc_storeStrong(&local_28,0);
  return;
}

