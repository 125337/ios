// FUN_00f8c428 @ 00f8c428

void FUN_00f8c428(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                 double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  
  dVar1 = param_3;
  _cos();
  dVar1 = param_2 * dVar1;
  _sin();
  param_2 = param_2 * param_3;
  dVar2 = param_1 + dVar1 * DAT_0232c480 + param_2 * DAT_0232c478;
  dVar3 = param_1 + dVar1 * DAT_0232c470 + param_2 * DAT_0232c468;
  dVar1 = param_1 + dVar1 * DAT_0232c460 + param_2 * DAT_0232c458;
  dVar2 = dVar2 * dVar2 * dVar2;
  dVar3 = dVar3 * dVar3 * dVar3;
  dVar1 = dVar1 * dVar1 * dVar1;
  local_158 = (DAT_0232c448 * dVar2 - DAT_0232c450 * dVar3) + dVar1 * DAT_0232c440;
  local_168 = DAT_0232c438 * dVar3 + dVar2 * DAT_0232c430 + dVar1 * DAT_0232c428;
  local_178 = (DAT_0232c418 * dVar2 - DAT_0232c420 * dVar3) + dVar1 * DAT_0232c410;
  FUN_00f93a1c();
  if (1.0 < local_158) {
    local_158 = 1.0;
  }
  if (local_158 <= 0.0) {
    local_160 = 0.0;
  }
  else {
    local_160 = local_158;
  }
  *param_4 = local_160;
  FUN_00f93a1c();
  if (1.0 < local_168) {
    local_168 = 1.0;
  }
  if (local_168 <= 0.0) {
    local_170 = 0.0;
  }
  else {
    local_170 = local_168;
  }
  *param_5 = local_170;
  FUN_00f93a1c();
  if (1.0 < local_178) {
    local_178 = 1.0;
  }
  if (local_178 <= 0.0) {
    local_180 = 0.0;
  }
  else {
    local_180 = local_178;
  }
  *param_6 = local_180;
  return;
}

