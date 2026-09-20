// configureHTMLEditorFooterVisible: @ 01ef4f38

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoListWebSettingsViewController::configureHTMLEditorFooterVisible_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double in_d2;
  double dVar8;
  double in_d3;
  undefined8 uVar9;
  double local_1c8;
  double local_88;
  ID local_80 [5];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined1 local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (undefined1)param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((param_3 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar7 = 0;
    uVar6 = 0;
    uVar9 = 0x4038000000000000;
    FUN_01ee77c8();
    local_58 = uVar6;
    local_50 = uVar7;
    local_40 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,in_d2,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_buildHTMLEditorFooterIfNeeded_026c7fa0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_80[0] = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar8 = in_d2;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_88 = in_d2;
    if (in_d2 <= 0.0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_88 = dVar8;
    }
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1c8 = in_d3 * DAT_02323d60;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (local_1c8 <= 420.0) {
      local_1c8 = 420.0;
    }
    uVar7 = 0;
    uVar6 = 0;
    FUN_01ee77c8();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,local_88,local_1c8,local_80[0],PTR_s_setFrame__026ca960);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshHTMLStatusLabelWithPrefix_026c7fb0);
    _objc_storeStrong(local_80,0);
  }
  return;
}

