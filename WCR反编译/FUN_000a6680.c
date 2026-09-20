// FUN_000a6680 @ 000a6680

ulong FUN_000a6680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0xffffffffffffffff;
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UITabBar_026ce260;
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_38;
    if ((uVar3 & 1) == 0) {
      local_18 = 0xffffffffffffffff;
      local_30 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_locationInView__026ca798,uVar2);
      uVar2 = local_40;
      FUN_000b11e8(param_1,param_2);
      local_30 = 1;
      local_18 = uVar2;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

