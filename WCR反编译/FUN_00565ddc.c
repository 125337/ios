// FUN_00565ddc @ 00565ddc

void FUN_00565ddc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_f0;
  ulong local_b8;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_38;
  FUN_00566680();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  uVar2 = local_40;
  if (uVar1 == 0) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_isImageComment_026a5160);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isImageComment_026a5160);
      if ((uVar2 & 1) != 0) {
        local_28 = 0;
        local_50 = 1;
        goto LAB_00566190;
      }
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_isEmotionComment_026a5168);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEmotionComment_026a5168);
      if ((uVar2 & 1) != 0) {
        local_28 = 0;
        local_50 = 1;
        goto LAB_00566190;
      }
    }
    uVar2 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) == 0) {
        local_28 = 0;
        local_50 = 1;
      }
      else {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_string_0269cc38);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = local_58;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_f0;
        local_50 = 1;
        _objc_storeStrong(&local_58,0);
      }
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        local_b8 = 0;
      }
      else {
        local_b8 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_b8;
      local_50 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    local_50 = 1;
  }
LAB_00566190:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

