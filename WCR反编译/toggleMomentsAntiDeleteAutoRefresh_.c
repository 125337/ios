// toggleMomentsAntiDeleteAutoRefresh: @ 01c183fc

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsViewController::toggleMomentsAntiDeleteAutoRefresh_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  byte local_31;
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
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  local_31 = 0;
  bVar1 = false;
  if ((uVar4 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)puVar3 < 1;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (bVar1) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar3 = PTR_WCRefineHelper_026ce000;
  if ((uVar4 & 1) != 0) {
    local_40 = (undefined *)0x0;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_01c187c0;
    local_50 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_WCRefine,&cf___T_ugSWR7Re,
               &cf_zT_T,&PTR___NSConcreteGlobalBlock_0258bbb0,&cf_zsS_T,&local_68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

