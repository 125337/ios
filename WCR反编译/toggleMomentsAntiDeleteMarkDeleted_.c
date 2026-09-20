// toggleMomentsAntiDeleteMarkDeleted: @ 01c18830

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsViewController::toggleMomentsAntiDeleteMarkDeleted_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  IVar1 = local_18;
  puVar3 = PTR_WCRefineHelper_026ce000;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  else {
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01c189f4;
    local_38 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,&cf__NNhQ>f_y,
               &cf_wSN,&local_50);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

