// FUN_007c12fc @ 007c12fc

void FUN_007c12fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_380;
  undefined *local_328;
  uint local_2e4;
  undefined *local_2a0;
  undefined *local_228;
  undefined *local_1e8;
  undefined *local_198;
  undefined *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  byte local_f9;
  ulong local_f8;
  ulong local_f0;
  undefined1 local_e1;
  undefined *local_e0;
  undefined *local_d8;
  byte local_cb;
  byte local_ca;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  int local_68;
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_58 = (undefined *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  if ((local_58 == (undefined *)0x0) || ((DAT_026f46b8 & 1) == 0)) {
    (*DAT_028ccd90)(local_48,local_50,local_58);
    local_68 = 1;
    goto LAB_007c281c;
  }
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_70 = puVar1;
  FUN_007ce104();
  if ((uVar2 & 1) != 0) {
    puVar1 = local_70;
    FUN_007ce1d4();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if ((puVar1 != (undefined *)0x0) &&
       (puVar1 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_70),
       ((ulong)puVar1 & 1) == 0)) {
      local_89 = 0;
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_198 = (undefined *)0x0;
      }
      else {
        local_198 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = local_198;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_198;
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithString_attributes__026a02b0,local_78,local_80);
      puVar1 = local_58;
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_70,local_78);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  uVar2 = local_48;
  FUN_007cf428();
  if ((uVar2 & 1) != 0) {
    puVar1 = local_70;
    FUN_007cf5a8();
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if ((puVar1 != (undefined *)0x0) &&
       (puVar1 = local_98,
       (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,local_70),
       ((ulong)puVar1 & 1) == 0)) {
      local_a9 = 0;
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_1e8 = (undefined *)0x0;
      }
      else {
        local_1e8 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_1e8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_1e8;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithString_attributes__026a02b0,local_98,local_a0);
      puVar1 = local_58;
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_70,local_98);
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_98,0);
  }
  puVar1 = local_70;
  FUN_007cfc4c();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = local_48;
    FUN_007cff60();
    if ((((uVar2 & 1) == 0) || (DAT_028cccc8 == (undefined *)0x0)) ||
       (puVar1 = DAT_028cccc8,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0),
       puVar1 == (undefined *)0x0)) {
      puVar1 = local_70;
      FUN_007c7d38(local_70,0x7fffffffffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isEqualToString__0269ccc8,&cf__O);
      local_c9 = (byte)puVar1;
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_U_);
      local_ca = (byte)puVar1;
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_Ss);
      local_cb = (byte)puVar1;
      if ((((local_c9 & 1) == 0) ||
          (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tag_026cab98),
          uVar2 != 0x68)) ||
         ((DAT_028cccc8 == (undefined *)0x0 ||
          (puVar1 = DAT_028cccc8,
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0),
          puVar1 == (undefined *)0x0)))) {
        local_e1 = 0;
        if ((local_c9 & 1) != 0) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = uVar2;
          while( true ) {
            local_f9 = 0;
            local_2e4 = 0;
            if (local_f0 != 0) {
              uVar2 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              local_f9 = 1;
              local_f8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_2e4 = (uint)uVar2 ^ 1;
            }
            if ((local_f9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_f8);
            }
            if ((local_2e4 & 1) == 0) break;
            uVar4 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_f0;
            local_f0 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          local_e1 = local_f0 != 0;
          if ((((bool)local_e1) && (DAT_028cccc8 != (undefined *)0x0)) &&
             (puVar1 = DAT_028cccc8,
             (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0),
             puVar1 != (undefined *)0x0)) {
            puVar3 = local_70;
            FUN_007d0288(puVar1);
            _objc_retainAutoreleasedReturnValue();
            local_328 = puVar3;
            if (puVar3 == (undefined *)0x0) {
              local_328 = DAT_028cccc8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_108 = local_328;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
            _objc_alloc();
            puVar1 = local_108;
            puVar5 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_initWithString_attributes__026a02b0,puVar1);
            local_110 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*DAT_028ccd90)(local_48,local_50,local_110);
            local_68 = 1;
            _objc_storeStrong(&local_110);
            _objc_storeStrong(&local_108,0);
          }
          else {
            local_68 = 0;
          }
          _objc_storeStrong(&local_f0,0);
          if (local_68 != 0) goto LAB_007c27fc;
        }
        if ((((local_ca & 1) == 0) || (DAT_028cccd0 == (undefined *)0x0)) ||
           (puVar1 = DAT_028cccd0,
           (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd0,PTR_s_length_0269cca0),
           puVar1 == (undefined *)0x0)) {
          if ((((local_cb & 1) == 0) || (DAT_028cccd8 == 0)) ||
             (lVar6 = DAT_028cccd8,
             (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd8,PTR_s_length_0269cca0), lVar6 == 0))
          {
            if ((DAT_028ccce0 != 0) &&
               (lVar6 = DAT_028ccce0,
               (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccce0,PTR_s_length_0269cca0), lVar6 != 0
               )) {
              puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                         PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = local_70;
              puVar5 = local_70;
              local_130 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
              local_38 = 0;
              local_30 = 0;
              local_148 = 0;
              local_140 = puVar5;
              local_40 = puVar5;
              local_28 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,puVar1,0,0,puVar5);
              _objc_retainAutoreleasedReturnValue();
              local_138 = puVar3;
              if (puVar3 == (undefined *)0x0) {
                local_68 = 0;
              }
              else {
                puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf__);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
                local_150 = puVar1;
                _objc_alloc();
                puVar1 = local_150;
                puVar5 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_initWithString_attributes__026a02b0,puVar1);
                local_158 = puVar3;
                (*(code *)PTR__objc_release_02578630)(puVar5);
                (*DAT_028ccd90)(local_48,local_50,local_158);
                local_68 = 1;
                _objc_storeStrong(&local_158);
                _objc_storeStrong(&local_150,0);
              }
              _objc_storeStrong(&local_138);
              _objc_storeStrong(&local_130,0);
              if (local_68 != 0) goto LAB_007c27fc;
            }
            (*DAT_028ccd90)(local_48,local_50,local_58);
            local_68 = 0;
          }
          else {
            puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
            _objc_alloc();
            lVar6 = DAT_028cccd8;
            puVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_initWithString_attributes__026a02b0,lVar6);
            local_128 = puVar1;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*DAT_028ccd90)(local_48,local_50,local_128);
            local_68 = 1;
            _objc_storeStrong(&local_128,0);
          }
        }
        else {
          puVar3 = local_70;
          FUN_007d0450(puVar1,local_70,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_380 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            local_380 = DAT_028cccd0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = local_380;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
          _objc_alloc();
          puVar1 = local_118;
          puVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_initWithString_attributes__026a02b0,puVar1);
          local_120 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*DAT_028ccd90)(local_48,local_50,local_120);
          local_68 = 1;
          _objc_storeStrong(&local_120);
          _objc_storeStrong(&local_118,0);
        }
      }
      else {
        puVar3 = local_70;
        FUN_007d0288(puVar1);
        _objc_retainAutoreleasedReturnValue();
        local_2a0 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_2a0 = DAT_028cccc8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = local_2a0;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
        _objc_alloc();
        puVar1 = local_d8;
        puVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithString_attributes__026a02b0,puVar1);
        local_e0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*DAT_028ccd90)(local_48,local_50,local_e0);
        local_68 = 1;
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
      }
LAB_007c27fc:
      _objc_storeStrong(&local_c8,0);
    }
    else {
      puVar3 = local_70;
      FUN_007d0288(puVar1);
      _objc_retainAutoreleasedReturnValue();
      local_228 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_228 = DAT_028cccc8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_228;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
      _objc_alloc();
      puVar1 = local_b8;
      puVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithString_attributes__026a02b0,puVar1)
      ;
      local_c0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*DAT_028ccd90)(local_48,local_50,local_c0);
      local_68 = 1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
    }
  }
  else {
    (*DAT_028ccd90)(local_48,local_50,local_58);
    local_68 = 1;
  }
  _objc_storeStrong(&local_70,0);
LAB_007c281c:
  _objc_storeStrong(&local_58,0);
  return;
}

