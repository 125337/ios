// addScheduledTaskSection @ 018a96c0

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::addScheduledTaskSection(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  undefined *local_58;
  undefined *local_50;
  uint local_44;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRefineHelper_026ce000;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setHeaderTitle__0269e3c0,&cf__eNR);
  puVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scheduledTaskEnabled_026a6ca8);
  pcVar2 = &cf_chTgTvhSeW_bOSN_Q_0;
  if (((ulong)puVar4 & 1) == 0) {
    pcVar2 = &cf_SX__Wci_Na_O_u0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFooterTitle__0269e3c8,pcVar2);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar6 = local_28;
  puVar3 = local_40;
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleScheduledTask__026b77f8;
  puVar7 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scheduledTaskEnabled_026a6ca8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar6,&cf__T_u_eNR,puVar7
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scheduledTaskEnabled_026a6ca8);
  bVar1 = ((ulong)puVar4 & 1) != 0;
  if (bVar1) {
    puVar5 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineScheduledTask_026ce850,PTR_s_tasks_026a53a8);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_28;
    local_80 = PTR___NSConcreteGlobalBlock_02578658;
    local_78 = 0xd0800000;
    local_74 = 0;
    local_70 = FUN_018a9a5c;
    local_68 = &DAT_0257e7a8;
    local_50 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_40;
    local_60 = IVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_80);
    puVar4 = local_40;
    pcVar8 = "WCTableViewNormalCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_50,0);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

