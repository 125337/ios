// applyKeywordAlertDeduplicationRule: @ 01b3bc08

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertViewController::applyKeywordAlertDeduplicationRule_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined1 *local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = (undefined1 *)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_keywordAlertDeduplicationRule_026be8e0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setKeywordAlertDeduplicationRule_026bf010,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  if (puVar1 != local_28) {
    if (local_28 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_showKeywordAlertDeduplicationRul_026bf018,&cf___T_ub_bYQ_);
    }
    else if (local_28 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_showKeywordAlertDeduplicationRul_026bf018,&cf___T_uYQ_);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

