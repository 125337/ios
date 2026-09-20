// refreshRealtimePreviewToolbar @ 018c86fc

/* Function Stack Size: 0x10 bytes */

void WCRefineChatToolbarViewController::refreshRealtimePreviewToolbar(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  double in_d0;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 in_d3;
  double dVar9;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_realtimePreviewToolbar_026b7f48);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 != 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    dVar5 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    dVar6 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar6 = (double)(long)(((dVar5 * dVar6) / 100.0) * 10.0) / 10.0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dVar9 = dVar6 + 24.0;
    uVar8 = 0;
    uVar7 = 0;
    dVar5 = in_d0;
    FUN_018c86b0();
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar8,dVar5,dVar9);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    uVar7 = 0;
    uVar8 = 0x4028000000000000;
    FUN_018c86b0();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFrame__026ca960);
    puVar2 = PTR_s_reloadWithActions_inputToolView__0269f158;
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,
               PTR_s_reloadWithActions_inputToolView__0269f158);
    IVar1 = local_38;
    if ((IVar4 & 1) != 0) {
      FUN_018c6cd0();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,puVar2,IVar4,0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar8,in_d0,dVar6 + 24.0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewAppearanceLocked_026b7ea0);
    if ((IVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

