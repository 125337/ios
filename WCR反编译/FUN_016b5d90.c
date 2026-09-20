// FUN_016b5d90 @ 016b5d90

void FUN_016b5d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  cfstringStruct *pcVar14;
  cfstringStruct *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  cfstringStruct *local_378;
  cfstringStruct *local_360;
  undefined *local_1a0;
  cfstringStruct *local_198;
  undefined4 local_18c;
  undefined *local_188 [3];
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = (undefined *)0x0;
  _objc_storeStrong(&local_168,param_2);
  puVar1 = local_168;
  _objc_getAssociatedObject(local_168,&DAT_028e3ebc);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_168;
  local_170 = puVar1;
  _objc_getAssociatedObject(local_168,&DAT_028e3ebb);
  _objc_retainAutoreleasedReturnValue();
  local_188[0] = puVar2;
  if (((local_170 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_unsignedLongLongValue_0269d6b8),
     local_160 = local_170, puVar2 != DAT_028e3d80)) {
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_158 = &cf_repeatEnhanceEnabled;
    local_198 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_repeatEnhanceEnabled_026b2bd8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_numberWithBool__0269ce60,(ulong)pcVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_150 = &cf_repeatOnlyEmoticonEnabled;
    pcVar3 = local_198;
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatOnlyEmoticonEnabled_026b2cb8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_numberWithBool__0269ce60,(ulong)pcVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_148 = &cf_repeatOnlyFileEnabled;
    pcVar3 = local_198;
    local_b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatOnlyFileEnabled_026b2bd0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_numberWithBool__0269ce60,(ulong)pcVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_140 = &cf_repeatUseImage;
    pcVar3 = local_198;
    local_b0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatUseImage_026b2be0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_numberWithBool__0269ce60,(ulong)pcVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_138 = &cf_repeatButtonShadowAlpha;
    pcVar3 = local_198;
    local_a8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatButtonShadowAlpha_026b2c30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithInteger__0269e080,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_130 = &cf_repeatImageAlphaLight;
    local_a0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatImageAlphaLight_026b2c10);
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_128 = &cf_repeatImageAlphaDark;
    local_98 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatImageAlphaDark_026b2c08);
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_120 = &cf_repeatImageButtonSize;
    local_90 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatImageButtonSize_026b2be8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_118 = &cf_repeatImageButtonSizeOther;
    local_88 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatImageButtonSizeOther_026b2bf0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_110 = &cf_repeatButtonSize;
    local_80 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatButtonSize_026b2bf8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_108 = &cf_repeatButtonSizeOther;
    local_78 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatButtonSizeOther_026b2c00);
    (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_100 = &cf_repeatCornerRadius;
    local_70 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatCornerRadius_026b2ab0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = &cf_repeatTextContentSelf;
    pcVar3 = local_198;
    local_68 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatTextContentSelf_026b2c18);
    _objc_retainAutoreleasedReturnValue();
    local_360 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_360 = &cf___;
    }
    local_60 = local_360;
    local_f0 = &cf_repeatTextContentOther;
    pcVar14 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatTextContentOther_026b2c20);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_378 = pcVar14;
    if (pcVar14 == (cfstringStruct *)0x0) {
      local_378 = &cf___;
    }
    local_58 = local_378;
    local_e8 = &cf_repeatBoldFont;
    pcVar15 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatBoldFont_026b2c28);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar16,PTR_s_numberWithBool__0269ce60,(ulong)pcVar15 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_e0 = &cf_repeatVerticalOffset;
    local_50 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatVerticalOffset_026b2cc0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar17,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d8 = &cf_repeatVerticalOffsetOther;
    local_48 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatVerticalOffsetOther_026b2cc8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar18,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d0 = &cf_repeatHorizontalOffset;
    local_40 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatHorizontalOffset_026b2cd0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar19,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_c8 = &cf_repeatHorizontalOffsetOther;
    local_38 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_repeatHorizontalOffsetOther_026b2cd8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar20,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_158,0x13);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar21;
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(puVar18);
    (*(code *)PTR__objc_release_02578630)(puVar17);
    (*(code *)PTR__objc_release_02578630)(puVar16);
    (*(code *)PTR__objc_release_02578630)(pcVar14);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_setAssociatedObject(local_168,&DAT_028e3ebc,local_1a0,1);
    puVar1 = local_168;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               DAT_028e3d80);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar1,&DAT_028e3ebb,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_1a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = puVar1;
    local_18c = 1;
    _objc_storeStrong(&local_1a0);
    _objc_storeStrong(&local_198,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18c = 1;
  }
  _objc_storeStrong(local_188);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

