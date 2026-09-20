// FUN_004598e0 @ 004598e0

double FUN_004598e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  double local_c8;
  double local_48;
  ulong local_30;
  double local_28;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  uVar1 = local_20;
  local_28 = param_1;
  _objc_getAssociatedObject(local_20,DAT_026e0390);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_18 = local_28;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_frame_026ca640);
    _CGRectGetMinX(local_48,param_2,param_3,param_4);
    local_48 = param_1 - local_48;
    if (local_48 < 40.0) {
      local_48 = 40.0;
    }
    if (local_28 <= local_48 + 0.5) {
      local_c8 = local_28;
    }
    else {
      local_c8 = local_48;
    }
    local_18 = local_c8;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

