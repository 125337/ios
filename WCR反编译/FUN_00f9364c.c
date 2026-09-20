// FUN_00f9364c @ 00f9364c

double FUN_00f9364c(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_120;
  double local_118;
  double local_110;
  
  FUN_00f93908();
  FUN_00f93908();
  FUN_00f93908();
  local_110 = DAT_0232c510 * param_2 + param_1 * DAT_0232c508 + param_3 * DAT_0232c500;
  local_118 = DAT_0232c4f8 * param_2 + param_1 * DAT_0232c4f0 + param_3 * DAT_0232c4e8;
  local_120 = DAT_0232c4e0 * param_2 + param_1 * DAT_0232c4d8 + param_3 * DAT_0232c4d0;
  if (local_110 < 0.0) {
    local_110 = 0.0;
  }
  _cbrt();
  if (local_118 < 0.0) {
    local_118 = 0.0;
  }
  _cbrt();
  if (local_120 < 0.0) {
    local_120 = 0.0;
  }
  _cbrt();
  dVar5 = DAT_0232c4c8 * local_118;
  dVar1 = local_110 * DAT_0232c4c0;
  dVar2 = local_120 * DAT_0232c4b8;
  dVar3 = (DAT_0232c4a8 * local_110 - DAT_0232c4b0 * local_118) + local_120 * DAT_0232c4a0;
  dVar4 = DAT_0232c498 * local_118 + local_110 * DAT_0232c490 + local_120 * DAT_0232c488;
  _hypot(dVar3,dVar4);
  _atan2(dVar4,dVar3);
  return dVar5 + dVar1 + dVar2;
}

