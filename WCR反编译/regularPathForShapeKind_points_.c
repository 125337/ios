// regularPathForShapeKind:points: @ 01654e50

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRSuperFloatCropViewController::regularPathForShapeKind_points_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double in_d1;
  double dVar12;
  double in_d2;
  double in_d3;
  double local_448;
  double local_438;
  double local_3c8;
  double local_3c0;
  ulong local_388;
  ulong local_380;
  long local_358;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  long local_1a0;
  long local_198;
  int local_18c;
  long local_188;
  undefined *local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined4 local_134;
  ulong local_130;
  long_long local_128;
  SEL local_120;
  undefined *local_118;
  undefined *local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar11 = DAT_023397b8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  dVar5 = DAT_023397b8;
  local_128 = param_3;
  local_120 = param_2;
  local_118 = (undefined *)param_1;
  _objc_storeStrong(&local_130,param_4);
  if (((long)local_128 < 1) ||
     (uVar1 = local_130, (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0),
     uVar1 < 2)) {
    local_110 = (undefined *)0x0;
    local_134 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_boundingBoxForPoints__026b2138,local_130);
    uVar1 = local_130;
    local_158 = dVar5;
    local_150 = in_d1;
    local_148 = in_d2;
    local_140 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_168 = dVar5;
    dStack_160 = in_d1;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_178 = dVar5;
    dStack_170 = in_d1;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_118;
    local_180 = puVar2;
    if (local_128 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_168,dStack_160,puVar2,PTR_s_moveToPoint__026a01b0)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,dStack_170,local_180,PTR_s_addLineToPoint__026a01b8);
      puVar3 = local_180;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = puVar3;
    }
    else if (local_128 == 2) {
      local_18c = 4;
      uVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      local_198 = (long)((double)uVar1 * DAT_02323db8);
      local_358 = local_198;
      if (local_198 <= local_18c) {
        local_358 = (long)local_18c;
      }
      local_1a0 = local_358;
      local_188 = local_358;
      dStack_1a8 = dStack_160;
      local_1b0 = local_168;
      uVar1 = local_130;
      dVar5 = local_168;
      dVar6 = DAT_02323db8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_objectAtIndexedSubscript__0269cc78,local_358 + -1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1c0 = dVar5;
      local_1b8 = dVar6;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      dVar12 = local_1b8 - dStack_1a8;
      dVar5 = local_1c0 - local_1b0;
      local_e8 = dVar5;
      local_e0 = dVar12;
      _atan2();
      dStack_1d8 = dStack_170;
      local_1e0 = local_178;
      dVar6 = -1.0;
      local_1e8 = -1.0;
      local_1c8 = dVar12;
      _memset(auStack_230,0,0x40);
      uVar1 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_380 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,0x10);
      if (local_380 != 0) {
        lVar4 = *local_220;
        local_388 = 0;
        do {
          do {
            dVar12 = dVar6;
            dVar10 = dVar5;
            if (*local_220 - lVar4 != 0) {
              _objc_enumerationMutation(*local_220 - lVar4,uVar1);
              dVar12 = dVar6;
              dVar10 = dVar5;
            }
            local_1f0 = *(undefined8 *)(local_228 + local_388 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_CGPointValue_0269e330);
            dVar7 = dVar12 - local_1b0;
            local_c8 = local_1c8;
            dVar6 = local_1c8;
            _cos();
            dVar8 = dVar10 - dStack_1a8;
            local_b0 = local_1c8;
            dVar9 = local_1c8;
            _sin();
            dVar5 = local_1e8;
            dVar9 = dVar8 * dVar9 + dVar6 * dVar7;
            dVar6 = dVar9;
            if (local_1e8 < dVar9) {
              dVar6 = dVar12;
              local_1e8 = dVar9;
              local_1e0 = dVar12;
              dStack_1d8 = dVar10;
            }
            local_388 = local_388 + 1;
          } while (local_388 < local_380);
          local_380 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                     0x10);
          local_388 = 0;
        } while (local_380 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_3c0 = local_1e0 - local_1b0;
      local_108 = dStack_1d8 - dStack_1a8;
      local_100 = local_3c0;
      _hypot(local_3c0,local_108);
      if (local_3c0 <= 1.0) {
        local_3c0 = 1.0;
      }
      dVar6 = dStack_1d8 - dStack_1a8;
      local_f8 = local_1e0 - local_1b0;
      local_f0 = dVar6;
      _atan2(dVar6,local_f8);
      dVar5 = local_1e0;
      local_3c8 = local_3c0 * DAT_02323ec8;
      if (local_3c8 <= 14.0) {
        local_3c8 = 14.0;
      }
      dVar10 = dVar6 - dVar11;
      local_1c8 = dVar6;
      local_d0 = dVar10;
      _cos();
      dVar12 = dStack_1d8;
      dVar5 = dVar5 - dVar10 * local_3c8;
      dVar6 = local_1c8 - dVar11;
      local_b8 = dVar6;
      _sin();
      dVar12 = dVar12 - dVar6 * local_3c8;
      FUN_0164494c();
      dVar6 = local_1e0;
      dVar9 = local_1c8 + dVar11;
      local_d8 = dVar9;
      _cos();
      dVar10 = dStack_1d8;
      dVar6 = dVar6 - dVar9 * local_3c8;
      dVar11 = local_1c8 + dVar11;
      local_c0 = dVar11;
      _sin();
      dVar10 = dVar10 - dVar11 * local_3c8;
      FUN_0164494c();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,dStack_1a8,local_180,PTR_s_moveToPoint__026a01b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,dStack_1d8,local_180,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar12,local_180,PTR_s_moveToPoint__026a01b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,dStack_1d8,local_180,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)(dVar6,dVar10,local_180,PTR_s_addLineToPoint__026a01b8);
      puVar3 = local_180;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = puVar3;
    }
    else if (local_128 == 3) {
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,local_150,local_148,local_140,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithOvalInRect__026ca528);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar3;
    }
    else if (local_128 == 4) {
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,local_150,local_148,local_140,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithRect__026a03f8);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar3;
    }
    else if (local_128 == 5) {
      if (local_140 <= local_148) {
        local_438 = local_140;
      }
      else {
        local_438 = local_148;
      }
      local_448 = local_438 * DAT_02323c70;
      if (local_448 <= 6.0) {
        local_448 = 6.0;
      }
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,local_150,local_148,local_140,local_448,
                 PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar3;
    }
    else if (local_128 == 6) {
      dVar11 = local_158;
      _CGRectGetMinX(local_158,local_150,local_148,local_140);
      dVar5 = local_158;
      _CGRectGetMinY(local_158,local_150,local_148,local_140);
      FUN_0164494c();
      dVar6 = local_158;
      _CGRectGetMaxX(local_158,local_150,local_148,local_140);
      dVar12 = local_158;
      _CGRectGetMaxY(local_158,local_150,local_148,local_140);
      FUN_0164494c();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar11,dVar5,dVar6,dVar12,puVar3,PTR_s_pathForAnnotateTool_from_to__026b2158,6);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar3;
    }
    else if (local_128 == 7) {
      dVar11 = local_158;
      _CGRectGetMinX(local_158,local_150,local_148,local_140);
      dVar5 = local_158;
      _CGRectGetMinY(local_158,local_150,local_148,local_140);
      FUN_0164494c();
      dVar6 = local_158;
      _CGRectGetMaxX(local_158,local_150,local_148,local_140);
      dVar12 = local_158;
      _CGRectGetMaxY(local_158,local_150,local_148,local_140);
      FUN_0164494c();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar11,dVar5,dVar6,dVar12,puVar3,PTR_s_pathForAnnotateTool_from_to__026b2158,5);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar3;
    }
    else {
      local_110 = (undefined *)0x0;
    }
    local_134 = 1;
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_110;
}

