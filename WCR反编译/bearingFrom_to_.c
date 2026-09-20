// bearingFrom:to: @ 00f5b050

/* Function Stack Size: 0x30 bytes */

double WCRefineFakeLocationEngine::bearingFrom_to_
                 (ID param_1,SEL param_2,CLLocationCoordinate2D param_3,
                 CLLocationCoordinate2D param_4)

{
  double in_d0;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_70;
  
  local_70 = DAT_02323cb0;
  dVar1 = (in_d0 * DAT_02323cb0) / 180.0;
  dVar2 = (in_d2 * DAT_02323cb0) / 180.0;
  dVar3 = ((in_d3 - in_d1) * DAT_02323cb0) / 180.0;
  dVar5 = dVar3;
  _sin(param_1,param_2,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,param_4.field1_0x8);
  dVar4 = dVar2;
  _cos();
  dVar5 = dVar5 * dVar4;
  dVar4 = dVar1;
  _cos();
  dVar6 = dVar2;
  _sin();
  _sin();
  _cos();
  _cos();
  _atan2(dVar5,dVar4 * dVar6 - dVar1 * dVar2 * dVar3);
  local_70 = (dVar5 * 180.0) / local_70;
  if (local_70 < 0.0) {
    local_70 = local_70 + 360.0;
  }
  return local_70;
}

