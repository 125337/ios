// pointIsInCardEdgeActivationZone: @ 01e75ba8

/* Function Stack Size: 0x20 bytes */

bool WCRefineToDoCardView::pointIsInCardEdgeActivationZone_(ID param_1,SEL param_2,CGPoint param_3)

{
  double in_d0;
  double dVar1;
  double dVar2;
  double in_d1;
  double dVar3;
  double in_d3;
  byte local_11;
  
  dVar2 = DAT_02323c68;
  dVar3 = DAT_02323c68;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_cardContainer_026be658,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((dVar3 <= 1.0) || (in_d3 <= 1.0)) {
    local_11 = 0;
  }
  else {
    dVar1 = dVar3 * dVar2;
    dVar2 = in_d3 * dVar2;
    if ((in_d0 <= dVar1) || (dVar3 - dVar1 <= in_d0)) {
      local_11 = 1;
    }
    else if ((in_d1 <= dVar2) || (in_d3 - dVar2 <= in_d1)) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  return (uint)local_11;
}

