// handleExpandedPan: @ 00904450

/* Function Stack Size: 0x18 bytes */

void LogFloatingBall::handleExpandedPan_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentState_026a9fe0);
  if (IVar1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_translationInView__026cabb0,local_28);
    lVar2 = local_38;
    local_190 = in_d0;
    local_1a0 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar2 == 2) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedView_026a9f60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar3 = in_d2;
      dVar4 = in_d3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_190 = local_190 + in_d0;
      local_1a0 = local_1a0 + in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      dVar3 = (dVar3 - in_d2) - 8.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      dVar4 = (dVar4 - in_d3) - 20.0;
      if (dVar3 < local_190) {
        local_190 = dVar3;
      }
      if (local_190 <= 8.0) {
        local_198 = 8.0;
      }
      else {
        local_198 = local_190;
      }
      if (dVar4 < local_1a0) {
        local_1a0 = dVar4;
      }
      if (local_1a0 <= 50.0) {
        local_1a8 = 50.0;
      }
      else {
        local_1a8 = local_1a0;
      }
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedView_026a9f60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_198,local_1a8,in_d2,in_d3);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGPointZero_025782e0,
                 *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),local_38,
                 PTR_s_setTranslation_inView__026a9fe8,local_28);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

