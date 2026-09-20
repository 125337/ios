// _WCRefineAdjustWalletBalanceLabelLayout @ 00f14c20

void _WCRefineAdjustWalletBalanceLabelLayout
               (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
               undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uVar5;
  double local_260;
  double local_258;
  double local_250;
  double local_238;
  ulong local_228;
  ulong local_210;
  ulong local_58;
  byte local_49;
  ulong local_48;
  byte local_39;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if ((local_28 == 0) ||
     (uVar2 = local_28, _WCRefineViewIsInsideScrollOrTimeoutNumber(), (uVar2 & 1) != 0)) {
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    _WCRefineResolveWalletBalanceSlotForView();
    if (uVar2 == 1) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 0;
      local_49 = 0;
      local_210 = uVar2;
      if (uVar2 == 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        local_39 = 1;
        local_38 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_228 = uVar3;
        if (uVar3 == 0) {
          local_228 = 0;
        }
        local_210 = local_228;
        local_48 = uVar3;
      }
      _WCRefineTextLooksLikeWalletBalanceAmount();
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      if ((local_39 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_38);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_210 & 1) == 0) {
        local_2c = 1;
      }
      else {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar2;
        while( true ) {
          bVar1 = false;
          if (local_58 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
            bVar1 = param_3 < 120.0;
          }
          if (!bVar1) break;
          uVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_58;
          local_58 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if (local_58 == 0) {
          local_2c = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
          local_238 = (param_3 - 34.0) - 16.0;
          if (local_238 < 1.0) {
            local_238 = 1.0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          uVar2 = local_28;
          dVar4 = local_238;
          FUN_00f15224();
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_sizeThatFits__0269ec10);
          local_250 = (double)(long)dVar4;
          if (local_250 < 1.0) {
            local_250 = 1.0;
          }
          if (local_238 <= local_250) {
            local_258 = local_238;
          }
          else {
            local_258 = local_250;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
          local_260 = (param_3 - 34.0) - local_258;
          uVar5 = 0x4030000000000000;
          if (local_260 < 16.0) {
            local_260 = 16.0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_260,uVar5,local_258,param_4,local_28,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTextAlignment__026caa90,2);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLineBreakMode__026ca988,4);
          local_2c = 0;
        }
        _objc_storeStrong(&local_58,0);
      }
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

