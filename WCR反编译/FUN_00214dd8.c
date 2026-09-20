// FUN_00214dd8 @ 00214dd8

double FUN_00214dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double local_120;
  double local_90;
  ulong local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_28 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    uVar2 = local_30;
    dVar3 = 1.7976931348623157e+308;
    FUN_001ebe58();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_sizeThatFits__0269ec10);
    local_90 = (double)(long)dVar3;
    if (local_90 < 1.0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_font_0269ea00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = (double)(long)local_90;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_90 <= 0.0) {
      local_120 = 0.0;
    }
    else {
      local_120 = local_90;
    }
    local_28 = local_120;
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

