// FUN_003f8fe0 @ 003f8fe0

byte FUN_003f8fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_90;
  int local_34;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  do {
    uVar2 = local_30;
    if (local_30 == 0 || local_30 == local_28) {
      local_34 = 2;
LAB_003f924c:
      _objc_storeStrong(&local_30,0);
      uVar2 = local_28;
      local_34 = local_34 + -2;
      if (local_34 == 0) {
        puVar1 = PTR__OBJC_CLASS___UIControl_026ce2d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        local_34 = 1;
        local_11 = (byte)uVar2 & 1;
      }
      _objc_storeStrong(local_34,&local_28);
      _objc_storeStrong(&local_20,0);
      return local_11 & 1;
    }
    puVar1 = PTR__OBJC_CLASS___UIControl_026ce2d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_90 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = (uint)uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((local_90 & 1) != 0) {
      local_11 = 1;
      local_34 = 1;
      goto LAB_003f924c;
    }
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

