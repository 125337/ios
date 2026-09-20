// recognizeShapeKindFromPoints: @ 01652c88

/* Function Stack Size: 0x18 bytes */

long_long WCRSuperFloatCropViewController::recognizeShapeKindFromPoints_
                    (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulong uVar5;
  ID IVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 in_d1;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double in_d2;
  double in_d3;
  double local_760;
  double local_750;
  double local_740;
  double local_738;
  long local_720;
  long local_710;
  double local_700;
  long local_6e0;
  double local_6d0;
  double local_6b8;
  double local_6b0;
  double local_6a0;
  double local_698;
  double local_680;
  ulong local_650;
  ulong local_648;
  double local_628;
  double local_620;
  double local_618;
  double local_610;
  double local_608;
  long local_600;
  double local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c0;
  double local_5b8;
  double local_4f0;
  long local_4c0;
  double local_490;
  double local_488;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  undefined8 local_338;
  long local_330;
  double local_328;
  double local_320;
  double local_318;
  undefined8 local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  undefined4 local_2e4;
  double local_2e0;
  double local_2d8;
  long local_2d0;
  long local_2c8;
  int local_2bc;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  long local_2a0;
  byte local_291;
  double local_290;
  long local_288;
  long local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  byte local_1d9;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  undefined4 local_16c;
  ulong local_168;
  SEL local_160;
  ID local_158;
  long_long local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar4 = DAT_0232c690;
  dVar3 = DAT_02324200;
  dVar18 = DAT_02323f88;
  dVar12 = DAT_02323ec8;
  dVar2 = DAT_02323e88;
  local_750 = DAT_02323db8;
  dVar1 = DAT_02323c98;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  dVar15 = DAT_02324200;
  local_160 = param_2;
  local_158 = param_1;
  _objc_storeStrong(&local_168,param_3);
  uVar5 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
  if (uVar5 < 10) {
    local_150 = 0;
    goto LAB_01654274;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_boundingBoxForPoints__026b2138,local_168);
  local_1a0 = in_d3;
  local_198 = in_d2;
  local_190 = dVar15;
  local_188 = in_d1;
  local_180 = in_d2;
  local_178 = in_d3;
  _hypot(in_d2,in_d3);
  if (in_d2 < 36.0) {
    local_150 = 0;
    goto LAB_01654274;
  }
  local_1a8 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_pathLengthForPoints__026b2140,local_168);
  dVar15 = 40.0;
  if (in_d2 < 40.0) {
    local_150 = 0;
    goto LAB_01654274;
  }
  uVar5 = local_168;
  local_1b0 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1c0 = in_d2;
  local_1b8 = dVar15;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar5 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_lastObject_0269d200);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1d0 = in_d2;
  local_1c8 = dVar15;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  dVar15 = local_1d0 - local_1c0;
  local_f0 = local_1c8 - local_1b8;
  local_e8 = dVar15;
  _hypot(dVar15,local_f0);
  local_1e8 = 0x4032000000000000;
  local_1f0 = local_1a8 * dVar12;
  local_5b8 = local_1f0;
  if (local_1f0 <= 18.0) {
    local_5b8 = 18.0;
  }
  local_1f8 = local_5b8;
  local_1d9 = dVar15 < local_5b8;
  local_208 = local_198;
  local_210 = local_1a0;
  if (local_1a0 <= local_198) {
    local_5c0 = local_198;
  }
  else {
    local_5c0 = local_1a0;
  }
  local_218 = local_5c0;
  local_220 = 0x3ff0000000000000;
  local_230 = local_198;
  local_238 = local_1a0;
  if (local_1a0 <= local_198) {
    local_5d0 = local_1a0;
  }
  else {
    local_5d0 = local_198;
  }
  local_240 = local_5d0;
  local_228 = local_5d0;
  if (local_5d0 <= 1.0) {
    local_5d8 = 1.0;
  }
  else {
    local_5d8 = local_5d0;
  }
  local_248 = local_5d8;
  local_200 = local_5c0 / local_5d8;
  local_250 = (local_198 + local_1a0) * 2.0;
  if (local_198 * local_1a0 <= 1.0) {
    local_5e0 = 0.0;
  }
  else {
    local_5e0 = local_1b0 / local_250;
  }
  local_258 = local_5e0;
  dVar11 = local_190;
  local_1d8 = dVar15;
  _CGRectGetMidX(local_190,local_188,local_180,local_178);
  dVar15 = local_190;
  _CGRectGetMidY(local_190,local_188,local_180,local_178);
  FUN_0164494c();
  local_270 = 0.0;
  local_278 = 0.0;
  local_280 = 0;
  local_288 = 0;
  dVar10 = -1.0;
  local_290 = -1.0;
  local_291 = 0;
  local_268 = dVar11;
  local_260 = dVar15;
  for (local_2a0 = 0; lVar8 = local_2a0, uVar5 = local_168,
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0), lVar8 < (long)uVar5;
      local_2a0 = local_2a0 + local_600) {
    uVar5 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_2a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_2b0 = dVar10;
    local_2a8 = dVar15;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    dVar10 = local_2b0 - local_268;
    local_100 = local_2a8 - local_260;
    local_f8 = dVar10;
    _hypot(dVar10,local_100);
    local_270 = local_270 + dVar10;
    local_278 = local_278 + dVar10 * dVar10;
    local_280 = local_280 + 1;
    dVar15 = dVar10;
    if (0.0 <= local_290) {
      dVar15 = local_290 + 1.2;
      if (dVar10 <= dVar15) {
        if (((local_291 & 1) != 0) && (dVar15 = local_290 - 1.2, dVar10 < dVar15)) {
          local_288 = local_288 + 1;
          local_291 = 0;
        }
      }
      else {
        local_291 = 1;
      }
    }
    local_2bc = 1;
    uVar5 = local_168;
    local_2b8 = dVar10;
    local_290 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    local_2c8 = (long)uVar5 / 0x30;
    local_600 = local_2c8;
    if (local_2c8 <= local_2bc) {
      local_600 = (long)local_2bc;
    }
    local_2d0 = local_600;
  }
  if (local_280 < 1) {
    local_608 = 0.0;
  }
  else {
    local_608 = local_270 / (double)local_280;
  }
  local_2d8 = local_608;
  if (local_280 < 1) {
    local_618 = 0.0;
  }
  else {
    local_2e4 = 0;
    local_2f0 = local_278 / (double)local_280 - local_608 * local_608;
    local_610 = local_2f0;
    if (local_2f0 <= 0.0) {
      local_610 = 0.0;
    }
    local_2f8 = local_610;
    local_618 = local_610;
  }
  local_2e0 = local_618;
  local_b0 = local_618;
  local_300 = SQRT(local_618);
  local_6b0 = 1.0;
  if (local_608 <= 1.0) {
    local_628 = 0.0;
  }
  else {
    local_310 = 0x3ff0000000000000;
    local_318 = local_300 / local_608;
    local_620 = local_318;
    if (1.0 < local_318) {
      local_620 = 1.0;
    }
    local_320 = local_620;
    local_628 = 1.0 - local_620;
    local_6b0 = local_620;
  }
  local_308 = local_628;
  local_6a0 = 0.0;
  local_328 = 0.0;
  local_330 = 0;
  _memset(auStack_378,0,0x40);
  uVar5 = local_168;
  (*(code *)PTR__objc_retain_02578638)();
  local_648 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_a8,0x10);
  if (local_648 != 0) {
    lVar8 = *local_368;
    local_650 = 0;
    do {
      do {
        if (*local_368 - lVar8 != 0) {
          _objc_enumerationMutation(*local_368 - lVar8,uVar5);
        }
        local_338 = *(undefined8 *)(local_370 + local_650 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_CGPointValue_0269e330);
        dVar15 = local_190;
        _CGRectGetMinX(local_190,local_188,local_180,local_178);
        local_128 = local_6a0 - dVar15;
        dVar11 = ABS(local_128);
        dVar15 = local_190;
        _CGRectGetMaxX(local_190,local_188,local_180,local_178);
        local_130 = local_6a0 - dVar15;
        local_680 = ABS(local_130);
        if (dVar11 < local_680) {
          local_680 = dVar11;
        }
        dVar15 = local_190;
        _CGRectGetMinY(local_190,local_188,local_180,local_178);
        local_138 = local_6b0 - dVar15;
        dVar11 = ABS(local_138);
        dVar15 = local_190;
        _CGRectGetMaxY(local_190,local_188,local_180,local_178);
        local_140 = local_6b0 - dVar15;
        local_698 = ABS(local_140);
        if (dVar11 < local_698) {
          local_698 = dVar11;
        }
        if (local_698 <= local_680) {
          local_6a0 = local_698;
        }
        else {
          local_6a0 = local_680;
        }
        local_6b0 = local_1a8 * DAT_02323c90;
        if (local_6b0 <= 6.0) {
          local_6b0 = 6.0;
        }
        if (local_6a0 < local_6b0) {
          local_330 = local_330 + 1;
        }
        local_650 = local_650 + 1;
      } while (local_650 < local_648);
      local_648 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_a8,0x10);
      local_650 = 0;
    } while (local_648 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar5 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
  if (uVar5 == 0) {
    local_6b8 = 0.0;
  }
  else {
    local_6b8 = (double)local_330;
    uVar5 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    local_6b8 = local_6b8 / (double)uVar5;
  }
  local_328 = local_6b8;
  IVar6 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_158,PTR_s_cornerCountEstimateForPoints__026b2148,local_168);
  if (((((local_1d9 & 1) != 0) && (1 < (long)IVar6)) && ((long)IVar6 < 5)) &&
     (((local_200 < DAT_023397b0 && (local_308 < dVar18)) && (local_1b0 < local_1a8 * 3.4)))) {
    local_150 = 7;
    goto LAB_01654274;
  }
  if ((((local_1d9 & 1) != 0) && (3 < local_288)) &&
     ((0.3 < local_308 && (local_308 < DAT_02323d00)))) {
    if (1.0 <= local_2d8) {
      local_6d0 = local_2d8;
    }
    else {
      local_6d0 = 1.0;
    }
    if (((dVar12 < local_300 / local_6d0) && (local_200 < 1.45)) &&
       (local_1a8 * DAT_02323e50 < local_1b0)) {
      local_150 = 6;
      goto LAB_01654274;
    }
  }
  if ((((local_1d9 & 1) != 0) && (DAT_02324258 < local_308)) &&
     ((local_200 < 1.45 && (dVar1 < local_258)))) {
    local_150 = 3;
    goto LAB_01654274;
  }
  if ((((local_1d9 & 1) != 0) && (dVar1 < local_328)) &&
     ((local_200 < DAT_023397a8 && ((local_308 < dVar18 && (2 < (long)IVar6)))))) {
    iVar9 = 5;
    if (local_308 <= DAT_02323d60 && 0.85 <= local_258) {
      iVar9 = 4;
    }
    local_150 = (long_long)iVar9;
    goto LAB_01654274;
  }
  if (((local_1d9 & 1) == 0) && (dVar4 < local_200)) {
    uVar5 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    dVar12 = (double)uVar5 * local_750;
    local_6e0 = (long)dVar12;
    if (local_6e0 < 5) {
      local_6e0 = 4;
    }
    uVar5 = local_168;
    dVar15 = local_750;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar18 = dVar12;
    dVar11 = dVar15;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_6e0 + -1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    dVar10 = dVar11 - dVar15;
    local_c0 = dVar18 - dVar12;
    local_b8 = dVar10;
    _atan2(dVar10,local_c0);
    uVar7 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    uVar5 = local_168;
    dVar13 = (double)uVar7 * dVar2;
    local_700 = dVar13;
    if (dVar13 <= 8.0) {
      dVar13 = 3.95252516672997e-323;
      local_700 = 8.0;
    }
    local_488 = 0.0;
    local_490 = 0.0;
    uVar7 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    local_710 = uVar7 - (long)local_700;
    if (local_710 < 1) {
      local_710 = 0;
    }
    dVar14 = local_700;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectAtIndexedSubscript__0269cc78,local_710);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar16 = dVar13;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    local_720 = uVar5 - (long)local_700;
    if (local_720 < 1) {
      local_720 = 0;
    }
    local_4c0 = local_720;
    while( true ) {
      uVar5 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
      if ((long)uVar5 <= local_4c0) break;
      uVar5 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_4c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_4f0 = dVar16 - dVar11;
      local_d0 = local_700 - dVar18;
      local_c8 = local_4f0;
      _atan2(local_4f0,local_d0);
      for (local_4f0 = local_4f0 - dVar10; DAT_02323cb0 < local_4f0; local_4f0 = local_4f0 - dVar3)
      {
      }
      for (; local_4f0 < DAT_0232c400; local_4f0 = local_4f0 + dVar3) {
      }
      local_148 = local_4f0;
      local_738 = ABS(local_4f0);
      if (local_738 <= local_488) {
        local_738 = local_488;
      }
      local_488 = local_738;
      dVar17 = local_700 - dVar14;
      local_110 = dVar16 - dVar13;
      local_108 = dVar17;
      _hypot(dVar17,local_110);
      local_740 = dVar17;
      if (dVar17 <= local_490) {
        local_740 = local_490;
      }
      local_490 = local_740;
      local_4c0 = local_4c0 + 1;
      local_700 = local_740;
      dVar16 = dVar17;
    }
    dVar18 = dVar18 - dVar12;
    local_120 = dVar11 - dVar15;
    local_118 = dVar18;
    _hypot(local_4c0 - uVar5,dVar18,local_120);
    local_750 = local_1b0 * local_750;
    if (local_750 < 1.0) {
      local_750 = 1.0;
    }
    if (DAT_02323c78 < local_488) {
code_r0x0165419c:
      if (dVar1 < dVar18 / local_750) {
        local_150 = 2;
        goto LAB_01654274;
      }
    }
    else {
      if (local_1a0 <= local_198) {
        local_760 = local_1a0;
      }
      else {
        local_760 = local_198;
      }
      if (local_760 * dVar2 < local_490) goto code_r0x0165419c;
    }
    if ((local_1b0 < local_1a8 * dVar4) && (DAT_02323f60 < dVar18 / local_750)) {
      local_150 = 1;
      goto LAB_01654274;
    }
  }
  if ((((local_1d9 & 1) != 0) || (local_200 <= 2.4)) || (local_1a8 * 1.45 <= local_1b0)) {
    local_150 = 0;
  }
  else {
    local_150 = 1;
  }
LAB_01654274:
  local_16c = 1;
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_150;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

