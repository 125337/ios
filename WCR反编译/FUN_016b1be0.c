// FUN_016b1be0 @ 016b1be0

void FUN_016b1be0(double param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  cfstringStruct *local_3c8;
  undefined *local_380;
  cfstringStruct **local_340;
  cfstringStruct **local_338;
  cfstringStruct **local_328;
  cfstringStruct **local_318;
  cfstringStruct **local_310;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  code *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_298;
  long local_290;
  undefined *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  undefined *local_218;
  byte *local_210;
  byte local_201;
  undefined *local_200;
  char *local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  byte *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  char *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined *local_158;
  byte *local_150;
  byte local_141;
  undefined *local_140;
  char *local_138;
  char *local_130;
  undefined *local_128;
  char *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined *local_f0;
  byte *local_e8;
  byte local_d9;
  char *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  uint local_b4;
  char *local_b0;
  byte local_a1;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58 [3];
  undefined1 local_39;
  cfstringStruct *local_38;
  byte local_2a;
  byte local_29;
  char *local_28;
  
  local_2a = param_4;
  local_29 = param_3;
  FUN_016a8f84();
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_repeatUseThemeIcon_026b2c38);
  local_39 = SUB81(pcVar2,0);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatCurrentFolder_026b2c60);
    _objc_retainAutoreleasedReturnValue();
    local_3c8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_3c8 = &cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_3c8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_c0;
    FUN_016b4524();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar2;
    FUN_016a8f84();
    FUN_016a8ff0();
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_________);
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = DAT_028e3d58;
    local_d0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3d58,PTR_s_objectForKey__0269e048,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_d0;
    uVar1 = DAT_028e3d68;
    local_d8 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      local_e8 = &local_d9;
      local_d9 = 0;
      local_110 = PTR___NSConcreteGlobalBlock_02578658;
      local_108 = 0xd0800000;
      local_104 = 0;
      local_100 = FUN_016b46d4;
      local_f8 = &DAT_02586b00;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = puVar6;
      _dispatch_sync(uVar1,&local_110);
      if ((local_d9 & 1) == 0) {
        puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_d0;
        local_120 = (char *)0x0;
        local_118 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = puVar6;
        pcVar8 = (char *)(ulong)(local_29 & 1);
        FUN_016b4730(pcVar8,local_2a & 1);
        _objc_retainAutoreleasedReturnValue();
        local_130 = pcVar8;
        FUN_016b47d8(pcVar8,local_c8,local_118);
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = local_120;
        local_120 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        if ((local_120 == (char *)0x0) && ((local_2a & 1) != 0)) {
          pcVar9 = (char *)(ulong)(local_29 & 1);
          FUN_016b4730(pcVar9,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_138 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf____Light___);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = DAT_028e3d68;
          local_150 = &local_141;
          local_141 = 0;
          local_178 = PTR___NSConcreteGlobalBlock_02578658;
          local_170 = 0xd0800000;
          local_16c = 0;
          local_168 = FUN_016b5008;
          local_160 = &DAT_02586b00;
          local_140 = puVar6;
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = puVar6;
          _dispatch_sync(uVar1,&local_178);
          if ((local_141 & 1) == 0) {
            pcVar8 = local_138;
            FUN_016b47d8(local_138,local_c8,local_118);
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = local_120;
            local_120 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            puVar6 = local_140;
            uVar1 = DAT_028e3d68;
            if (local_120 == (char *)0x0) {
              local_1a0 = PTR___NSConcreteStackBlock_02578660;
              local_198 = 0xc2000000;
              local_194 = 0;
              local_190 = FUN_016b5064;
              local_188 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_180 = puVar6;
              _dispatch_barrier_async(uVar1,&local_1a0);
              _objc_storeStrong(&local_180,0);
            }
            else {
              _objc_storeStrong(&local_128,local_140);
            }
          }
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_138,0);
        }
        if (local_120 == (char *)0x0) {
          local_1a1 = local_2a & 1;
          pcVar9 = (char *)(ulong)((local_29 ^ 1) & 1);
          FUN_016b4730(pcVar9,local_1a1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1b0 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_________);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = DAT_028e3d68;
          local_1c8 = &local_1b9;
          local_1b9 = 0;
          local_1f0 = PTR___NSConcreteGlobalBlock_02578658;
          local_1e8 = 0xd0800000;
          local_1e4 = 0;
          local_1e0 = FUN_016b50b0;
          local_1d8 = &DAT_02586b00;
          local_1b8 = puVar6;
          (*(code *)PTR__objc_retain_02578638)();
          local_1d0 = puVar6;
          _dispatch_sync(uVar1,&local_1f0);
          if ((local_1b9 & 1) == 0) {
            pcVar8 = local_1b0;
            FUN_016b47d8(local_1b0,local_c8,local_118);
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = local_120;
            local_120 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            if ((local_120 == (char *)0x0) && ((local_1a1 & 1) != 0)) {
              pcVar9 = (char *)(ulong)((local_29 ^ 1) & 1);
              FUN_016b4730(pcVar9,0);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_1f8 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf____Light___);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = DAT_028e3d68;
              local_210 = &local_201;
              local_201 = 0;
              local_238 = PTR___NSConcreteGlobalBlock_02578658;
              local_230 = 0xd0800000;
              local_22c = 0;
              local_228 = FUN_016b510c;
              local_220 = &DAT_02586b00;
              local_200 = puVar6;
              (*(code *)PTR__objc_retain_02578638)();
              local_218 = puVar6;
              _dispatch_sync(uVar1,&local_238);
              if ((local_201 & 1) == 0) {
                pcVar8 = local_1f8;
                FUN_016b47d8(local_1f8,local_c8,local_118);
                _objc_retainAutoreleasedReturnValue();
                pcVar9 = local_120;
                local_120 = pcVar8;
                (*(code *)PTR__objc_release_02578630)(pcVar9);
                puVar6 = local_200;
                uVar1 = DAT_028e3d68;
                if (local_120 == (char *)0x0) {
                  local_260 = PTR___NSConcreteStackBlock_02578660;
                  local_258 = 0xc2000000;
                  local_254 = 0;
                  local_250 = FUN_016b5168;
                  local_248 = &DAT_02578c20;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_240 = puVar6;
                  _dispatch_barrier_async(uVar1,&local_260);
                  _objc_storeStrong(&local_240,0);
                }
                else {
                  _objc_storeStrong(&local_128,local_200);
                }
              }
              _objc_storeStrong(&local_218);
              _objc_storeStrong(&local_200,0);
              _objc_storeStrong(&local_1f8,0);
            }
            puVar6 = local_1b8;
            uVar1 = DAT_028e3d68;
            if (local_120 == (char *)0x0) {
              local_288 = PTR___NSConcreteStackBlock_02578660;
              local_280 = 0xc2000000;
              local_27c = 0;
              local_278 = FUN_016b51b4;
              local_270 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_268 = puVar6;
              _dispatch_barrier_async(uVar1,&local_288);
              _objc_storeStrong(&local_268,0);
            }
            else {
              _objc_storeStrong(&local_128,local_1b8);
            }
          }
          _objc_storeStrong(&local_1d0);
          _objc_storeStrong(&local_1b8,0);
          _objc_storeStrong(&local_1b0,0);
        }
        puVar6 = local_d0;
        uVar1 = DAT_028e3d68;
        if (local_120 == (char *)0x0) {
          local_2d8 = PTR___NSConcreteStackBlock_02578660;
          local_2d0 = 0xc2000000;
          local_2cc = 0;
          local_2c8 = FUN_016b57b8;
          local_2c0 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_2b8 = puVar6;
          _dispatch_barrier_async(uVar1,&local_2d8);
          _objc_storeStrong(&local_2b8,0);
        }
        else {
          pcVar8 = local_120;
          FUN_016b5200();
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = local_120;
          local_120 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_size_026cab00);
          dVar10 = param_1;
          dVar11 = param_1;
          local_2a0 = param_1;
          local_298 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_size_026cab00);
          local_290 = (long)(param_1 * dVar11 * 4.0);
          local_2b0 = dVar10;
          local_2a8 = dVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e3d58,PTR_s_setObject_forKey_cost__0269e0c0,local_120,local_128,
                     local_290);
        }
        pcVar9 = local_120;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar9;
        local_b4 = 1;
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_128,0);
        _objc_storeStrong(&local_120,0);
        _objc_storeStrong(&local_118,0);
      }
      else {
        local_28 = (char *)0x0;
        local_b4 = 1;
      }
      _objc_storeStrong(&local_f0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b4 = 1;
      local_28 = pcVar9;
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    goto LAB_016b314c;
  }
  local_58[0] = 0;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatThemeIconMeLight_026b2c40);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_38;
  local_60 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatThemeIconMeDark_026b2c48);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_38;
  local_68 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatThemeIconOtherLight_026b2c50);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_38;
  local_70 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatThemeIconOtherDark_026b2c58);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar3;
  if ((local_29 & 1) == 0) {
    if ((local_2a & 1) == 0) {
      local_318 = &local_70;
    }
    else {
      local_318 = &local_78;
    }
    _objc_storeStrong(local_58,*local_318);
  }
  else {
    if ((local_2a & 1) == 0) {
      local_310 = &local_60;
    }
    else {
      local_310 = &local_68;
    }
    _objc_storeStrong(local_58,*local_310);
  }
  if ((local_58[0] == 0) ||
     (lVar4 = local_58[0], (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0),
     lVar4 == 0)) {
    if ((local_29 & 1) == 0) {
      local_328 = &local_70;
    }
    else {
      local_328 = &local_60;
    }
    _objc_storeStrong(local_58,*local_328);
  }
  if ((local_58[0] == 0) ||
     (lVar4 = local_58[0], (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0),
     lVar4 == 0)) {
    if ((local_29 & 1) == 0) {
      if ((local_2a & 1) == 0) {
        local_340 = &local_60;
      }
      else {
        local_340 = &local_68;
      }
      _objc_storeStrong(local_58,*local_340);
    }
    else {
      if ((local_2a & 1) == 0) {
        local_338 = &local_70;
      }
      else {
        local_338 = &local_78;
      }
      _objc_storeStrong(local_58,*local_338);
    }
  }
  if ((local_58[0] == 0) ||
     (lVar4 = local_58[0], (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0),
     lVar4 == 0)) {
LAB_016b2294:
    local_28 = (char *)0x0;
    local_b4 = 1;
  }
  else {
    pcVar9 = "MMServiceCenter";
    _objc_getClass(lVar4);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = "MMThemeManager";
    _objc_getClass();
    pcVar5 = pcVar9;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_getService__0269d170,pcVar8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    if (local_80 == (char *)0x0) {
LAB_016b2260:
      local_b4 = 0;
    }
    else {
      local_91 = 0;
      local_a1 = 0;
      local_380 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_2a & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_a1 = 1;
        local_a0 = local_380;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_380;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_380;
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      pcVar9 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_svgImageNamed_color__0269f760,local_58[0],local_88);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar9;
      if (pcVar9 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar9;
      }
      local_b4 = (uint)(pcVar9 != (char *)0x0);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_88,0);
      if (local_b4 == 0) goto LAB_016b2260;
    }
    _objc_storeStrong(&local_80,0);
    if (local_b4 == 0) goto LAB_016b2294;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
LAB_016b314c:
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

