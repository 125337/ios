// FUN_00102c2c @ 00102c2c

void FUN_00102c2c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  uint local_13c;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  double local_60;
  undefined4 local_54;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_28;
  FUN_000fad94(local_28,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_38 = uVar3;
  FUN_000fad94(local_28,1,0);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar4;
  if ((local_30 == local_38) || (local_30 == uVar4)) {
    _CFAbsoluteTimeGetCurrent(0);
    uVar3 = local_28;
    local_60 = param_1;
    _objc_getAssociatedObject(local_28,DAT_026df8d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    dVar2 = local_60;
    if (((uVar3 & 1) == 0) ||
       (dVar7 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608)
       , DAT_02323c78 <= dVar2 - dVar7)) {
      uVar3 = local_28;
      uVar1 = DAT_026df8d0;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar1,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_30 == local_50[0]) {
        FUN_000ff4a0(local_28,1,1);
        uVar3 = local_28;
        FUN_00100134();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_000fffb4();
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_70 != 0) {
          FUN_0010095c(local_28,local_70,1);
        }
        local_54 = 1;
        _objc_storeStrong(&local_70,0);
      }
      else {
        FUN_000ff4a0(local_28,0,1);
        FUN_000f8ec0(local_28,0);
        FUN_000f902c(local_28);
        FUN_001008e0(local_28);
        uVar3 = local_28;
        uVar1 = DAT_026df8b8;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar1,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar3 = local_28;
        FUN_000f9ad4(local_28,"m_delegate");
        _objc_retainAutoreleasedReturnValue();
        local_13c = 0;
        local_78 = uVar3;
        if (uVar3 != 0) {
          pcVar6 = &cf_hasDownMoreMsg;
          _NSSelectorFromString();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar6);
          uVar4 = local_78;
          local_13c = 0;
          if ((uVar3 & 1) != 0) {
            pcVar6 = &cf_hasDownMoreMsg;
            _NSSelectorFromString();
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,pcVar6);
            local_13c = (uint)uVar4;
          }
        }
        if ((local_13c & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ScrollToBottomAnimated__0269eb18,1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_onPositionModeChangeTo_Animated__0269eb00,2,1);
        }
        uVar3 = local_28;
        FUN_00100134();
        _objc_retainAutoreleasedReturnValue();
        FUN_00101264();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(&local_78,0);
        local_54 = 0;
      }
    }
    else {
      local_54 = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  else {
    local_54 = 1;
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

