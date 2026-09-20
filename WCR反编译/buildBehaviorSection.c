// buildBehaviorSection @ 01e4613c

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingTabsViewController::buildBehaviorSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setFooterTitle__0269e3c8,&cf_R_OUS__);
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_40;
  puVar1 = local_58;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleRemember__026c6568;
  puVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_homeTelegramGroupingRememberSele_026b01b0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_OON_kR_,puVar5)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_38 = &cf__eU;
  local_30 = &cf___U;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
  local_60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_homeTelegramGroupingLongPressMen_026a8318);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_setSelectedSegmentIndex__0269e9e0,puVar2 != (undefined *)0x0);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x4061800000000000;
  uVar10 = 0x403e000000000000;
  FUN_01e46508();
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar9,uVar7,uVar10,local_60,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
             PTR_s_longPressMenuStyleChanged__026be258,0x1000);
  puVar2 = local_58;
  pcVar6 = "WCTableViewCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

