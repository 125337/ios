// FUN_008584c8 @ 008584c8

undefined1  [16] FUN_008584c8(double param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double local_178;
  double local_168;
  double local_160;
  double local_150;
  double local_110;
  bool local_a9;
  long local_a8;
  long local_38;
  long local_30;
  long lStack_28;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if (local_38 == 0) {
    local_30 = *(long *)PTR__CGSizeZero_025782f8;
    lStack_28 = *(long *)(PTR__CGSizeZero_025782f8 + 8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNumberOfLines__026ca9d8,param_3);
    uVar2 = 4;
    if (param_3 != 1) {
      uVar2 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLineBreakMode__026ca988,uVar2);
    lVar3 = local_38;
    local_110 = param_1;
    if (param_1 < 1.0) {
      local_110 = 1.0;
    }
    local_178 = 1.7976931348623157e+308;
    FUN_0083b734();
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_sizeThatFits__0269ec10);
    lVar3 = local_38;
    local_150 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a9 = local_150 <= 0.0;
    if (local_a9) {
      local_150 = 18.0;
    }
    else {
      local_a8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_font_0269ea00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_a9 = !local_a9;
    if (local_a9) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (param_3 == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x3ff3333333333333;
      local_150 = local_150 * 1.2;
    }
    local_160 = (double)(long)local_150;
    local_168 = param_1;
    if (local_110 < param_1) {
      local_168 = local_110;
    }
    lVar3 = (long)local_168;
    if (local_178 < local_160) {
      local_178 = local_160;
    }
    lVar4 = (long)local_178;
    FUN_0083b734(uVar2);
    local_30 = lVar3;
    lStack_28 = lVar4;
  }
  _objc_storeStrong(&local_38,0);
  auVar1._8_8_ = lStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

