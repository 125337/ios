// FUN_00843e24 @ 00843e24

byte FUN_00843e24(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    FUN_00831270();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    if (uVar2 - local_20 == 0) {
      local_11 = 1;
    }
    else {
      uVar3 = local_20;
      FUN_00843f9c(uVar2 - local_20);
      local_11 = (byte)uVar3 & 1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_11 = 1;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

