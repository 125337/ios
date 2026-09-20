// clampedInsets:forImageSize: @ 00ebb764

/* Function Stack Size: 0x40 bytes */

UIEdgeInsets
WCRefineBubbleCut::clampedInsets_forImageSize_
          (ID param_1,SEL param_2,UIEdgeInsets param_3,CGSize param_4)

{
  UIEdgeInsets UVar1;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  double in_d4;
  double in_d5;
  double local_190;
  double local_180;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_f8;
  double local_d8;
  double local_b8;
  double local_98;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  if ((in_d4 <= 2.0) || (in_d5 <= 2.0)) {
    dStack_38 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 8);
    local_40 = *(double *)PTR__UIEdgeInsetsZero_02578118;
    dStack_28 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
    local_30 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
  }
  else {
    local_158 = in_d1;
    if (in_d1 <= 0.0) {
      local_158 = 0.0;
    }
    local_98 = local_158;
    local_160 = in_d3;
    if (in_d3 <= 0.0) {
      local_160 = 0.0;
    }
    local_b8 = local_160;
    local_168 = in_d0;
    if (in_d0 <= 0.0) {
      local_168 = 0.0;
    }
    local_d8 = local_168;
    local_170 = in_d2;
    if (in_d2 <= 0.0) {
      local_170 = 0.0;
    }
    local_f8 = local_170;
    if (in_d4 <= local_158 + local_160) {
      local_180 = local_158 + local_160;
      if (local_180 < 1.0) {
        local_180 = 1.0;
      }
      local_180 = (in_d4 - 1.0) / local_180;
      local_98 = local_158 * local_180;
      local_b8 = local_160 * local_180;
    }
    if (in_d5 <= local_168 + local_170) {
      local_190 = local_168 + local_170;
      if (local_190 < 1.0) {
        local_190 = 1.0;
      }
      local_190 = (in_d5 - 1.0) / local_190;
      local_d8 = local_168 * local_190;
      local_f8 = local_170 * local_190;
    }
    FUN_00ebb694(param_1,param_2,param_3.field0_0x0,param_3.field1_0x8,param_3.field2_0x10,
                 param_3.field3_0x18,param_4.field0_0x0,param_4.field1_0x8);
    local_40 = local_d8;
    dStack_38 = local_98;
    local_30 = local_f8;
    dStack_28 = local_b8;
  }
  UVar1.field1_0x8 = dStack_38;
  UVar1.field0_0x0 = local_40;
  UVar1.field2_0x10 = local_30;
  UVar1.field3_0x18 = dStack_28;
  return UVar1;
}

