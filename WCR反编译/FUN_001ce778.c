// FUN_001ce778 @ 001ce778

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001ce778(double param_1,undefined8 param_2,double param_3,double param_4,undefined *param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  double local_108;
  undefined *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_90;
  undefined *local_88;
  double local_80;
  undefined8 uStack_78;
  double local_70;
  double dStack_68;
  undefined8 local_58;
  undefined *local_50;
  double local_48;
  undefined8 uStack_40;
  double local_38;
  double dStack_30;
  undefined *local_28;
  
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  dStack_30 = param_4;
  FUN_001e672c();
  if (((ulong)param_5 & 1) == 0) {
    uStack_78 = uStack_40;
    local_80 = local_48;
    dStack_68 = dStack_30;
    local_70 = local_38;
    puVar1 = local_50;
    (*DAT_028c8f50)(local_48,uStack_40,local_38,dStack_30,local_50,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar1;
    FUN_001d597c();
    local_b0 = local_38;
    local_b8 = dStack_30;
    if (dStack_30 <= local_38) {
      local_108 = dStack_30;
    }
    else {
      local_108 = local_38;
    }
    local_c0 = local_108;
    local_a8 = local_108 * 0.5;
    local_90 = param_1;
    if (local_a8 < param_1) {
      local_90 = local_a8;
    }
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,uStack_40,local_38,dStack_30,local_90,
               PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGPath_026ca478);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setPath__026caa08,puVar1);
    puVar1 = local_88;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_88,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

