// FUN_001fb15c @ 001fb15c

void FUN_001fb15c(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_38;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  local_21 = param_2;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      FUN_001fb62c(local_20,"m_timeLabel");
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = local_20;
        FUN_001fb62c(local_20,"_m_timeLabel");
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        local_40 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_40;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar3 = local_40;
      if ((uVar2 & 1) == 0) {
        if ((local_21 & 1) == 0) {
          local_18 = 0;
        }
        else {
          uVar2 = local_20;
          FUN_001fd740();
          _objc_retainAutoreleasedReturnValue();
          local_18 = uVar2;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
      goto LAB_001fb3d0;
    }
  }
  local_18 = 0;
  local_38 = 1;
LAB_001fb3d0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

