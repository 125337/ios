// FUN_010e6390 @ 010e6390

byte FUN_010e6390(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  ulong local_38;
  undefined4 local_2c;
  double local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (local_28 < 1.0)) {
    local_11 = false;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    dVar3 = local_28;
    _objc_getAssociatedObject(local_20,DAT_0280e1c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_11 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_frame_026ca640);
      dVar4 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
      local_11 = ABS(dVar3 - (dVar4 + local_28)) <= 1.5;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

