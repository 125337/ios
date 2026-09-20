// toggleOfficialEmoticonGroup: @ 0194952c

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonFunctionViewController::toggleOfficialEmoticonGroup_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if (((uVar1 & 1) == 0) ||
     (puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_cloudAllowed_026abef8),
     ((ulong)puVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_invalidateEnabledCache_026a3c60);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf__T_u_eh_R_,&cf__O_uNh_b_g0mRvUS_Nh_0,&cf_wSN,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRNS_u);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

