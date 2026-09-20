// FUN_003ea448 @ 003ea448

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_003ea448(ulong param_1,undefined8 param_2,undefined8 param_3,cfstringStruct *param_4,
                 long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  uint local_49c;
  cfstringStruct *local_3e0;
  cfstringStruct *local_298;
  undefined *local_248;
  long local_240;
  long lStack_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  long lStack_218;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  long lStack_1f8;
  cfstringStruct *local_1f0;
  long lStack_1e8;
  long local_1e0;
  cfstringStruct *local_1d8;
  long local_1d0;
  undefined1 local_1c1;
  long local_1c0;
  long lStack_1b8;
  cfstringStruct *local_1b0;
  long lStack_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  long lStack_188;
  ulong local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  long lStack_168;
  byte local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  long lStack_148;
  cfstringStruct *local_140;
  long lStack_138;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 local_111;
  cfstringStruct *local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  long lStack_f8;
  cfstringStruct *local_f0;
  long lStack_e8;
  ulong local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  long lStack_b8;
  undefined4 local_a4;
  cfstringStruct *local_a0;
  long lStack_98;
  ulong local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  ulong local_60;
  cfstringStruct *local_58;
  long lStack_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong *puVar4;
  
  local_70 = (cfstringStruct *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  local_58 = param_4;
  lStack_50 = param_5;
  _objc_storeStrong(&local_70,param_3);
  puVar4 = &local_78;
  local_78 = 0;
  _objc_storeStrong(puVar4,param_6);
  uVar3 = (uint)puVar4;
  FUN_003ebe00();
  if ((uVar3 & 1) == 0) {
    lStack_98 = lStack_50;
    local_a0 = local_58;
    uVar5 = local_60;
    (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
    local_41 = (byte)uVar5 & 1;
    local_a4 = 1;
  }
  else {
    uVar5 = local_60;
    FUN_003ebed4();
    if ((uVar5 & 1) == 0) {
      lStack_b8 = lStack_50;
      local_c0 = local_58;
      uVar5 = local_60;
      (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
      local_41 = (byte)uVar5 & 1;
      local_a4 = 1;
    }
    else {
      uVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if ((uVar5 == 0) && (lStack_50 != 0)) {
        pcVar7 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_298 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_298 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = local_298;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        local_d0 = 0;
        uVar5 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
        if ((uVar5 & 1) != 0) {
          uVar5 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_d8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar8);
          if ((uVar5 & 1) != 0) {
            _objc_storeStrong(&local_d0,local_d8);
          }
          _objc_storeStrong(&local_d8,0);
        }
        uVar5 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        if ((uVar5 == 0) ||
           (uVar5 = local_d0,
           (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,local_c8),
           (uVar5 & 1) != 0)) {
          pcVar7 = (cfstringStruct *)((long)&local_58->field0_0x0 + lStack_50);
          pcVar9 = local_c8;
          puVar8 = PTR_s_length_0269cca0;
          (*(code *)PTR__objc_msgSend_02578628)();
          lVar10 = (long)pcVar7 - (long)pcVar9;
          if (pcVar7 < pcVar9 || lVar10 == 0) {
            pcVar9 = local_c8;
            FUN_003ec0f0(lVar10);
            pcVar7 = (cfstringStruct *)((long)&local_58->field0_0x0 + lStack_50);
            pcVar6 = local_c8;
            local_110 = pcVar9;
            local_108 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
            local_111 = pcVar7 == pcVar6;
            if (((local_110 == (cfstringStruct *)0x7fffffffffffffff) || (!(bool)local_111)) ||
               (local_58 <= local_110)) {
              pcVar7 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_substringToIndex__0269d6c0,local_58);
              _objc_retainAutoreleasedReturnValue();
              pcVar9 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_substringFromIndex__0269d120,
                         (long)&local_58->field0_0x0 + lStack_50);
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_stringByAppendingString__0269d398);
              _objc_retainAutoreleasedReturnValue();
              local_128 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              pcVar7 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_hasSuffix__0269d018,&cf__);
              if ((((ulong)pcVar7 & 1) == 0) &&
                 (pcVar7 = local_128,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_128,PTR_s_hasSuffix__0269d018,&cf_format_s_),
                 ((ulong)pcVar7 & 1) == 0)) {
                FUN_003eca04(local_60);
              }
              else {
                FUN_003ec670(local_60,local_128);
              }
              lStack_138 = lStack_50;
              local_140 = local_58;
              uVar5 = local_60;
              (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
              local_41 = (byte)uVar5 & 1;
              local_a4 = 1;
              _objc_storeStrong(&local_128,0);
            }
            else {
              pcVar7 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_substringToIndex__0269d6c0,
                         (undefined1 *)((long)&local_110->field0_0x0 + 1));
              _objc_retainAutoreleasedReturnValue();
              local_120 = pcVar7;
              FUN_003ec670(local_60,pcVar7);
              uVar5 = local_60;
              uVar1 = DAT_026e02e8;
              puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar5,uVar1,puVar8,1);
              (*(code *)PTR__objc_release_02578630)(puVar8);
              uVar5 = local_60;
              pcVar9 = local_70;
              pcVar7 = local_120;
              pcVar6 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
              FUN_003ec73c(uVar5,pcVar9,pcVar7,pcVar6);
              _objc_setAssociatedObject(local_60,DAT_026e02e8,0,1);
              local_41 = 0;
              local_a4 = 1;
              _objc_storeStrong(&local_120,0);
            }
          }
          else {
            lStack_f8 = lStack_50;
            local_100 = local_58;
            uVar5 = local_60;
            (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
            local_41 = (byte)uVar5 & 1;
            local_a4 = 1;
          }
        }
        else {
          lStack_e8 = lStack_50;
          local_f0 = local_58;
          uVar5 = local_60;
          (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
          local_41 = (byte)uVar5 & 1;
          local_a4 = 1;
        }
        _objc_storeStrong(&local_d0);
        _objc_storeStrong(&local_c8,0);
      }
      else {
        uVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf__);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_78,PTR_s_isEqualToString__0269ccc8,&cf_format_s_), (uVar5 & 1) == 0)) {
          lStack_148 = lStack_50;
          local_150 = local_58;
          uVar5 = local_60;
          (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
          local_41 = (byte)uVar5 & 1;
          local_a4 = 1;
        }
        else {
          local_159 = 0;
          pcVar7 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_markedTextRange_026a0d40);
          bVar2 = false;
          if (((ulong)pcVar7 & 1) != 0) {
            pcVar7 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_markedTextRange_026a0d40);
            _objc_retainAutoreleasedReturnValue();
            local_159 = 1;
            bVar2 = pcVar7 != (cfstringStruct *)0x0;
            local_158 = pcVar7;
          }
          if ((local_159 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          if (bVar2) {
            lStack_168 = lStack_50;
            local_170 = local_58;
            uVar5 = local_60;
            (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
            local_41 = (byte)uVar5 & 1;
            local_a4 = 1;
          }
          else {
            pcVar7 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            local_3e0 = pcVar7;
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_3e0 = &cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_178 = local_3e0;
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            uVar5 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_180 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar8);
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = local_180,
                 (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0), uVar5 != 0)
                 ) {
                _objc_storeStrong(uVar5,&local_178,local_180);
              }
              _objc_storeStrong(&local_180,0);
            }
            pcVar7 = local_58;
            pcVar9 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
            if (pcVar9 < pcVar7) {
              lStack_188 = lStack_50;
              local_190 = local_58;
              uVar5 = local_60;
              (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
              local_41 = (byte)uVar5 & 1;
              local_a4 = 1;
            }
            else {
              pcVar7 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_178,PTR_s_substringToIndex__0269d6c0,local_58);
              _objc_retainAutoreleasedReturnValue();
              local_198 = pcVar7;
              (*(code *)PTR__objc_retain_02578638)();
              local_1a0 = &cf___;
              pcVar7 = (cfstringStruct *)((long)&local_58->field0_0x0 + lStack_50);
              pcVar9 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
              if (pcVar7 <= pcVar9) {
                pcVar9 = local_178;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_178,PTR_s_substringFromIndex__0269d120,
                           (long)&local_58->field0_0x0 + lStack_50);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_1a0;
                local_1a0 = pcVar9;
                (*(code *)PTR__objc_release_02578630)(pcVar7);
              }
              pcVar7 = local_198;
              FUN_003eca9c();
              if (((ulong)pcVar7 & 1) == 0) {
                local_38 = 0x7fffffffffffffff;
                local_40 = 0;
                local_30 = 0x7fffffffffffffff;
                local_28 = 0;
                local_1c0 = 0x7fffffffffffffff;
                lStack_1b8 = 0;
                local_1c1 = 0;
                local_1d0 = 0;
                pcVar9 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_stringByAppendingString__0269d398,&cf__);
                _objc_retainAutoreleasedReturnValue();
                local_1e0 = local_1d0;
                local_1d8 = pcVar9;
                FUN_003ecb30(pcVar9,&local_1c0,&local_1c1,&local_1e0);
                _objc_storeStrong(&local_1d0,local_1e0);
                pcVar7 = local_198;
                if (((ulong)pcVar9 & 1) == 0) {
                  lStack_1e8 = lStack_50;
                  local_1f0 = local_58;
                  uVar5 = local_60;
                  (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
                  local_41 = (byte)uVar5 & 1;
                  local_a4 = 1;
                }
                else if ((local_1c0 == 0x7fffffffffffffff) || (local_1d0 == 0)) {
                  lStack_1f8 = lStack_50;
                  local_200 = local_58;
                  uVar5 = local_60;
                  (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
                  local_41 = (byte)uVar5 & 1;
                  local_a4 = 1;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_208 = pcVar7;
                  while( true ) {
                    pcVar9 = local_208;
                    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0);
                    pcVar7 = local_208;
                    local_49c = 0;
                    if (pcVar9 != (cfstringStruct *)0x0) {
                      pcVar9 = local_208;
                      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar7,PTR_s_characterAtIndex__0269fa18,
                                 (undefined1 *)((long)&pcVar9[-1].field3_0x18 + 7));
                      local_49c = (uint)pcVar7;
                      FUN_003ed084();
                    }
                    pcVar7 = local_208;
                    if ((local_49c & 1) == 0) break;
                    pcVar9 = local_208;
                    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar7,PTR_s_substringToIndex__0269d6c0,
                               (undefined1 *)((long)&pcVar9[-1].field3_0x18 + 7));
                    _objc_retainAutoreleasedReturnValue();
                    pcVar9 = local_208;
                    local_208 = pcVar7;
                    (*(code *)PTR__objc_release_02578630)(pcVar9);
                  }
                  pcVar7 = (cfstringStruct *)(local_1c0 + lStack_1b8);
                  pcVar9 = local_208;
                  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0);
                  if (pcVar9 < pcVar7) {
                    lStack_218 = lStack_50;
                    local_220 = local_58;
                    uVar5 = local_60;
                    (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
                    local_41 = (byte)uVar5 & 1;
                    local_a4 = 1;
                  }
                  else {
                    pcVar7 = local_208;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_208,PTR_s_substringToIndex__0269d6c0,local_1c0);
                    _objc_retainAutoreleasedReturnValue();
                    lStack_238 = lStack_1b8;
                    local_240 = local_1c0;
                    pcVar9 = local_208;
                    local_228 = pcVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_208,PTR_s_substringWithRange__0269d138,local_1c0,lStack_1b8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    local_230 = pcVar9;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf__________);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_228;
                    local_248 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0);
                    pcVar9 = local_230;
                    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
                    lVar10 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
                    uVar5 = local_60;
                    uVar1 = DAT_026e02e8;
                    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1)
                    ;
                    _objc_retainAutoreleasedReturnValue();
                    _objc_setAssociatedObject(uVar5,uVar1,puVar8,1);
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    FUN_003ec73c(local_60,local_70,local_248,
                                 (long)&pcVar9->field0_0x0 + (long)&pcVar7->field0_0x0 + lVar10 + 1)
                    ;
                    _objc_setAssociatedObject(local_60,DAT_026e02e8,0,1);
                    FUN_003ed0e0(local_60,local_248);
                    local_41 = 0;
                    local_a4 = 1;
                    _objc_storeStrong(&local_248);
                    _objc_storeStrong(&local_230,0);
                    _objc_storeStrong(&local_228,0);
                  }
                  _objc_storeStrong(&local_208,0);
                }
                _objc_storeStrong(&local_1d8);
                _objc_storeStrong(&local_1d0,0);
              }
              else {
                lStack_1a8 = lStack_50;
                local_1b0 = local_58;
                uVar5 = local_60;
                (*DAT_028ca4b0)(local_60,local_68,local_70,local_58,lStack_50,local_78);
                local_41 = (byte)uVar5 & 1;
                local_a4 = 1;
              }
              _objc_storeStrong(&local_1a0);
              _objc_storeStrong(&local_198,0);
            }
            _objc_storeStrong(&local_178,0);
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  return local_41 & 1;
}

