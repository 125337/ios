// bubbleFrame @ 01875fac

/* Function Stack Size: 0x10 bytes */

CGRect WCRBubbleCutGuideView::bubbleFrame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d2;
  double in_d3;
  double local_1f8;
  double local_1d8;
  double local_1d0;
  ID local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bubbleView_026a8058);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_58 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
    dVar4 = 1.0;
    if ((1.0 <= in_d0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00), 1.0 <= dVar4)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      local_1d0 = in_d2 - 32.0;
      if (local_1d0 <= 1.0) {
        local_1d0 = 1.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      local_1d8 = in_d3 - 32.0;
      if (local_1d8 <= 1.0) {
        local_1d8 = 1.0;
      }
      local_1f8 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
      local_1d0 = local_1d0 / local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
      local_1f8 = local_1d8 / local_1f8;
      if (local_1d0 < local_1f8) {
        local_1f8 = local_1d0;
      }
      dVar4 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
      dVar4 = dVar4 * local_1f8;
      dVar5 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
      dVar5 = dVar5 * local_1f8;
      FUN_018763dc();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      dVar3 = (local_1f8 - dVar4) * 0.5;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      dVar6 = (in_d3 - dVar5) * 0.5;
      FUN_01876408();
      local_40 = dVar3;
      dStack_38 = dVar6;
      local_30 = dVar4;
      dStack_28 = dVar5;
      goto LAB_018763b0;
    }
  }
  local_40 = *(double *)PTR__CGRectZero_025782f0;
  dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
  local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
  dStack_28 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
LAB_018763b0:
  _objc_storeStrong(&local_58,0);
  CVar1.field0_0x0.field1_0x8 = dStack_38;
  CVar1.field0_0x0.field0_0x0 = local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = dStack_28;
  return CVar1;
}

