// FUN_0197533c @ 0197533c

void FUN_0197533c(float param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  double dVar9;
  double local_198;
  undefined *local_140;
  uint local_134;
  undefined *local_130;
  undefined *local_128;
  uint local_120;
  undefined2 local_11a;
  undefined1 *local_118;
  undefined *local_110;
  undefined1 *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined *local_e8;
  byte local_d9;
  undefined1 *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  uint local_54;
  undefined *local_50;
  undefined *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_50 = (undefined1 *)0x0;
  _objc_storeStrong(&local_50,param_2);
  puVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (puVar5 == (undefined1 *)0x0) {
    local_48 = (undefined *)0x0;
    local_54 = 1;
    goto LAB_01975f18;
  }
  puVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_hasPrefix__0269d320,&cf_rgb);
  if (((ulong)puVar5 & 1) == 0) {
    local_e8 = (undefined1 *)0x0;
    puVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_0x);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        if ((puVar2 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) ||
           (puVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0)
           , (dword *)puVar2 == &MACH_HEADER.cpusubtype)) {
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_0123456789abcdefABCDEF);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_f8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_50;
          puVar4 = PTR_s_rangeOfCharacterFromSet__0269db68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_rangeOfCharacterFromSet__0269db68,local_f8);
          local_108 = puVar5;
          local_100 = puVar4;
          if (puVar5 == (undefined1 *)0x7fffffffffffffff) {
            _objc_storeStrong(0,&local_e8,local_50);
          }
          _objc_storeStrong(&local_f8,0);
        }
        goto LAB_01975af4;
      }
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,2);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if ((dword *)puVar4 == &MACH_HEADER.cpusubtype) {
        puVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_substringFromIndex__0269d120);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_substringToIndex__0269d6c0,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_____);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_e8;
        local_e8 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_019759c4:
        local_54 = 0;
      }
      else {
        puVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        if (puVar2 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
          _objc_storeStrong(0,&local_e8,local_f0);
          goto LAB_019759c4;
        }
        local_48 = (undefined *)0x0;
        local_54 = 1;
      }
      _objc_storeStrong(&local_f0,0);
      if (local_54 == 0) goto LAB_01975af4;
    }
    else {
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_e8;
      local_e8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
LAB_01975af4:
      puVar5 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if (puVar5 == (undefined1 *)0x0) {
        local_48 = (undefined *)0x0;
        local_54 = 1;
      }
      else {
        puVar5 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        if ((puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) ||
           (puVar5 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0)
           , (dword *)puVar5 == &MACH_HEADER.cputype)) {
          puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
          _objc_retainAutoreleasedReturnValue();
          local_110 = puVar5;
          for (local_118 = (undefined1 *)0x0; puVar2 = local_118, puVar5 = local_e8,
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0), puVar2 < puVar5
              ; local_118 = local_118 + 1) {
            puVar5 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_characterAtIndex__0269fa18,local_118);
            local_11a = SUB82(puVar5,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_appendFormat__0269d148,&cf__C_C);
          }
          _objc_storeStrong(&local_e8,local_110);
          _objc_storeStrong(&local_110,0);
        }
        puVar5 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        if ((puVar5 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) ||
           (puVar5 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0)
           , (dword *)puVar5 == &MACH_HEADER.cpusubtype)) {
          puVar5 = PTR__OBJC_CLASS___NSScanner_026ce368;
          local_120 = 0;
          puVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_substringToIndex__0269d6c0,6);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_scannerWithString__0269fa30);
          _objc_retainAutoreleasedReturnValue();
          local_128 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar5 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_scanHexInt__0269fa38,&local_120);
          if (((ulong)puVar5 & 1) == 0) {
            local_48 = (undefined *)0x0;
            local_54 = 1;
          }
          else {
            puVar5 = (undefined *)(ulong)local_120;
            FUN_01963e0c();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_e8;
            local_130 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
            puVar5 = PTR__OBJC_CLASS___NSScanner_026ce368;
            if ((dword *)puVar4 == &MACH_HEADER.cpusubtype) {
              local_134 = 0;
              puVar4 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_substringFromIndex__0269d120,6);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_scannerWithString__0269fa30);
              _objc_retainAutoreleasedReturnValue();
              local_140 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar5 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_scanHexInt__0269fa38,&local_134)
              ;
              bVar1 = ((ulong)puVar5 & 1) != 0;
              if (bVar1) {
                dVar9 = (double)NEON_ucvtf((ulong)local_134);
                puVar5 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar9 / 255.0,local_130,PTR_s_colorWithAlphaComponent__026ca578);
                _objc_retainAutoreleasedReturnValue();
                local_48 = puVar5;
              }
              local_54 = (uint)bVar1;
              _objc_storeStrong(&local_140,0);
              if (local_54 == 0) goto LAB_01975eb0;
            }
            else {
LAB_01975eb0:
              puVar5 = local_130;
              (*(code *)PTR__objc_retain_02578638)();
              local_48 = puVar5;
              local_54 = 1;
            }
            _objc_storeStrong(&local_130,0);
          }
          _objc_storeStrong(&local_128,0);
        }
        else {
          local_48 = (undefined *)0x0;
          local_54 = 1;
        }
      }
    }
    _objc_storeStrong(&local_e8,0);
  }
  else {
    puVar5 = local_50;
    puVar6 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&cf__);
    puVar4 = local_50;
    puVar7 = PTR_s_rangeOfString__0269d838;
    local_78 = puVar5;
    local_70 = puVar6;
    local_68 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&cf__);
    local_90 = puVar4;
    local_88 = puVar7;
    local_80 = puVar4;
    if (((local_68 == (undefined1 *)0x7fffffffffffffff) ||
        (puVar4 == (undefined1 *)0x7fffffffffffffff)) || (puVar4 <= local_68)) {
      local_48 = (undefined *)0x0;
      local_54 = 1;
    }
    else {
      local_a8 = local_68 + 1;
      local_a0 = puVar4 + (-1 - (long)local_68);
      puVar5 = local_50;
      local_40 = local_a0;
      local_38 = local_a8;
      local_30 = local_a8;
      local_28 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_substringWithRange__0269d138,local_a8,local_a0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
      if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar5) {
        puVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar9 = (double)param_1 / 255.0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_b0;
        local_b8 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        fVar8 = SUB84(dVar9,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar9 = (double)fVar8 / 255.0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_b0;
        local_c0 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectAtIndexedSubscript__0269cc78,2);
        fVar8 = SUB84(dVar9,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar9 = (double)fVar8 / 255.0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_b0;
        local_c8 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
        fVar8 = SUB84(dVar9,0);
        local_d9 = 0;
        if (puVar2 < &MACH_HEADER.cputype) {
          local_198 = 1.0;
        }
        else {
          puVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectAtIndexedSubscript__0269cc78,3)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_198 = (double)fVar8;
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        local_d0 = local_198;
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,local_c0,local_c8,local_198,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar5;
      }
      else {
        local_48 = (undefined *)0x0;
      }
      local_54 = 1;
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_98,0);
    }
  }
  _objc_storeStrong(&local_60,0);
LAB_01975f18:
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

