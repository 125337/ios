// processGIFAtPath:scale:targetSize:speed: @ 00f385cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

ID __thiscall
WCRefineEmoticonToolsHelper::processGIFAtPath_scale_targetSize_speed_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,ID param_3,double param_4,
          CGSize param_5,double param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double in_d2;
  double in_d3;
  double dVar17;
  undefined *local_3a8;
  double local_350;
  double local_348;
  undefined *local_330;
  undefined1 *local_2e8;
  ulong local_2e0;
  ulong local_2d8;
  double local_2d0;
  undefined *local_238;
  undefined8 local_230;
  undefined8 local_228;
  double local_220;
  double local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  double local_1f8;
  double local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 *local_198;
  ulong local_190;
  ulong local_188;
  undefined4 local_17c;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  undefined4 local_15c;
  ulong local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  undefined1 *local_118;
  double local_110;
  double local_108;
  byte local_fa;
  byte local_f9;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  char *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  char *local_c0;
  ulong local_b8;
  int local_ac;
  double local_a8;
  double local_a0;
  ulong local_98;
  SEL local_90;
  ID local_88;
  double local_80;
  double local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  local_90 = param_2;
  local_88 = param_1;
  local_80 = param_6;
  local_78 = in_d2;
  _objc_storeStrong(&local_98,param_3,param_3,param_5.field0_0x0,param_5.field1_0x8);
  uVar3 = local_98;
  local_a8 = in_d3;
  local_a0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  uVar4 = local_98;
  if (uVar3 == 0) {
    local_70 = (undefined *)0x0;
    local_ac = 1;
    goto LAB_00f3990c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = uVar4;
  local_c0 = (char *)0x0;
  uVar4 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if ((uVar5 & 1) == 0) {
LAB_00f389e0:
    puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar6;
    _CGImageSourceCreateWithURL(puVar6,0);
    local_f0 = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      if (local_c0 != (char *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      local_70 = (undefined *)0x0;
      local_ac = 1;
    }
    else {
      _CGImageSourceGetCount();
      local_f8 = puVar6;
      if (puVar6 == (undefined1 *)0x0) {
        _CFRelease(local_f0);
        if (local_c0 != (char *)0x0) {
          puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        local_70 = (undefined *)0x0;
        local_ac = 1;
      }
      else {
        local_f9 = true;
        if ((local_a0 <= 0.0) && (local_f9 = false, 0.0 < local_80)) {
          local_f9 = 0.0 < local_78;
        }
        local_fa = 0.0 < local_a8 && DAT_02323db0 < ABS(local_a8 - 1.0);
        local_108 = 0.0;
        local_110 = 0.0;
        dVar14 = 0.0;
        if ((bool)local_f9 != false) {
          puVar12 = local_f0;
          _CGImageSourceCreateImageAtIndex(local_f0,0,0);
          local_118 = puVar12;
          if (puVar12 == (undefined1 *)0x0) {
            _CFRelease(local_f0);
            if (local_c0 != (char *)0x0) {
              puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            local_70 = (undefined *)0x0;
            local_ac = 1;
            goto LAB_00f398dc;
          }
          _CGImageGetWidth();
          local_120 = (double)puVar12;
          puVar12 = local_118;
          _CGImageGetHeight();
          local_128 = (double)puVar12;
          _CGImageRelease(local_118);
          if ((local_80 <= 0.0) || (local_78 <= 0.0)) {
            local_108 = local_120 * local_a0;
            local_110 = local_128 * local_a0;
          }
          else {
            local_108 = local_80;
            local_110 = local_78;
          }
          local_130 = 0x4090000000000000;
          if ((1024.0 < local_108) || (1024.0 < local_110)) {
            local_140 = 1024.0 / local_108;
            local_148 = 1024.0 / local_110;
            local_2d0 = local_148;
            if (local_140 < local_148) {
              local_2d0 = local_140;
            }
            local_150 = local_2d0;
            local_138 = local_2d0;
            local_108 = local_108 * local_2d0;
            local_110 = local_110 * local_2d0;
          }
          if (local_108 < 10.0) {
            local_108 = 10.0;
          }
          dVar14 = local_110;
          if (local_110 < 10.0) {
            dVar14 = 0.0;
            local_110 = 10.0;
          }
        }
        local_158 = 1;
        if (((local_fa & 1) != 0) && (dVar14 = local_a8, 5.0 < local_a8)) {
          local_15c = 1;
          dVar14 = local_a8 / 5.0;
          local_168 = (ulong)dVar14;
          local_2d8 = local_168;
          if ((long)local_168 < 2) {
            local_2d8 = 1;
          }
          local_170 = local_2d8;
          local_158 = local_2d8;
          if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < local_f8) {
            local_17c = 1;
            local_188 = (ulong)local_f8 / 2;
            local_2e0 = local_188;
            if (local_188 < 2) {
              local_2e0 = 1;
            }
            local_190 = local_2e0;
            local_178 = local_2e0;
            if ((long)local_2e0 < (long)local_2d8) {
              local_158 = local_2e0;
            }
          }
        }
        if ((local_fa & 1) == 0) {
          local_2e8 = local_f8;
        }
        else {
          local_2e8 = (undefined1 *)0x0;
          if (local_158 != 0) {
            local_2e8 = (undefined1 *)((ulong)(local_f8 + (local_158 - 1)) / local_158);
          }
        }
        local_198 = local_2e8;
        if ((((local_fa & 1) != 0) && (local_2e8 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) &&
           ((undefined1 *)((long)&MACH_HEADER.magic + 1) < local_f8)) {
          local_198 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        }
        if (local_198 == (undefined1 *)0x0) {
          local_198 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar6 = PTR__OBJC_CLASS___NSMutableData_026ce660;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = puVar6;
        _CGImageDestinationCreateWithData(puVar6,&cf_com_compuserve_gif,local_198,0);
        local_1a8 = puVar6;
        if (puVar6 == (undefined *)0x0) {
          _CFRelease(local_f0);
          if (local_c0 != (char *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          local_70 = (undefined *)0x0;
          local_ac = 1;
        }
        else {
          local_38 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448;
          local_48 = *(undefined8 *)PTR__kCGImagePropertyGIFLoopCount_02578450;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_40 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = puVar9;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_330 = local_1a8;
          _CGImageDestinationSetProperties(local_1a8,local_1b0);
          if ((local_f9 & 1) == 0) {
            local_330 = (undefined *)0x0;
          }
          else {
            _CGColorSpaceCreateDeviceRGB();
          }
          local_1b8 = local_330;
          for (local_1c0 = (undefined1 *)0x0; local_1c0 < local_f8;
              local_1c0 = local_1c0 + local_158) {
            _objc_autoreleasePoolPush((long)local_1c0 - (long)local_f8);
            puVar12 = local_f0;
            _CGImageSourceCreateImageAtIndex(local_f0,local_1c0,0);
            fVar13 = SUB84(dVar14,0);
            local_1c8 = puVar12;
            if (puVar12 == (undefined1 *)0x0) {
              local_ac = 4;
            }
            else {
              puVar12 = local_f0;
              _CGImageSourceCopyPropertiesAtIndex(local_f0,local_1c0,0);
              local_1d8 = puVar12;
              local_1d0 = puVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar12,PTR_s_objectForKeyedSubscript__0269d098,
                         *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448);
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = puVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar12,PTR_s_objectForKeyedSubscript__0269d098,
                         *(undefined8 *)PTR__kCGImagePropertyGIFUnclampedDelayTime_02578458);
              _objc_retainAutoreleasedReturnValue();
              local_1e8 = puVar12;
              if ((puVar12 == (undefined1 *)0x0) ||
                 ((*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_floatValue_026a5b48),
                 fVar13 <= 0.0)) {
                puVar11 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,
                           *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = local_1e8;
                local_1e8 = puVar11;
                (*(code *)PTR__objc_release_02578630)(puVar12);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_floatValue_026a5b48);
              if (fVar13 <= 0.0) {
                local_348 = DAT_02323c68;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_floatValue_026a5b48);
                local_348 = (double)fVar13;
              }
              local_1f0 = local_348;
              local_1f8 = local_348;
              if ((local_fa & 1) != 0) {
                if (5.0 < local_a8) {
                  local_350 = DAT_02323d38;
                }
                else {
                  local_350 = local_a8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_a8,local_348,local_88,
                             PTR_s_targetDelayForSpeed_originalDela_026ac128);
                }
                local_1f8 = local_350;
              }
              local_200 = local_1c8;
              local_208 = (undefined1 *)0x0;
              if (((local_f9 & 1) != 0) && (local_1b8 != (undefined *)0x0)) {
                puVar12 = (undefined1 *)0x0;
                _CGBitmapContextCreate(0,(long)local_108,(long)local_110,8,0,local_1b8,1);
                local_210 = puVar12;
                if (puVar12 != (undefined1 *)0x0) {
                  _CGContextSetInterpolationQuality(puVar12,3);
                  puVar12 = local_210;
                  uVar16 = 0;
                  uVar15 = 0;
                  dVar14 = local_108;
                  dVar17 = local_110;
                  FUN_00f39958();
                  local_230 = uVar15;
                  local_228 = uVar16;
                  local_220 = dVar14;
                  local_218 = dVar17;
                  _CGContextDrawImage(uVar15,uVar16,dVar14,dVar17,puVar12,local_1c8);
                  puVar12 = local_210;
                  _CGBitmapContextCreateImage();
                  local_208 = puVar12;
                  _CGContextRelease(local_210);
                  if (local_208 != (undefined1 *)0x0) {
                    local_200 = local_208;
                  }
                }
              }
              local_58 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448;
              local_68 = *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440;
              puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
              dVar14 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_60 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_68);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_50 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_58,1);
              _objc_retainAutoreleasedReturnValue();
              local_238 = puVar9;
              (*(code *)PTR__objc_release_02578630)(puVar8);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              _CGImageDestinationAddImage(local_1a8,local_200,local_238);
              if (local_208 != (undefined1 *)0x0) {
                _CGImageRelease(local_208);
              }
              _CGImageRelease(local_1c8);
              _objc_storeStrong(&local_238);
              _objc_storeStrong(&local_1e8,0);
              _objc_storeStrong(&local_1e0,0);
              _objc_storeStrong(&local_1d8,0);
              local_ac = 0;
            }
            _objc_autoreleasePoolPop();
          }
          if (local_1b8 != (undefined *)0x0) {
            _CGColorSpaceRelease(local_1b8);
          }
          bVar2 = (byte)local_1a8;
          _CGImageDestinationFinalize();
          _CFRelease(local_f0);
          _CFRelease(local_1a8);
          if (local_c0 != (char *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          if (((bVar2 & 1) == 0) ||
             (puVar6 = local_1a0,
             (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0),
             puVar6 == (undefined *)0x0)) {
            local_3a8 = (undefined *)0x0;
          }
          else {
            local_3a8 = local_1a0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = local_3a8;
          local_ac = 1;
          _objc_storeStrong(&local_1b0,0);
        }
        _objc_storeStrong(&local_1a0,0);
      }
    }
LAB_00f398dc:
    _objc_storeStrong(&local_e8,0);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_98);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = "EmoticonUtil";
    local_c8 = puVar6;
    _objc_getClass();
    local_d8 = PTR_s_createGifFromWxAMData__026ac020;
    puVar6 = local_c8;
    local_d0 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    if ((puVar6 == (undefined *)0x0) ||
       (pcVar7 = local_d0,
       (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,local_d8),
       ((ulong)pcVar7 & 1) == 0)) {
      local_70 = (undefined *)0x0;
      local_ac = 1;
    }
    else {
      pcVar7 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_d8,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_length_0269cca0);
      if (pcVar7 == (char *)0x0) {
        local_70 = (undefined *)0x0;
        local_ac = 1;
      }
      else {
        _NSTemporaryDirectory();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar8 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_stringWithFormat__0269cca8,&cf_wcr_emoticon____gif);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_c0;
        local_c0 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        pcVar7 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_writeToFile_atomically__0269f928,local_c0,1);
        if (((ulong)pcVar7 & 1) == 0) {
          local_70 = (undefined *)0x0;
          local_ac = 1;
        }
        else {
          _objc_storeStrong(&local_b8,local_c0);
          local_ac = 0;
        }
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_c8,0);
    if (local_ac == 0) goto LAB_00f389e0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
LAB_00f3990c:
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_70;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

