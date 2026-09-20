// nearestEdgeAtPoint: @ 01876c3c

/* Function Stack Size: 0x20 bytes */

long_long WCRBubbleCutGuideView::nearestEdgeAtPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  double in_d0;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  long_long local_28;
  
  IVar1 = param_1;
  dVar2 = in_d0;
  dVar8 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_bubbleFrame_026b6d30,param_3.field0_0x0,param_3.field1_0x8);
  dVar3 = dVar2;
  _CGRectIsEmpty(dVar2,dVar8,in_d2,in_d3);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayScale_026b6d38);
    dVar6 = dVar2;
    _CGRectGetMinY();
    dVar7 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_insets_026b6d40);
    dVar4 = dVar2;
    _CGRectGetMaxY();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_insets_026b6d40);
    dVar5 = dVar2;
    _CGRectGetMinX();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_insets_026b6d40);
    _CGRectGetMaxX();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_insets_026b6d40);
    dVar6 = ABS(in_d1 - (dVar6 + dVar3 * dVar7));
    dVar7 = ABS(in_d1 - (dVar4 - dVar3 * in_d2));
    dVar8 = ABS(in_d0 - (dVar5 + dVar3 * dVar8));
    local_1b8 = ABS(in_d0 - (dVar2 - dVar3 * in_d3));
    local_1b0 = dVar7;
    if (dVar6 < dVar7) {
      local_1b0 = dVar6;
    }
    if (dVar8 < local_1b8) {
      local_1b8 = dVar8;
    }
    if (local_1b8 <= local_1b0) {
      local_1c0 = local_1b8;
    }
    else {
      local_1c0 = local_1b0;
    }
    if (local_1c0 <= 28.0) {
      if (local_1c0 == dVar6) {
        local_28 = 0;
      }
      else if (local_1c0 == dVar7) {
        local_28 = 2;
      }
      else if (local_1c0 == dVar8) {
        local_28 = 1;
      }
      else {
        local_28 = 3;
      }
    }
    else {
      local_28 = 0xffffffffffffffff;
    }
  }
  else {
    local_28 = 0xffffffffffffffff;
  }
  return local_28;
}

