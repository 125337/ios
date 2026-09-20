// prepareImageDataForEmoticon: @ 00f3bd08

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::prepareImageDataForEmoticon_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *local_378;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_340;
  int local_324;
  undefined *local_310;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2d8;
  double local_2a8;
  double local_298;
  double local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  double dStack_198;
  long local_190;
  undefined *local_188;
  byte local_17e;
  byte local_17d;
  int local_17c;
  undefined *local_178;
  undefined *local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined1 local_b1;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_6b;
  byte local_6a;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  undefined *local_40;
  SEL local_38;
  undefined *local_30;
  undefined *local_28;
  
  dVar3 = DAT_02323e70;
  dVar2 = DAT_02323d00;
  dVar1 = DAT_02323c60;
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (puVar4 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    local_50 = 0x4f0000;
    dVar11 = 1024.0;
    local_58 = 0x4090000000000000;
    puVar4 = local_40;
    _CGImageSourceCreateWithData(local_40,0);
    local_60 = puVar4;
    if ((puVar4 == (undefined *)0x0) || (_CGImageSourceGetCount(), puVar4 == (undefined *)0x0)) {
      if (local_60 != (undefined *)0x0) {
        _CFRelease(local_60);
      }
      local_28 = (undefined *)0x0;
      local_44 = 1;
    }
    else {
      puVar4 = local_60;
      _CGImageSourceGetType();
      local_69 = false;
      local_68 = puVar4;
      if (puVar4 != (undefined *)0x0) {
        _UTTypeConformsTo(puVar4,&cf_com_compuserve_gif);
        local_69 = (int)puVar4 != 0;
      }
      local_6a = false;
      if (local_68 != (undefined *)0x0) {
        puVar4 = local_68;
        _UTTypeConformsTo(local_68,*(undefined8 *)PTR__kUTTypePNG_02578730);
        local_6a = (int)puVar4 != 0;
      }
      local_6b = false;
      if (local_68 != (undefined *)0x0) {
        puVar4 = local_68;
        _UTTypeConformsTo(local_68,*(undefined8 *)PTR__kUTTypeJPEG_02578720);
        local_6b = (int)puVar4 != 0;
      }
      puVar4 = local_60;
      _CGImageSourceCopyPropertiesAtIndex(local_60,0,0);
      local_80 = puVar4;
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__kCGImagePropertyPixelWidth_02578468);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_80;
      local_88 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__kCGImagePropertyPixelHeight_02578460);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_60;
      local_90 = dVar11;
      _CFRelease();
      if ((local_88 < 1.0) || (local_90 < 1.0)) {
        local_28 = (undefined *)0x0;
        local_44 = 1;
      }
      else {
        local_a0 = local_88;
        local_a8 = local_90;
        if (local_90 <= local_88) {
          local_298 = local_88;
        }
        else {
          local_298 = local_90;
        }
        local_b0 = local_298;
        local_98 = local_298;
        local_b1 = local_298 <= 1024.0;
        if ((((bool)local_b1) &&
            (puVar4 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0), puVar8 = local_40
            , puVar4 < (undefined *)0x4f0001)) &&
           (((local_69 & 1) != 0 || (((local_6a & 1) != 0 || ((local_6b & 1) != 0)))))) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar8;
          local_44 = 1;
        }
        else {
          local_c8 = 0x3ff0000000000000;
          local_d0 = 1024.0 / local_98;
          local_2a8 = local_d0;
          if (1.0 < local_d0) {
            local_2a8 = 1.0;
          }
          local_d8 = local_2a8;
          local_c0 = local_2a8;
          if ((local_69 & 1) == 0) {
            puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_40);
            _objc_retainAutoreleasedReturnValue();
            local_170 = puVar4;
            if (puVar4 == (undefined *)0x0) {
              local_28 = (undefined *)0x0;
              local_44 = 1;
            }
            else {
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGImage_0269e0e8);
              local_178 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                local_324 = 0;
              }
              else {
                _CGImageGetAlphaInfo();
                local_324 = (int)puVar4;
              }
              local_17c = local_324;
              local_17d = true;
              if (((local_324 != 4) && (local_17d = true, local_324 != 3)) &&
                 (local_17d = true, local_324 != 2)) {
                local_17d = local_324 == 1;
              }
              local_17e = true;
              if ((local_6a & 1) == 0) {
                local_17e = local_17d;
              }
              local_188 = (undefined *)0x0;
              for (local_190 = 0; local_190 < 10; local_190 = local_190 + 1) {
                _objc_autoreleasePoolPush(local_190 + -10);
                local_1a8 = 0x4024000000000000;
                local_1b0 = (double)(long)(local_88 * local_c0);
                local_340 = local_1b0;
                if (local_1b0 <= 10.0) {
                  local_340 = 10.0;
                }
                local_1b8 = local_340;
                local_1c0 = 0x4024000000000000;
                local_1c8 = (double)(long)(local_90 * local_c0);
                local_350 = local_1c8;
                if (local_1c8 <= 10.0) {
                  local_350 = 10.0;
                }
                local_1d0 = local_350;
                FUN_00f3845c();
                local_1a0 = local_340;
                dStack_198 = local_350;
                _UIGraphicsBeginImageContextWithOptions
                          (local_340,local_350,0x3ff0000000000000,(local_17d ^ 1) & 1);
                uStack_1e8 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
                local_1f0 = *(undefined8 *)PTR__CGPointZero_025782e0;
                dStack_1d8 = dStack_198;
                local_1e0 = local_1a0;
                puVar4 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f0,uStack_1e8,local_1a0,dStack_198,local_170,
                           PTR_s_drawInRect__026ca610);
                _UIGraphicsGetImageFromCurrentImageContext();
                _objc_retainAutoreleasedReturnValue();
                local_1f8 = puVar4;
                _UIGraphicsEndImageContext();
                if (local_1f8 == (undefined *)0x0) {
                  local_28 = (undefined *)0x0;
                  local_44 = 1;
                }
                else {
                  if ((local_17e & 1) == 0) {
                    for (local_200 = 0.95; DAT_02323c78 <= local_200;
                        local_200 = local_200 - DAT_02323c68) {
                      puVar8 = local_1f8;
                      _UIImageJPEGRepresentation(local_200);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = local_188;
                      local_188 = puVar8;
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                      puVar4 = local_188;
                      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                      if (puVar4 < (undefined *)0x4f0001) break;
                    }
                  }
                  else {
                    puVar8 = local_1f8;
                    _UIImagePNGRepresentation();
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = local_188;
                    local_188 = puVar8;
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                  }
                  puVar4 = local_188;
                  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                  if ((puVar4 == (undefined *)0x0) ||
                     (puVar4 = local_188,
                     (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0),
                     (undefined *)0x4f0000 < puVar4)) {
                    puVar4 = local_188;
                    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                    if (puVar4 == (undefined *)0x0) {
                      local_358 = dVar2;
                      uVar10 = 0;
                    }
                    else {
                      puVar4 = local_188;
                      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                      uVar10 = 0x4153c00000000000;
                      local_358 = SQRT(5177344.0 / (double)puVar4) * dVar3;
                    }
                    if (local_358 <= 0.5) {
                      local_360 = 0.5;
                    }
                    else {
                      local_360 = local_358;
                    }
                    if (local_360 <= dVar1) {
                      local_368 = local_360;
                    }
                    else {
                      local_368 = dVar1;
                    }
                    local_c0 = local_c0 * local_368;
                    _objc_storeStrong(uVar10,&local_188,0);
                    local_44 = 0;
                  }
                  else {
                    local_44 = 5;
                  }
                }
                _objc_storeStrong(&local_1f8,0);
                _objc_autoreleasePoolPop();
                if (local_44 != 0) {
                  iVar9 = local_44 + -5;
                  if (iVar9 != 0) goto LAB_00f3cb84;
                  break;
                }
              }
              puVar4 = local_188;
              (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
              if (puVar4 < (undefined *)0x4f0001) {
                local_378 = local_188;
              }
              else {
                local_378 = (undefined *)0x0;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = local_378;
              iVar9 = 1;
              local_44 = 1;
LAB_00f3cb84:
              _objc_storeStrong(iVar9,&local_188,0);
            }
            _objc_storeStrong(&local_170,0);
          }
          else {
            _NSTemporaryDirectory();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
            puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar8,PTR_s_stringWithFormat__0269cca8,&cf_wcr_image_to_emoticon____gif);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_writeToFile_atomically__0269f928,local_e0,1);
            if (((ulong)puVar4 & 1) == 0) {
              local_28 = (undefined *)0x0;
              local_44 = 1;
            }
            else {
              local_e8 = (undefined *)0x0;
              for (local_f0 = 0; local_f0 < 10; local_f0 = local_f0 + 1) {
                local_108 = 0x4024000000000000;
                local_110 = (double)(long)(local_88 * local_c0);
                local_2d8 = local_110;
                if (local_110 <= 10.0) {
                  local_2d8 = 10.0;
                }
                local_118 = local_2d8;
                local_120 = 0x4024000000000000;
                local_128 = (double)(long)(local_90 * local_c0);
                local_2e8 = local_128;
                if (local_128 <= 10.0) {
                  local_2e8 = 10.0;
                }
                local_130 = local_2e8;
                FUN_00f3845c(local_f0 + -10);
                puVar8 = local_30;
                local_100 = local_2d8;
                local_f8 = local_2e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (0,local_2d8,local_2e8,local_30,
                           PTR_s_processGIFAtPath_scale_targetSiz_026ac198,local_e0);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_e8;
                local_e8 = puVar8;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                puVar4 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
                if ((puVar4 != (undefined *)0x0) &&
                   (puVar4 = local_e8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
                   puVar4 < (undefined *)0x4f0001)) break;
                puVar4 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
                if (puVar4 == (undefined *)0x0) {
                  local_2f0 = dVar2;
                  uVar10 = 0;
                }
                else {
                  puVar4 = local_e8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
                  uVar10 = 0x4153c00000000000;
                  local_2f0 = SQRT(5177344.0 / (double)puVar4) * dVar3;
                }
                local_138 = local_2f0;
                local_140 = dVar1;
                local_150 = 0x3fe0000000000000;
                local_158 = local_2f0;
                if (local_2f0 <= 0.5) {
                  local_2f8 = 0.5;
                }
                else {
                  local_2f8 = local_2f0;
                }
                local_160 = local_2f8;
                local_148 = local_2f8;
                if (local_2f8 <= dVar1) {
                  local_300 = local_2f8;
                }
                else {
                  local_300 = dVar1;
                }
                local_168 = local_300;
                local_c0 = local_c0 * local_300;
                _objc_storeStrong(uVar10,&local_e8,0);
              }
              puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
              if (puVar4 < (undefined *)0x4f0001) {
                local_310 = local_e8;
              }
              else {
                local_310 = (undefined *)0x0;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = local_310;
              local_44 = 1;
              _objc_storeStrong(&local_e8,0);
            }
            _objc_storeStrong(&local_e0,0);
          }
        }
      }
      _objc_storeStrong(&local_80,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

