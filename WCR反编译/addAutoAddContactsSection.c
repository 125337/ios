// addAutoAddContactsSection @ 018a2c50

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::addAutoAddContactsSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf_U_);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setFooterTitle__0269e3c8,&cf_ReQe_TROX_0RU_N_Deu0OX_0RU_0vT0);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_18;
  puVar1 = local_30;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAutoAddContacts__026b7608;
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomAutoAddContactsEnabled_026ab7f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_eXRmRU_,puVar5)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

