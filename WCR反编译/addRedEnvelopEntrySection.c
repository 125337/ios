// addRedEnvelopEntrySection @ 01a1936c

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::addRedEnvelopEntrySection(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  uVar1 = 0;
  local_20 = param_2;
  local_18 = param_1;
  FUN_01138c30(&cf_auto_red_envelop,0);
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf__SR);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopAutoReceiveEnable_026a0ae0);
    local_38 = &::cf__;
    if (((ulong)puVar2 & 1) == 0) {
      local_38 = &cf__g;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
               PTR_s_openRedEnvelopSettings__026bb908,local_18,&cf_Ryb_S,local_38,1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addCell__0269e3f8,puVar2);
    IVar4 = local_18;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleRedEnvelopDetail__026bb910;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopDetailEnabled_026a6af8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_>f_y_S_,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addCell__0269e3f8,puVar3);
    IVar4 = local_18;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleRedEnvelopMessageNotify__026bb918;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopMessageNotifyEnabled_026a6bb8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__Smo_c,puVar5
              );
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addCell__0269e3f8,puVar3);
    IVar4 = local_18;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleRedEnvelopEntertainmentSen_026bb920;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopEntertainmentSendEnabl_026b0410);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_1ZPN_SR,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addCell__0269e3f8,puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopEntertainmentSendEnabl_026b0410);
    puVar2 = local_30;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_clearEntertainmentFakeGroups_026bb928,local_18,&::cf__,0,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

