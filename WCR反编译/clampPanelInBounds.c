// clampPanelInBounds @ 00fd9ef0

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::clampPanelInBounds(ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d0;
  double dVar2;
  undefined8 in_d1;
  undefined8 uVar3;
  double in_d2;
  double dVar4;
  double in_d3;
  double dVar5;
  double local_1c8;
  double local_1c0;
  double local_1a8;
  double local_1a0;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  IVar1 = param_1;
  dVar4 = in_d2;
  dVar5 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1);
  uVar3 = 0x3fe0000000000000;
  in_d0 = in_d0 * 0.5;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  dVar2 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetHeight(dVar2,uVar3,dVar4,dVar5);
  dVar2 = dVar2 * 0.5;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  local_1a0 = dVar2;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_1a0 < in_d0 + 8.0) {
    local_1a0 = in_d0 + 8.0;
  }
  local_1c0 = (in_d2 - in_d0) - 8.0;
  local_1a8 = local_1c0;
  if (local_1a0 < local_1c0) {
    local_1a8 = local_1a0;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_1c0 < dVar2 + 52.0) {
    local_1c0 = dVar2 + 52.0;
  }
  local_1c8 = (in_d3 - dVar2) - 20.0;
  if (local_1c0 < local_1c8) {
    local_1c8 = local_1c0;
  }
  FUN_00fd86b8();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,local_1c8);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

