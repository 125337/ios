// FUN_001dad4c @ 001dad4c

long FUN_001dad4c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  long lVar1;
  double local_170;
  double local_160;
  double local_150;
  double local_140;
  long local_88;
  double local_60;
  double dStack_58;
  long local_40;
  double local_38;
  double local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_6);
  if (local_28 == 0) {
    dStack_58 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_60 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_60 = param_3;
    dStack_58 = param_4;
  }
  if (local_60 <= 0.0) {
    local_140 = 0.0;
  }
  else {
    local_140 = local_60;
  }
  if (dStack_58 <= 0.0) {
    local_150 = 0.0;
  }
  else {
    local_150 = dStack_58;
  }
  if (local_30 <= 0.0) {
    local_160 = 0.0;
  }
  else {
    local_160 = local_30;
  }
  if (local_38 <= 0.0) {
    local_170 = 0.0;
  }
  else {
    local_170 = local_38;
  }
  local_88 = (((param_7 * 0x1f + (long)(double)(long)(local_140 * 2.0)) * 0x1f +
              (long)(double)(long)(local_150 * 2.0)) * 0x1f + (long)(double)(long)(local_160 * 10.0)
             ) * 0x1f + (long)(double)(long)(local_170 * 10.0);
  if (0.0 < local_38) {
    lVar1 = local_40;
    FUN_001db430();
    local_88 = local_88 * 0x1f + lVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return local_88;
}

