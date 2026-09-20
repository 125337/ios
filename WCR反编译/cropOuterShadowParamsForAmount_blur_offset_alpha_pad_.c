// cropOuterShadowParamsForAmount:blur:offset:alpha:pad: @ 01647a10

/* Function Stack Size: 0x38 bytes */

void WCRSuperFloatCropViewController::cropOuterShadowParamsForAmount_blur_offset_alpha_pad_
               (ID param_1,SEL param_2,double param_3,double *param_4,CGSize *param_5,
               double *param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_128;
  double local_120;
  double local_110;
  double local_108;
  
  local_108 = param_3;
  if (24.0 < param_3) {
    local_108 = 24.0;
  }
  if (local_108 <= 0.0) {
    local_110 = 0.0;
  }
  else {
    local_110 = local_108;
  }
  dVar2 = local_110 * 0.7 + 18.0;
  dVar3 = 0.0;
  dVar1 = 1.2;
  FUN_0163f628();
  dVar4 = DAT_02323cc0 + (local_110 / 24.0) * DAT_02323c68;
  local_120 = ABS(dVar3);
  if (local_120 < ABS(dVar1)) {
    local_120 = ABS(dVar1);
  }
  local_128 = (DAT_02339780 * dVar2 + 16.0 + local_120) * 0.6666666666666666;
  if (local_128 <= 21.333333333333332) {
    local_128 = 21.333333333333332;
  }
  if (param_4 != (double *)0x0) {
    *param_4 = dVar2;
  }
  if (param_5 != (CGSize *)0x0) {
    param_5->field1_0x8 = dVar1;
    param_5->field0_0x0 = dVar3;
  }
  if (param_6 != (double *)0x0) {
    *param_6 = dVar4;
  }
  if (param_7 != (double *)0x0) {
    *param_7 = local_128;
  }
  return;
}

