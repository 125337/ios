// FUN_002e2c40 @ 002e2c40

void FUN_002e2c40(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_ec;
  double local_e0;
  uint local_a4;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48 [3];
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_3;
  (*DAT_028c9910)(local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_a4 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
    FUN_002e4780();
    local_a4 = 1;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_28;
      FUN_002e61ec();
      local_a4 = (uint)uVar3 ^ 1;
    }
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((local_a4 & 1) == 0) {
    uVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_pointSize_026a1d68);
    if (param_1 <= 0.0) {
      local_e0 = 15.0;
    }
    else {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_pointSize_026a1d68);
      local_e0 = param_1;
    }
    FUN_002e4a24(local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_ec = 0;
    local_60 = uVar2;
    if (uVar2 != 0) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_fontName_026a1d48);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_fontName_026a1d48);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
      local_ec = (uint)uVar4 ^ 1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((local_ec & 1) != 0) {
      (*DAT_028c9900)(local_28,PTR_s_setFont__026ca958,local_60);
    }
    uVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_attributedText_0269fcf8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    puVar1 = PTR_s_setAttributedText__026a0000;
    if (uVar3 != 0) {
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_attributedText_0269fcf8);
      _objc_retainAutoreleasedReturnValue();
      FUN_002e28b0(uVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    FUN_002e6764(local_48[0]);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

