// FUN_006bb580 @ 006bb580

byte FUN_006bb580(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_e4;
  ulong local_a8;
  ulong local_98;
  ulong local_88;
  ulong local_78;
  ulong local_68;
  ulong local_58;
  ulong local_48;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar9 = local_30;
  puVar8 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar8);
  if ((uVar9 & 1) == 0) {
    local_21 = 0;
  }
  else {
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    uVar9 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    FUN_006bd9e8();
    local_e4 = 1;
    if ((uVar10 & 1) == 0) {
      local_48 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityValue_026a68d0);
      _objc_retainAutoreleasedReturnValue();
      bVar7 = true;
      uVar10 = local_48;
      FUN_006bd9e8();
      local_e4 = 1;
      if ((uVar10 & 1) == 0) {
        local_58 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityIdentifier_0269ec20);
        _objc_retainAutoreleasedReturnValue();
        bVar6 = true;
        uVar10 = local_58;
        FUN_006bd9e8();
        local_e4 = 1;
        if ((uVar10 & 1) == 0) {
          local_68 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_titleForState__026a2208,0);
          _objc_retainAutoreleasedReturnValue();
          bVar5 = true;
          uVar10 = local_68;
          FUN_006bd9e8();
          local_e4 = 1;
          if ((uVar10 & 1) == 0) {
            local_78 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_titleForState__026a2208,1);
            _objc_retainAutoreleasedReturnValue();
            bVar4 = true;
            uVar10 = local_78;
            FUN_006bd9e8();
            local_e4 = 1;
            if ((uVar10 & 1) == 0) {
              local_88 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentTitle_026a2200);
              _objc_retainAutoreleasedReturnValue();
              bVar3 = true;
              uVar10 = local_88;
              FUN_006bd9e8();
              local_e4 = 1;
              if ((uVar10 & 1) == 0) {
                local_98 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_titleLabel_026caba0);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = true;
                local_a8 = local_98;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                bVar1 = true;
                uVar10 = local_a8;
                FUN_006bd9e8();
                local_e4 = 1;
                if ((uVar10 & 1) == 0) {
                  uVar10 = local_30;
                  FUN_006bdb78();
                  local_e4 = (byte)uVar10;
                }
              }
            }
          }
        }
      }
    }
    local_21 = local_e4 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar5) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar6) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar7) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(uVar9);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

