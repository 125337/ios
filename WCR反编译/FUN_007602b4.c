// FUN_007602b4 @ 007602b4

void FUN_007602b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_280;
  uint local_20c;
  cfstringStruct *local_200;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1a8;
  cfstringStruct *local_178;
  cfstringStruct *local_118;
  byte local_10a;
  byte local_109;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_8a;
  byte local_89;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  undefined1 local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  pcVar3 = local_30;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_28;
    FUN_007636b0(local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_3c = 1;
    }
    else {
      pcVar3 = local_48;
      FUN_0075ede8();
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_30;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_178 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_178;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar3 = local_30;
      _objc_getAssociatedObject(local_30,DAT_026f4610);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_48;
      local_68 = pcVar3;
      FUN_0076423c(local_48,local_60,local_58);
      local_69 = SUB81(pcVar4,0);
      if ((local_68 == (cfstringStruct *)0x0) || (((ulong)pcVar4 & 1) != 0)) {
        _objc_storeStrong(&local_68,local_60);
        _objc_setAssociatedObject(local_30,DAT_026f4610,local_68,3);
      }
      pcVar4 = local_30;
      _objc_getAssociatedObject(local_30,DAT_026f4618);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_30;
      uVar2 = DAT_026f4618;
      if (pcVar4 == (cfstringStruct *)0x0) {
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textColor_0269f098);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 0;
        local_1a8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_1a8 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_1a8;
        }
        local_79 = pcVar4 == (cfstringStruct *)0x0;
        _objc_setAssociatedObject(pcVar3,uVar2,local_1a8,1);
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar3 = local_30;
        uVar2 = DAT_026f4620;
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_font_0269ea00);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 0;
        local_1c8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_1c8 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          local_88 = local_1c8;
        }
        local_89 = pcVar4 == (cfstringStruct *)0x0;
        _objc_setAssociatedObject(pcVar3,uVar2,local_1c8,1);
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar3 = local_30;
        uVar2 = DAT_026f4628;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textAlignment_026a66e8);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(pcVar3,uVar2,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_8a = (byte)pcVar4;
      local_a1 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_200 = local_68;
      }
      else {
        local_200 = local_48;
        FUN_00762810(local_48,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_200;
      }
      local_a1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_200;
      if ((local_a1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      FUN_007645b0(local_30,local_98);
      pcVar3 = local_30;
      _objc_getAssociatedObject(local_30,DAT_026f4620);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_c1 = 0;
      local_20c = 0;
      local_b8 = pcVar3;
      if ((local_8a & 1) != 0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_bold);
        _objc_retainAutoreleasedReturnValue();
        local_c1 = 1;
        local_c0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_20c = (uint)pcVar3;
      }
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      if ((local_20c & 1) != 0) {
        pcVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontDescriptor_026a1d50);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontDescriptor_026a1d50);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar7 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_fontDescriptorWithSymbolicTraits_026a7d88,(uint)pcVar6 | 2);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar4 = local_d0;
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
        if (local_d0 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pointSize_026a1d68);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_fontWithDescriptor_size__026a1d60,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_b8;
          local_b8 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        _objc_storeStrong(&local_d0,0);
      }
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_font_0269ea00);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (((ulong)pcVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFont__026ca958,local_b8);
      }
      FUN_007646a0(local_28,local_30,local_48,local_50);
      if ((local_8a & 1) == 0) {
        pcVar3 = local_30;
        _objc_getAssociatedObject(local_30,DAT_026f4618);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar3;
        FUN_00764ce4(local_30,pcVar3,0);
        local_3c = 1;
        _objc_storeStrong(&local_d8,0);
      }
      else {
        pcVar3 = local_30;
        FUN_00761e68();
        local_d9 = (byte)pcVar3;
        pcVar3 = (cfstringStruct *)PTR_WCRefineGradientPalette_026ce910;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGradientPalette_026ce910,PTR_s_colorsFromStyle_dark__026a7d68,
                   local_50,local_d9 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_f9 = 0;
        local_109 = 0;
        local_280 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          pcVar4 = &cf_darkColor;
          if ((local_d9 & 1) == 0) {
            pcVar4 = &cf_lightColor;
          }
          local_280 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_objectForKeyedSubscript__0269d098,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 1;
          local_f8 = local_280;
          _WCRefineSpecialTextColor();
          _objc_retainAutoreleasedReturnValue();
          local_109 = 1;
          local_108 = local_280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = local_280;
        if ((local_109 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_108);
        }
        if ((local_f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradient);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_f0;
        local_10a = (byte)pcVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = pcVar3;
        if ((local_10a & 1) != 0) {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientDirection);
          _objc_retainAutoreleasedReturnValue();
          local_2c0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (5 < (long)local_2c0) {
            local_2c0 = (cfstringStruct *)((long)&MACH_HEADER.cputype + 1);
          }
          if ((long)local_2c0 < 1) {
            local_2c8 = (cfstringStruct *)0x0;
          }
          else {
            local_2c8 = local_2c0;
          }
          pcVar4 = local_30;
          FUN_00761f3c(local_30,local_e8,local_2c8);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_118;
          local_118 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        FUN_00764ce4(local_30,local_118,local_10a & 1);
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_f0,0);
        _objc_storeStrong(&local_e8,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

