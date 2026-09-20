// toggleCustomAPI: @ 0180eb28

/* Function Stack Size: 0x18 bytes */

void WCRefineAutoParseLinkSettingsViewController::toggleCustomAPI_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  byte local_41;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  local_31 = 0;
  local_41 = 0;
  bVar2 = false;
  if ((uVar4 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = puVar3 == (undefined *)0x0;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  if (bVar2) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_0180ede8;
    local_58 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = IVar1;
    _dispatch_async(puVar3,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

