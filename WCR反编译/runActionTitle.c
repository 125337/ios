// runActionTitle @ 019fb250

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationCheckViewController::runActionTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineFriendRelationChecker_026ceb00;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isRunning_026aca10);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isPaused_026a14d8);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queueCount_026acab8);
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cursor_026acaa8);
      if (puVar2 < puVar1) {
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPendingRangeReplacement_026aca88);
        local_18 = &cf___ShKm;
        if (((ulong)puVar1 & 1) == 0) {
          local_18 = &cf___hKm;
        }
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_019fb3c0;
      }
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_f_PhKm;
  }
LAB_019fb3c0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

