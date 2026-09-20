// replacementImageNamed:size:scale:color: @ 015cbc6c

/* Function Stack Size: 0x38 bytes */

ID __thiscall
WCRefineWechatThemeStore::replacementImageNamed_size_scale_color_
          (WCRefineWechatThemeStore *this,ID param_1,SEL param_2,ID param_3,CGSize param_4,
          double param_5,ID param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  ulong local_3f0;
  ulong local_3e8;
  undefined *local_3b0;
  ulong local_390;
  ulong local_388;
  undefined *local_320;
  uint local_2cc;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  bool local_261;
  undefined *local_260;
  byte local_251;
  undefined *local_250;
  undefined *local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined *local_1f8;
  ulong local_1f0;
  undefined *local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  byte local_1c9;
  long local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  byte local_1a9;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  byte local_18a;
  byte local_189;
  undefined *local_188;
  byte local_17a;
  byte local_179;
  ulong local_178;
  int local_16c;
  long local_168;
  undefined8 local_160;
  ulong local_158;
  SEL local_150;
  undefined *local_148;
  double local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  local_150 = param_2;
  local_148 = (undefined *)param_1;
  local_140 = param_5;
  local_138 = in_d1;
  _objc_storeStrong(&local_158,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  local_168 = 0;
  local_160 = in_d2;
  _objc_storeStrong(&local_168,param_4.field0_0x0);
  uVar2 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_130 = (undefined *)0x0;
    local_16c = 1;
  }
  else {
    uVar2 = local_158;
    FUN_015ca2a4();
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar2;
    FUN_015cc93c();
    local_179 = (byte)uVar2;
    local_189 = 0;
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      puVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_selectedBubblePath_026b0f00);
      _objc_retainAutoreleasedReturnValue();
      local_189 = 1;
      local_188 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar3 != (undefined *)0x0;
    }
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    puVar3 = local_148;
    local_17a = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isEnabled_026a0ef0);
    if ((((ulong)puVar3 & 1) == 0) && ((local_17a & 1) == 0)) {
      local_130 = (undefined *)0x0;
      local_16c = 1;
    }
    else {
      local_2cc = 0;
      if ((local_179 & 1) != 0) {
        local_2cc = 0;
        FUN_015cc9d8();
      }
      local_18a = (byte)local_2cc & 1;
      if ((local_179 & 1) != 0) {
        local_198 = (undefined *)(long)(int)(uint)((local_2cc & 1) != 0);
        puVar3 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lastBubbleDarkMode_026b0f08);
        if ((-1 < (long)puVar3) &&
           (puVar3 = local_148,
           (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lastBubbleDarkMode_026b0f08),
           puVar3 != local_198)) {
          puVar3 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_imageCache_026b0e70);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_setLastBubbleDarkMode__026b0e10,local_198);
      }
      local_320 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_1a9 = 0;
      local_1b9 = 0;
      local_1c9 = 0;
      local_1d9 = 0;
      if ((local_179 & 1) == 0) {
        lVar6 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_1c9 = 1;
        local_1c8 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_320,PTR_s_stringWithFormat__0269cca8,&cf______1fx__1f___);
        _objc_retainAutoreleasedReturnValue();
        local_1d9 = 1;
        local_1d8 = local_320;
      }
      else {
        lVar6 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_1a9 = 1;
        local_1a8 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_320,PTR_s_stringWithFormat__0269cca8,&cf_________1fx__1f___);
        _objc_retainAutoreleasedReturnValue();
        local_1b9 = 1;
        local_1b8 = local_320;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = local_320;
      if ((local_1d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d8);
      }
      if ((local_1c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c8);
      }
      if ((local_1b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1b8);
      }
      if ((local_1a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1a8);
      }
      puVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_imageCache_026b0e70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_1e8;
      if (local_1e8 == (undefined *)0x0) {
        uVar2 = local_178;
        FUN_015ccbb4(local_178,local_179 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = (undefined *)0x0;
        local_1f0 = uVar2;
        if ((local_18a & 1) != 0) {
          _memset(auStack_240,0,0x40);
          uVar2 = local_1f0;
          (*(code *)PTR__objc_retain_02578638)();
          local_388 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,
                     0x10);
          if (local_388 != 0) {
            lVar6 = *local_230;
            local_390 = 0;
            do {
              do {
                if (*local_230 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_230 - lVar6,uVar2);
                }
                local_200 = *(undefined8 *)(local_238 + local_390 * 8);
                local_251 = 0;
                local_261 = false;
                bVar1 = (local_17a & 1) == 0;
                if (bVar1) {
                  local_3b0 = (undefined *)0x0;
                }
                else {
                  local_3b0 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bubblePngPaths_026b0f10);
                  _objc_retainAutoreleasedReturnValue();
                  local_251 = 1;
                  local_250 = local_3b0;
                  FUN_015cce60();
                  _objc_retainAutoreleasedReturnValue();
                  local_260 = local_3b0;
                }
                local_261 = !bVar1;
                (*(code *)PTR__objc_retain_02578638)();
                local_248 = local_3b0;
                if ((local_261 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_260);
                }
                if ((local_251 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_250);
                }
                puVar3 = local_248;
                (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
                if (puVar3 == (undefined *)0x0) {
                  puVar4 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_pngPaths_026b0f18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar4;
                  FUN_015cce60();
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = local_248;
                  local_248 = puVar5;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                }
                puVar3 = local_248;
                (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
                if (puVar3 == (undefined *)0x0) {
LAB_015cc58c:
                  local_16c = 0;
                }
                else {
                  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIImage_026cdfd0,
                             PTR_s_imageWithContentsOfFile__0269e0e0,local_248);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = local_1f8;
                  local_1f8 = puVar4;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  if (local_1f8 == (undefined *)0x0) goto LAB_015cc58c;
                  local_16c = 2;
                }
                _objc_storeStrong(&local_248,0);
                if (local_16c != 0) goto LAB_015cc614;
                local_390 = local_390 + 1;
              } while (local_390 < local_388);
              local_388 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                         auStack_a8,0x10);
              local_390 = 0;
            } while (local_388 != 0);
          }
          local_16c = 0;
LAB_015cc614:
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if (local_1f8 == (undefined *)0x0) {
          _memset(auStack_2b0,0,0x40);
          uVar2 = local_1f0;
          (*(code *)PTR__objc_retain_02578638)();
          local_3e8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,
                     0x10);
          if (local_3e8 != 0) {
            lVar6 = *local_2a0;
            local_3f0 = 0;
            do {
              do {
                if (*local_2a0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_2a0 - lVar6,uVar2);
                }
                local_270 = *(undefined8 *)(local_2a8 + local_3f0 * 8);
                puVar4 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,local_138,local_160,local_148,
                           PTR_s_imageForResolvedKey_isDark_size__026b0f20,local_270,0,local_168,
                           local_17a & 1);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = local_1f8;
                local_1f8 = puVar4;
                (*(code *)PTR__objc_release_02578630)(puVar3);
                if (local_1f8 != (undefined *)0x0) {
                  local_16c = 4;
                  goto LAB_015cc7e0;
                }
                local_3f0 = local_3f0 + 1;
              } while (local_3f0 < local_3e8);
              local_3e8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,
                         auStack_128,0x10);
              local_3f0 = 0;
            } while (local_3e8 != 0);
          }
          local_16c = 0;
LAB_015cc7e0:
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if (local_1f8 != (undefined *)0x0) {
          puVar3 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_imageCache_026b0e70);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        puVar3 = local_1f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar3;
        local_16c = 1;
        _objc_storeStrong(&local_1f8);
        _objc_storeStrong(&local_1f0,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar3;
        local_16c = 1;
      }
      _objc_storeStrong(&local_1e8);
      _objc_storeStrong(&local_1a0,0);
    }
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

