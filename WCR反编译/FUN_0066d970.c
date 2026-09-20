// FUN_0066d970 @ 0066d970

void FUN_0066d970(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40 [3];
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_00655d64(local_18,"m_greenLabel");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_28;
    if ((uVar1 & 1) == 0) {
      local_1c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_40[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isHidden_026ca768);
      if (((uVar3 & 1) != 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_alpha_026ca4d8),
         param_1 < DAT_02323ec0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,local_40[0],PTR_s_setAlpha__026ca860);
      }
      _objc_storeStrong(local_40,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

