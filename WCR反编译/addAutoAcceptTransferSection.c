// addAutoAcceptTransferSection @ 01a1a578

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::addAutoAcceptTransferSection(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  uint local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf_l_R);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferEnabled_0269d668);
  local_44 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferProfileControl_0269d698);
    local_44 = (uint)puVar2;
  }
  pcVar1 = &cf_DeaSrzc6R_;
  if ((local_44 & 1) == 0) {
    pcVar1 = &cf_RVYNVlQOS0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFooterTitle__0269e3c8,pcVar1);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_18;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoAcceptTransfer__026bb958;
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferEnabled_0269d668);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uRc6el_,
             puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addCell__0269e3f8,puVar3);
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferEnabled_0269d668);
  IVar4 = local_18;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoAcceptTransferSettings_026bb960;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferSettingsExpand_026bb968);
    pcVar1 = &cf_bS;
    if (((ulong)puVar5 & 1) == 0) {
      pcVar1 = &cf_U_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf__,pcVar1,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addCell__0269e3f8,puVar3);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferSettingsExpand_026bb968);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_addAutoAcceptTransferSettingCell_026bb970,local_30,local_28);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

