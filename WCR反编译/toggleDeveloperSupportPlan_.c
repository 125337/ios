// toggleDeveloperSupportPlan: @ 01f45018

/* Function Stack Size: 0x18 bytes */

void WCRefineUICleanViewController::toggleDeveloperSupportPlan_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    puVar7 = PTR_WCRefineAuth_026ce2c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAuth_026ce2c8,PTR_s_hiddenOfficialAccountAutoFollowC_026c8eb0);
    puVar9 = &DAT_02460f7f;
    puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_cN_N1rS5uoEN
              );
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar6 = PTR___NSConcreteStackBlock_02578660;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01f452e4;
    local_60 = &DAT_0257a770;
    local_50 = puVar8;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_28;
    local_58 = IVar3;
    local_a0 = puVar6;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01f4534c;
    local_88 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_nxsQ,puVar8,&cf__ec_ec,
               &local_78,&cf___sQ,&local_a0,puVar9,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAuth_026ce2c8,PTR_s_autoCheckAndFollowOfficialAccoun_026b48f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_38,0);
  return;
}

