// FUN_0075f4f8 @ 0075f4f8

void FUN_0075f4f8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_1a0;
  cfstringStruct *local_180;
  cfstringStruct *local_168;
  uint local_14c;
  uint local_13c;
  uint local_114;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_82;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  byte local_62;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  if ((local_28 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_28, FUN_00760f58(), ((ulong)pcVar2 & 1) == 0)) {
    local_2c = 1;
  }
  else {
    pcVar2 = _WCRefineTextStyleVoicePlaceholder;
    FUN_0075ede8();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_38 = pcVar2;
    FUN_00761578();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_40 = pcVar3;
    FUN_0076191c(local_28,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_48,local_40);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_48);
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,local_48,0);
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 0;
      local_61 = 0;
      local_114 = 0;
      if (pcVar2 != (cfstringStruct *)0x0) {
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_114 = (uint)pcVar3 ^ 1;
      }
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if ((local_114 & 1) != 0) {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_71 = 0;
    local_81 = 0;
    local_13c = 0;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_40;
      FUN_00761ccc();
      pcVar3 = local_40;
      local_14c = 1;
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_168 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_168 = &cf___;
        }
        local_70 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8,local_168);
        pcVar4 = local_48;
        local_14c = 1;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_180 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_180 = &cf___;
          }
          local_80 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isEqualToString__0269ccc8,local_180);
          local_14c = (uint)pcVar4;
        }
      }
      local_13c = local_14c;
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_62 = (byte)local_13c & 1;
    if ((local_13c & 1) == 0) {
      local_2c = 1;
    }
    else {
      pcVar2 = local_28;
      FUN_00761e68();
      local_82 = (byte)pcVar2;
      pcVar2 = (cfstringStruct *)PTR_WCRefineGradientPalette_026ce910;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGradientPalette_026ce910,PTR_s_colorsFromStyle_dark__026a7d68,local_38,
                 local_82 & 1);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 0;
      local_b1 = 0;
      local_1a0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar3 = &cf_darkColor;
        if ((local_82 & 1) == 0) {
          pcVar3 = &cf_lightColor;
        }
        local_1a0 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_a1 = 1;
        local_a0 = local_1a0;
        _WCRefineSpecialTextColor();
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = local_1a0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_1a0;
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_98;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = pcVar2;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradient);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = pcVar3 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (bVar1) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientDirection);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_00761f3c();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_c0;
        local_c0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      else {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      FUN_007626a4(local_28,local_c0,bVar1);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

