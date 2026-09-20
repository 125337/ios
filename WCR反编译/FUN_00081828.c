// FUN_00081828 @ 00081828

byte FUN_00081828(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_68;
  undefined4 local_60;
  ulong local_50;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar1 = local_30;
  local_48 = param_7;
  local_39 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf__borderImageView);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_borderImageView);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_50;
    local_50 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_50;
  if (local_50 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar2 = local_50;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
      if ((param_3 <= 0.0) || (param_1 <= 0.0)) {
        local_21 = 1;
      }
      else {
        FUN_00081fbc(local_68,local_38,local_39 & 1,local_48,0);
        local_21 = 0;
      }
      local_60 = 1;
      _objc_storeStrong(&local_68,0);
      goto LAB_00081b1c;
    }
  }
  local_21 = 0;
  local_60 = 1;
LAB_00081b1c:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

