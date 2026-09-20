// FUN_01da4938 @ 01da4938

double FUN_01da4938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double local_a8;
  double local_a0;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  uVar3 = local_20;
  if (local_20 == 0) {
    local_18 = 0.0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_20;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setNumberOfLines__026ca9d8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sizeToFit_0269ec08);
      _objc_storeStrong(&local_30,0);
    }
    dVar4 = 88.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar4,param_2,param_3,param_4);
    local_a0 = (double)(long)dVar4;
    if (88.0 < local_a0) {
      local_a0 = 88.0;
    }
    if (local_a0 <= 12.0) {
      local_a8 = 12.0;
    }
    else {
      local_a8 = local_a0;
    }
    local_18 = local_a8;
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  return local_18;
}

