// addSceneEditorCells:scene:configuration: @ 01a80fd0

/* Function Stack Size: 0x28 bytes */

void WCRefineGlobalPageBackgroundViewController::addSceneEditorCells_scene_configuration_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID IVar6;
  char *pcVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar3 = local_28;
  uVar2 = local_38;
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_selectPendingDay_026bd760;
  uVar4 = local_48;
  FUN_01a81408(local_48,local_40,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar1,IVar3,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  IVar3 = local_28;
  uVar2 = local_38;
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_selectPendingNight_026bd768;
  uVar4 = local_48;
  FUN_01a81408(local_48,local_40,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar1,IVar3,&::cf__,uVar4,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar2 = local_38;
  pcVar7 = "WCTableViewCellManager";
  _objc_getClass();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_opacityForScene_configuration__026a8c40
             ,local_40,local_48);
  IVar6 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_sliderRightViewForValue_sliderTa_026bd780,"t/libswiftCore.dylib",
             "/libswiftCore.dylib",PTR_s_opacityChanged__026bd770,
             PTR_s_opacityValueButtonTapped__026bd778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar7,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,IVar3,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  uVar2 = local_38;
  pcVar7 = "WCTableViewCellManager";
  _objc_getClass();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_blurForScene_configuration__026a8c48,
             local_40,local_48);
  IVar6 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_sliderRightViewForValue_sliderTa_026bd780,"libswiftCore.dylib",
             "ibswiftCore.dylib",PTR_s_blurChanged__026bd788,PTR_s_blurValueButtonTapped__026bd790);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar7,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,IVar3,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

