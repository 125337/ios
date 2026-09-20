// FUN_01a80d30 @ 01a80d30

void FUN_01a80d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  cfstringStruct *local_c0;
  cfstringStruct *local_50;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_expandedScene_026bd750);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectAtIndexedSubscript__0269cc78,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar7 = PTR_WCRefineHelper_026ce000;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_displayNameForScene__026b0fe8,local_20)
  ;
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_c0 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_summaryForScene_configuration__026bd758,local_20,
               *(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_c0;
  }
  else {
    local_c0 = &cf_bS;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_cellWithSel_target_title_rightVa_026a0a98,uVar5,uVar8,puVar6,local_c0,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addSceneEditorCells_scene_config_026bd738,
               *(undefined8 *)(param_1 + 0x30),local_20,*(undefined8 *)(param_1 + 0x38));
  }
  _objc_storeStrong(&local_20,0);
  return;
}

