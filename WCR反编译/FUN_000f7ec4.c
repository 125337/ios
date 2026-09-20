// FUN_000f7ec4 @ 000f7ec4

void FUN_000f7ec4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_fc;
  undefined *local_f0;
  ulong local_98;
  undefined *local_78;
  undefined *local_68;
  ulong local_58;
  byte local_49;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar5 = local_28;
  (*DAT_028c8418)(local_28,local_30,local_38);
  _WCRefineChatPositionFeatureAllowed();
  uVar6 = local_38;
  if ((uVar5 & 1) == 0) {
    local_48 = 1;
  }
  else {
    uVar5 = local_28;
    FUN_000f9998();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar6 == uVar5) {
      uVar6 = local_38;
      FUN_000f96f8(0);
      local_49 = (byte)uVar6;
      uVar6 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026df8c8);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      local_58 = uVar6;
      if (uVar6 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_boolValue_026ca540);
        bVar4 = (uint)uVar6 != (local_49 & 1);
      }
      uVar6 = local_28;
      uVar2 = DAT_026df8c8;
      if (bVar4) {
        bVar1 = (local_49 & 1) == 0;
        local_f0 = PTR__OBJC_CLASS___NSNumber_026ce038;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_f0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          local_68 = local_f0;
        }
        _objc_setAssociatedObject(uVar6,uVar2,local_f0,1);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
      }
      uVar3 = DAT_028c8458;
      if ((local_49 & 1) == 0) {
        if (bVar4) {
          uVar6 = local_28;
          FUN_000fa5b4();
          if ((uVar6 & 1) != 0) {
            FUN_000f8ec0(local_28,0);
          }
          FUN_000ff4a0(local_28,0,1);
          if (((DAT_028c8458 & 0x100) != 0) &&
             ((uVar6 = local_38,
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDragging_0269ddf8),
              (uVar6 & 1) != 0 ||
              (uVar6 = local_38,
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDecelerating_0269e888),
              (uVar6 & 1) != 0)))) {
            uVar6 = local_28;
            FUN_00100134();
            _objc_retainAutoreleasedReturnValue();
            FUN_00101264();
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          local_48 = 0;
        }
        else {
          local_48 = 1;
        }
      }
      else {
        uVar6 = (ulong)DAT_028c8458;
        FUN_000fa82c();
        bVar4 = false;
        local_fc = 0;
        if (((uVar6 & 1) == 0) && (((uVar3 & 1) != 0 || (local_fc = 0, (uVar3 & 0x100) != 0)))) {
          local_98 = local_28;
          FUN_000fad94(local_28,0,0);
          _objc_retainAutoreleasedReturnValue();
          bVar4 = true;
          uVar6 = local_98;
          FUN_000faf34();
          local_fc = (uint)uVar6 ^ 1;
        }
        if (bVar4) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if ((local_fc & 1) != 0) {
          FUN_000fa318(local_28,0);
        }
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDragging_0269ddf8);
        if ((((uVar6 & 1) != 0) && ((uVar3 & 1) != 0)) &&
           (uVar6 = local_28, FUN_000fa5b4(), (uVar6 & 1) == 0)) {
          FUN_000f8ec0(local_28,1);
        }
        local_48 = 1;
      }
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

