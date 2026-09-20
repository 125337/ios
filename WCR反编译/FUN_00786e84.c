// FUN_00786e84 @ 00786e84

void FUN_00786e84(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  if (((local_20 == 0) || (local_28 == 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_28),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
    local_40 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar1 = local_48;
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
      if ((local_30 == 0) || (FUN_00787a20(uVar1,local_30), (uVar1 & 1) != 0)) {
        uVar1 = local_50;
        FUN_00785dec();
        local_18 = local_50;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          local_18 = 0;
        }
      }
      else {
        local_18 = 0;
      }
      local_40 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

