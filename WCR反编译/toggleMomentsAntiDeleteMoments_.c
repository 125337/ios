// toggleMomentsAntiDeleteMoments: @ 01c15d2c

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsViewController::toggleMomentsAntiDeleteMoments_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,uVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_postNotificationName_object__0269e228,
             &cf_WCRefineMomentsAntiDeleteConfigChanged);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if ((uVar3 & 1) != 0) {
    local_30 = (undefined *)0x0;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01c16030;
    local_40 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf___,&cf___T_ugw_RdgSWR_,
               &cf_zT_T,&PTR___NSConcreteGlobalBlock_0258bb90,&cf_zsS_T,&local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_30 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_38,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

