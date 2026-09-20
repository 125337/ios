// FUN_001bbd44 @ 001bbd44

void FUN_001bbd44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    (*DAT_028c8b20)(local_18,local_20,0);
    local_38 = 1;
    goto LAB_001bc020;
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_d__);
  if ((uVar1 & 1) == 0) {
LAB_001bbfec:
    (*DAT_028c8b20)(local_18,local_20,local_28);
    local_38 = 0;
  }
  else {
    FUN_001eb250();
    if ((uVar1 & 1) == 0) goto LAB_001bbfec;
    FUN_001eb2ec();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    if (uVar1 == 0) {
LAB_001bbfa4:
      (*DAT_028c8b20)(local_18,local_20,local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if (uVar1 == 0) goto LAB_001bbfa4;
      puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
      _objc_alloc();
      uVar1 = local_48;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithString_attributes__026a02b0,uVar1);
      local_50 = puVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*DAT_028c8b20)(local_18,local_20,local_50);
      _objc_storeStrong(&local_50,0);
    }
    local_38 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_001bc020:
  _objc_storeStrong(&local_28,0);
  return;
}

