// FUN_0055b930 @ 0055b930

byte FUN_0055b930(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar1 = local_30;
  if ((uVar3 & 1) == 0) {
    local_11 = 1;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_minimumPressDuration_026a3e40);
    if (ABS(param_1 - 0.5) <= DAT_02323d38) {
      uVar3 = local_38;
      FUN_00567d54(local_38,local_20);
      if ((uVar3 & 1) == 0) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 1;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

