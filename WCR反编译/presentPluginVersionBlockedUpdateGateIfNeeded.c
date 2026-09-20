// presentPluginVersionBlockedUpdateGateIfNeeded @ 00fc134c

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::presentPluginVersionBlockedUpdateGateIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
  if (((param_1 & 1) != 0) && ((DAT_028e2fc8 & 1) == 0)) {
    DAT_028e2fc8 = 1;
    puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_pluginVersionBlockAlertMessage_026ad020);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateAlertButtonPrimaryTitle_026ad028);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      _objc_storeStrong(&local_38,&cf_Sfe);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_dkHr_g__P_u,local_30,
               local_38,&PTR___NSConcreteGlobalBlock_02583bb0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

