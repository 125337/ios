// FUN_007636b0 @ 007636b0

void FUN_007636b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  byte bVar7;
  byte local_1a8;
  cfstringStruct *local_1a0;
  byte local_180;
  byte local_17c;
  uint local_14c;
  uint local_148;
  cfstringStruct *local_140;
  uint local_124;
  cfstringStruct *local_118;
  cfstringStruct *local_f0;
  byte local_e1;
  ulong local_e0;
  byte local_d2;
  byte local_d1;
  cfstringStruct *local_d0;
  byte local_c1;
  ulong local_c0;
  cfstringStruct *local_b8;
  byte local_aa;
  byte local_a9;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  undefined8 local_40;
  cfstringStruct *local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_38;
  local_40 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
  if (((ulong)pcVar1 & 1) != 0) {
    local_28 = (cfstringStruct *)0x0;
    local_44 = 1;
    goto LAB_0076420c;
  }
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_118 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_118 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_118;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_58 = (cfstringStruct *)0x0;
  local_59 = 1;
  uVar2 = local_30;
  FUN_0075f444(local_30,&cf_WCSearchBar);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_30;
    FUN_0075f444(local_30,&cf_MMTransparentButton);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = local_30, FUN_0075f444(local_30,&cf_MMRecordButton), (uVar2 & 1) != 0)) {
      uVar2 = _WCRefineTextStyleVoicePlaceholder;
      FUN_0075ede8();
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar2;
      FUN_007630c0();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_a0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf__);
      local_a9 = 0;
      local_148 = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        uVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
        if (uVar2 != 0) {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_a0);
          local_148 = 1;
          if (((ulong)pcVar1 & 1) != 0) goto LAB_00763c08;
        }
        uVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar2 = local_98;
        local_14c = 0;
        if ((uVar4 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_14c = 0;
          if ((uVar2 & 1) != 0) {
            uVar2 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
            local_14c = 0;
            if (uVar2 != 0) {
              pcVar1 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_isEqualToString__0269ccc8,local_98);
              local_14c = (uint)pcVar1;
            }
          }
        }
        local_148 = local_14c;
      }
LAB_00763c08:
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      if ((local_148 & 1) != 0) {
        _objc_storeStrong(&local_58,_WCRefineTextStyleVoicePlaceholder);
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      goto LAB_00764090;
    }
    uVar2 = local_30;
    FUN_0075f444(local_30,&cf_MFWebMMBtn);
    if ((uVar2 & 1) != 0) {
      _objc_storeStrong(&local_58,_WCRefineTextStyleHomeLogin);
      goto LAB_00764090;
    }
    uVar2 = local_30;
    FUN_0075f444(local_30,&cf_MFBannerBtn);
    if ((uVar2 & 1) == 0) goto LAB_00764090;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityIdentifier_0269ec20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar4 & 1) == 0) {
      local_59 = 0;
      pcVar1 = local_50;
      FUN_00764ec4();
      local_17c = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_50;
        FUN_00762ca8(local_50,0);
        local_17c = (byte)pcVar1;
      }
      local_aa = local_17c & 1;
      pcVar1 = _WCRefineTextStyleHomeFold;
      FUN_0075ede8();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = _WCRefineTextStyleHomeCount;
      local_b8 = pcVar1;
      FUN_0075ede8();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_b8;
      local_c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar1 = local_50;
      local_d1 = 0;
      local_180 = 0;
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar6 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_1a0 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1a0 = &cf___;
        }
        local_d0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8,local_1a0);
        local_180 = (byte)pcVar1;
      }
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      local_c1 = local_180 & 1;
      uVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar1 = local_50;
      local_e1 = 0;
      local_1a8 = 0;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        local_e1 = 1;
        local_e0 = uVar4;
        FUN_00764fb0();
        local_1a8 = (byte)pcVar1;
      }
      if ((local_e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_d2 = local_1a8 & 1;
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
      bVar7 = 0;
      if ((((pcVar1 == (cfstringStruct *)0x64) || (bVar7 = local_aa, (local_aa & 1) != 0)) ||
          (bVar7 = local_c1, (local_c1 & 1) != 0)) || (bVar7 = local_d2, (local_d2 & 1) != 0)) {
        pcVar5 = local_50;
        FUN_007652e8(bVar7,local_50,local_40);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_58;
        local_58 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      goto LAB_00764090;
    }
    local_28 = (cfstringStruct *)0x0;
    local_44 = 1;
  }
  else {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_d__);
    if ((((ulong)pcVar1 & 1) != 0) ||
       (pcVar1 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_Search),
       ((ulong)pcVar1 & 1) != 0)) {
      _objc_storeStrong(&local_58,_WCRefineTextStyleSearchPlaceholder);
    }
    pcVar1 = _WCRefineTextStyleSearchPlaceholder;
    FUN_0075ede8();
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_81 = 0;
    local_124 = 0;
    local_68 = pcVar1;
    if (local_58 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar5 = local_50;
      local_124 = 0;
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_140 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_140 = &cf___;
        }
        local_80 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isEqualToString__0269ccc8,local_140);
        local_124 = (uint)pcVar5;
      }
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_124 & 1) != 0) {
      _objc_storeStrong(&local_58,_WCRefineTextStyleSearchPlaceholder);
    }
    _objc_storeStrong(&local_68,0);
LAB_00764090:
    pcVar1 = local_38;
    _objc_getAssociatedObject(local_38,DAT_026f4630);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar1;
    if (((local_59 & 1) == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0), pcVar5 = local_f0,
       pcVar1 == (cfstringStruct *)0x0)) {
      if ((local_58 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_f0,
         (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isEqualToString__0269ccc8,local_58),
         ((ulong)pcVar1 & 1) != 0)) {
        if ((local_58 != (cfstringStruct *)0x0) &&
           (pcVar1 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0)
           , pcVar1 == (cfstringStruct *)0x0)) {
          _objc_setAssociatedObject(local_38,DAT_026f4630,local_58,3);
        }
      }
      else {
        _objc_setAssociatedObject(local_38,DAT_026f4610,0);
        _objc_setAssociatedObject(local_38,DAT_026f4630,local_58,3);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar5;
    }
    local_44 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_0076420c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

