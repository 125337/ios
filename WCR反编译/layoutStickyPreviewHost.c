// layoutStickyPreviewHost @ 01ebcca4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::layoutStickyPreviewHost(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar6;
  uint local_e4;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
  _objc_retainAutoreleasedReturnValue();
  local_e4 = 1;
  if (IVar1 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e4 = (uint)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_e4 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    uVar4 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewTopOffset_026b7f70);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    uVar5 = 0;
    uVar6 = in_d3;
    FUN_01ebb220();
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar4,in_d2,uVar6);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d3,param_1,PTR_s_applyStickyPreviewTopInset_reaso_026c7868,&cf_previewVisible);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0,param_1,PTR_s_applyStickyPreviewTopInset_reaso_026c7868,&cf_previewHidden);
  }
  return;
}

