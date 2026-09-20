// FUN_0053cd10 @ 0053cd10

void FUN_0053cd10(objc_object *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_30;
  objc_object *local_28;
  undefined8 local_20;
  objc_object *local_18;
  
  local_28 = (objc_object *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsDraftEnabled_026a4d60);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineInjectDraftEntryToSheet__026a4c88,local_28,
               &cf_configDataReportForActionSheet_beforeOrig);
  }
  (*DAT_028cb2a8)(local_18,local_20,local_28);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsDraftEnabled_026a4d60);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineInjectDraftEntryToSheet__026a4c88,local_28,
               &cf_configDataReportForActionSheet_afterOrig);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsHDMomentsEnabled_026a21e0);
  if (((ulong)puVar1 & 1) != 0) {
    WCRefineHDMomentsInjectToActionSheet(local_18,local_28);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

