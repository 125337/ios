// FUN_007ce1d4 @ 007ce1d4

void FUN_007ce1d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint local_278;
  uint local_270;
  uint local_268;
  uint local_260;
  uint local_258;
  uint local_250;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  byte local_167;
  byte local_166;
  byte local_165;
  byte local_164;
  byte local_163;
  byte local_162;
  byte local_161;
  undefined *local_160;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  int local_130;
  undefined *local_120;
  undefined *local_118;
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
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = (undefined *)0x0;
  _objc_storeStrong(&local_120,param_1);
  puVar2 = local_120;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar1 = local_120, (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0),
     puVar2 = local_120, puVar1 == (undefined *)0x0)) {
    puVar2 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = puVar2;
    local_130 = 1;
    goto LAB_007cf3c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = puVar2;
  FUN_007c8640();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_138;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isEqualToString__0269ccc8,local_138);
  puVar2 = local_138;
  local_149 = ((byte)puVar1 ^ 1) & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = puVar2;
  if ((local_149 & 1) == 0) {
LAB_007ce4ac:
    puVar2 = DAT_028cccb0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccb0,PTR_s_objectForKey__0269e048,local_138);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar2;
    if (((puVar2 == (undefined *)0x0) ||
        ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0),
        puVar2 == (undefined *)0x0)) &&
       (puVar2 = local_158,
       (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_138),
       ((ulong)puVar2 & 1) == 0)) {
      puVar1 = DAT_028cccb0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccb0,PTR_s_objectForKey__0269e048,local_158);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_160;
      local_160 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_160 == (undefined *)0x0) ||
       (puVar1 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
       puVar2 = local_160, puVar1 == (undefined *)0x0)) {
      puVar2 = local_158;
      FUN_007d0814(0);
      local_161 = (byte)puVar2;
      local_250 = 0;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_158;
        FUN_007d0a9c();
        local_250 = (uint)puVar2;
      }
      local_162 = (byte)local_250 & 1;
      local_258 = 0;
      if (((local_161 & 1) == 0) && (local_258 = 0, (local_250 & 1) == 0)) {
        puVar2 = local_158;
        FUN_007d0d5c();
        local_258 = (uint)puVar2;
      }
      local_163 = (byte)local_258 & 1;
      local_260 = 0;
      if ((((local_161 & 1) == 0) && (local_260 = 0, (local_162 & 1) == 0)) &&
         (local_260 = 0, (local_258 & 1) == 0)) {
        puVar2 = local_158;
        FUN_007d0ff0();
        local_260 = (uint)puVar2;
      }
      local_164 = (byte)local_260 & 1;
      local_268 = 0;
      if ((((local_161 & 1) == 0) && (local_268 = 0, (local_162 & 1) == 0)) &&
         ((local_268 = 0, (local_163 & 1) == 0 && (local_268 = 0, (local_260 & 1) == 0)))) {
        puVar2 = local_158;
        FUN_007d1248();
        local_268 = (uint)puVar2;
      }
      local_165 = (byte)local_268 & 1;
      local_270 = 0;
      if ((((local_161 & 1) == 0) && (local_270 = 0, (local_162 & 1) == 0)) &&
         ((local_270 = 0, (local_163 & 1) == 0 &&
          ((local_270 = 0, (local_164 & 1) == 0 && (local_270 = 0, (local_268 & 1) == 0)))))) {
        puVar2 = local_158;
        FUN_007d147c();
        local_270 = (uint)puVar2;
      }
      local_166 = (byte)local_270 & 1;
      local_278 = 0;
      if ((((((local_161 & 1) == 0) && (local_278 = 0, (local_162 & 1) == 0)) &&
           (local_278 = 0, (local_163 & 1) == 0)) &&
          ((local_278 = 0, (local_164 & 1) == 0 && (local_278 = 0, (local_165 & 1) == 0)))) &&
         (local_278 = 0, (local_270 & 1) == 0)) {
        puVar2 = local_158;
        FUN_007d16a4();
        local_278 = (uint)puVar2;
      }
      local_167 = (byte)local_278 & 1;
      if ((local_161 & 1) == 0) {
        if ((local_162 & 1) != 0) {
          local_90 = &cf_S;
          local_88 = &cf_SNlQOS;
          local_80 = &cf_lQOS;
          local_78 = &cf__OT;
          local_70 = &cf___;
          local_68 = &cf___lQ>w_;
          local_60 = &cf_q___e_;
          local_58 = &cf_lQ>w_;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_90,8);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          FUN_007d18c0();
          _objc_retainAutoreleasedReturnValue();
          local_178 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_178 == (undefined *)0x0) ||
             (puVar1 = local_178,
             (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
             puVar2 = local_178, puVar1 == (undefined *)0x0)) {
            uVar4 = 0;
            local_130 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_118 = puVar2;
            uVar4 = 1;
            local_130 = 1;
          }
          _objc_storeStrong(uVar4,&local_178,0);
          goto joined_r0x007cf2e4;
        }
        if ((local_163 & 1) != 0) {
          local_c8 = &cf_aSS;
          local_c0 = &cf_USNaSS;
          local_b8 = &cf___NaSS;
          local_b0 = &cf___USNaSS;
          local_a8 = &cf_UaSS;
          local_a0 = &cf___aSS;
          local_98 = &cf___UaSS;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_c8,7);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          FUN_007d18c0();
          _objc_retainAutoreleasedReturnValue();
          local_180 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_180 == (undefined *)0x0) ||
             (puVar1 = local_180,
             (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0),
             puVar2 = local_180, puVar1 == (undefined *)0x0)) {
            uVar4 = 0;
            local_130 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_118 = puVar2;
            uVar4 = 1;
            local_130 = 1;
          }
          _objc_storeStrong(uVar4,&local_180,0);
          goto joined_r0x007cf2e4;
        }
        if ((local_164 & 1) != 0) {
          local_d8 = &cf_h_;
          local_d0 = &cf_W_;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_d8,2);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          FUN_007d18c0();
          _objc_retainAutoreleasedReturnValue();
          local_188 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_188 == (undefined *)0x0) ||
             (puVar1 = local_188,
             (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0),
             puVar2 = local_188, puVar1 == (undefined *)0x0)) {
            uVar4 = 0;
            local_130 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_118 = puVar2;
            uVar4 = 1;
            local_130 = 1;
          }
          _objc_storeStrong(uVar4,&local_188,0);
          goto joined_r0x007cf2e4;
        }
        if ((local_165 & 1) != 0) {
          local_f0 = &cf_6e;
          local_e8 = &cf_Favorites;
          local_e0 = &cf_Favourites;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_f0,3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          FUN_007d18c0();
          _objc_retainAutoreleasedReturnValue();
          local_190 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_190 == (undefined *)0x0) ||
             (puVar1 = local_190,
             (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0),
             puVar2 = local_190, puVar1 == (undefined *)0x0)) {
            uVar4 = 0;
            local_130 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_118 = puVar2;
            uVar4 = 1;
            local_130 = 1;
          }
          _objc_storeStrong(uVar4,&local_190,0);
          goto joined_r0x007cf2e4;
        }
        if ((local_166 & 1) != 0) {
          local_100 = &cf_gSW;
          local_f8 = &cf_Moments;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_100,2);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          FUN_007d18c0();
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_198 == (undefined *)0x0) ||
             (puVar1 = local_198,
             (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0),
             puVar2 = local_198, puVar1 == (undefined *)0x0)) {
            uVar4 = 0;
            local_130 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_118 = puVar2;
            uVar4 = 1;
            local_130 = 1;
          }
          _objc_storeStrong(uVar4,&local_198,0);
          goto joined_r0x007cf2e4;
        }
        if ((local_278 & 1) != 0) {
          local_110 = &cf_n_;
          local_108 = &cf_Settings;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_110,2);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          FUN_007d18c0();
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_1a0 == (undefined *)0x0) ||
             (puVar1 = local_1a0,
             (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0),
             puVar2 = local_1a0, puVar1 == (undefined *)0x0)) {
            uVar4 = 0;
            local_130 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_118 = puVar2;
            uVar4 = 1;
            local_130 = 1;
          }
          _objc_storeStrong(uVar4,&local_1a0,0);
          goto joined_r0x007cf2e4;
        }
      }
      else {
        local_50 = &cf_gR;
        local_48 = &cf__eN;
        local_40 = &cf__eNNgR;
        local_38 = &cf_gR;
        local_30 = &cf__eNgR;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_50,5);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        FUN_007d18c0();
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((local_170 == (undefined *)0x0) ||
           (puVar1 = local_170,
           (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
           puVar2 = local_170, puVar1 == (undefined *)0x0)) {
          uVar4 = 0;
          local_130 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = puVar2;
          uVar4 = 1;
          local_130 = 1;
        }
        _objc_storeStrong(uVar4,&local_170,0);
joined_r0x007cf2e4:
        if (local_130 != 0) goto LAB_007cf330;
      }
      puVar2 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = puVar2;
      local_130 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = puVar2;
      local_130 = 1;
    }
LAB_007cf330:
    _objc_storeStrong(&local_160,0);
  }
  else {
    puVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    puVar2 = local_138;
    if (puVar1 != (undefined *)0x0) {
      _objc_storeStrong(&local_158,local_148);
      goto LAB_007ce4ac;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = puVar2;
    local_130 = 1;
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
LAB_007cf3c8:
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_118);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

