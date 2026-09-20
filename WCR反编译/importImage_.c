// importImage: @ 019e2f98

/* Function Stack Size: 0x18 bytes */

void WCRefineGlyphDrawingCanvasView::importImage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  double in_d0;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 in_d1;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 in_d2;
  undefined8 uVar13;
  undefined8 in_d3;
  undefined8 uVar14;
  long local_2f0;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_288;
  double local_280;
  undefined *local_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  undefined1 local_221;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  long local_200;
  undefined1 local_1f1;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  undefined1 *local_1b0;
  undefined *local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ID local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    local_48 = 0x38;
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_78 = 1.0;
    local_68 = in_d0;
    local_60 = in_d1;
    local_58 = in_d2;
    local_50 = in_d3;
    _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
    local_280 = in_d0;
    if (in_d0 <= local_78) {
      local_280 = local_78;
    }
    local_88 = local_280;
    local_70 = local_280;
    local_98 = 1.0;
    _CGRectGetHeight(local_68,local_60,local_58,local_50);
    local_288 = local_68;
    if (local_68 <= local_98) {
      local_288 = local_98;
    }
    local_a8 = local_288;
    local_90 = local_288;
    _CGColorSpaceCreateDeviceRGB();
    puVar2 = PTR__OBJC_CLASS___NSMutableData_026ce660;
    local_b0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,&DAT_00003100
              );
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar2;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_mutableBytes_026a3370);
    _CGBitmapContextCreate();
    local_c0 = puVar2;
    _CGColorSpaceRelease(local_b0);
    puVar2 = local_c0;
    if (local_c0 == (undefined *)0x0) {
      local_3c = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      _CGContextSetFillColorWithColor(puVar2,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_c0;
      uVar10 = 0;
      uVar7 = 0;
      uVar14 = 0x404c000000000000;
      uVar13 = 0x404c000000000000;
      FUN_019e39e8();
      local_e0 = uVar7;
      local_d8 = uVar10;
      local_d0 = uVar13;
      local_c8 = uVar14;
      _CGContextFillRect(uVar7,uVar10,uVar13,uVar14,puVar2);
      dVar8 = 1.0;
      local_f8 = 1.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
      local_2b0 = dVar8;
      if (dVar8 <= local_f8) {
        local_2b0 = local_f8;
      }
      local_118 = local_2b0;
      local_f0 = 56.0 / local_2b0;
      uVar7 = 0x3ff0000000000000;
      local_128 = 1.0;
      local_110 = dVar8;
      local_108 = uVar10;
      local_100 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
      local_2b8 = local_2b0;
      if (local_2b0 <= local_128) {
        local_2b8 = local_128;
      }
      local_148 = local_2b8;
      local_2b8 = 56.0 / local_2b8;
      local_2c0 = local_2b8;
      if (local_f0 < local_2b8) {
        local_2c0 = local_f0;
      }
      local_150 = local_2c0;
      local_e8 = local_2c0;
      local_140 = uVar7;
      local_138 = local_2b0;
      local_130 = local_2b0;
      local_120 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
      dVar9 = local_2c0 * local_e8;
      dVar8 = dVar9;
      dVar12 = local_e8;
      local_170 = local_2c0;
      local_168 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
      dVar11 = dVar12 * local_e8;
      local_180 = dVar8;
      local_178 = dVar12;
      FUN_019e3a34();
      dVar8 = (56.0 - dVar9) * 0.5;
      dVar12 = (56.0 - dVar11) * 0.5;
      local_160 = dVar9;
      local_158 = dVar11;
      FUN_019e39e8();
      local_1a0 = dVar8;
      local_198 = dVar12;
      local_190 = dVar9;
      local_188 = dVar11;
      _CGContextTranslateCTM(0,0x404c000000000000,local_c0);
      _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,local_c0);
      _UIGraphicsPushContext(local_c0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,local_198,local_190,local_188,local_38,PTR_s_drawInRect__026ca610);
      _UIGraphicsPopContext();
      _CGContextRelease(local_c0);
      puVar2 = local_b8;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_bytes_026a9630);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar3;
      for (local_1b8 = 0; local_1b8 < 0x38; local_1b8 = local_1b8 + 1) {
        local_1c0 = 0;
        do {
          if (0x37 < local_1c0) break;
          local_1c8 = -1;
          for (; local_1c0 < 0x38; local_1c0 = local_1c0 + 1) {
            local_1d0 = (local_1b8 * 0x38 + local_1c0) * 4;
            local_1d8 = (ulong)(byte)local_1a8[local_1d0];
            local_1e0 = (ulong)(byte)local_1a8[local_1d0 + 1];
            local_1e8 = (ulong)(byte)local_1a8[local_1d0 + 2];
            local_1f0 = (ulong)(byte)local_1a8[local_1d0 + 3];
            local_1f1 = false;
            if (0x18 < local_1f0) {
              local_1f1 = 0x1c < (long)(0xff - (local_1d8 + local_1e0 + local_1e8) / 3);
            }
            if ((bool)local_1f1 != false) {
              local_1c8 = local_1c0;
              break;
            }
          }
          if (local_1c8 < 0) break;
          for (; local_1c0 < 0x38; local_1c0 = local_1c0 + 1) {
            local_200 = (local_1b8 * 0x38 + local_1c0) * 4;
            local_208 = (ulong)(byte)local_1a8[local_200];
            local_210 = (ulong)(byte)local_1a8[local_200 + 1];
            local_218 = (ulong)(byte)local_1a8[local_200 + 2];
            local_220 = (ulong)(byte)local_1a8[local_200 + 3];
            local_221 = false;
            if (0x18 < local_220) {
              local_221 = 0x1c < (long)(0xff - (local_208 + local_210 + local_218) / 3);
            }
            if ((bool)local_221 == false) break;
          }
          local_238 = local_1c8;
          local_240 = local_1c0 + -1;
          local_2f0 = local_240;
          if (local_240 <= local_1c8) {
            local_2f0 = local_1c8;
          }
          local_248 = local_2f0;
          local_230 = local_2f0;
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          dVar12 = (((double)local_1b8 + 0.5) / 56.0) * local_90;
          dVar9 = ((double)local_1c8 / 56.0) * local_70;
          dVar8 = dVar12;
          local_250 = puVar3;
          FUN_019e22c8();
          (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar8,puVar2,PTR_s_valueWithCGPoint__0269e328)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar3 = local_250;
          puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          dVar8 = ((double)(local_230 + 1) / 56.0) * local_70;
          FUN_019e22c8();
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar8,dVar12,puVar2,PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,local_250);
          puVar5 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0);
          puVar6 = puVar5 + -0xdc;
          if (puVar5 < (undefined1 *)((long)&section_000000b8.addr + 4)) {
            local_3c = 0;
          }
          else {
            puVar6 = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
            local_3c = 6;
          }
          _objc_storeStrong(puVar6,&local_250,0);
        } while (local_3c == 0);
        puVar6 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0);
        if ((undefined1 *)((long)&section_000000b8.addr + 3) < puVar6) break;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStrokes__026bb060,local_1b0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsDisplay_026a3050);
      _objc_storeStrong(&local_1b0,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_b8,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

