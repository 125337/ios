// FUN_002e6990 @ 002e6990

void FUN_002e6990(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  double local_b0;
  ulong local_58;
  uint local_50;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_4;
  uStack_18 = param_5;
  _objc_storeStrong(&local_30);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_40 = param_2;
  local_38 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_50 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pointSize_026a1d68);
    if (param_1 <= 0.0) {
      local_b0 = 15.0;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pointSize_026a1d68);
      local_b0 = param_1;
    }
    FUN_002e4a24(local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_addAttribute_value_range__026a1d88,
                 *(undefined8 *)PTR__NSFontAttributeName_02578068,uVar2,local_20,uStack_18);
      **(long **)(param_2 + 0x28) = **(long **)(param_2 + 0x28) + 1;
    }
    local_50 = (uint)(uVar2 == 0);
    _objc_storeStrong(&local_58,0);
    if (local_50 == 0) {
      local_50 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

