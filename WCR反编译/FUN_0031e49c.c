// FUN_0031e49c @ 0031e49c

void FUN_0031e49c(double param_1,double param_2,long param_3)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double local_328;
  double local_2d8;
  double local_158;
  ulong local_150;
  double local_138;
  ulong local_d0;
  double local_c8;
  ulong local_a8;
  long local_a0;
  ulong local_88;
  double local_80;
  undefined *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  double local_40;
  double local_38;
  long local_30;
  undefined *local_28;
  
  dVar2 = DAT_02323d10;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = param_3;
  if (((param_3 == 0) || (param_1 <= DAT_02323e60)) || (dVar12 = 1.0, param_2 <= 1.0)) {
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPathWithCGPath__026a2070,param_3)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar5;
  }
  else {
    uVar4 = *(ulong *)PTR__kCFAllocatorDefault_02578298;
    _CFArrayCreateMutable(uVar4,0,PTR__kCFTypeArrayCallBacks_025782c0);
    uStack_60 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_68 = *(undefined8 *)PTR__CGPointZero_025782e0;
    uStack_50 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_58 = *(undefined8 *)PTR__CGPointZero_025782e0;
    local_48 = 0;
    local_70 = uVar4;
    _CGPathApply(local_30,&local_70,FUN_0031efac);
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = 1.5;
    uVar4 = local_70;
    local_78 = puVar5;
    _CFArrayGetCount();
    local_88 = uVar4;
    for (local_a0 = 0; local_a0 < (long)local_88; local_a0 = local_a0 + 1) {
      uVar4 = local_70;
      _CFArrayGetValueAtIndex(local_70,local_a0);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
      if (1 < uVar4) {
        uVar4 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
        puVar6 = _malloc(uVar4 * 8);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          local_c8 = 0.0;
          for (local_d0 = 1; local_d0 < uVar4; local_d0 = local_d0 + 1) {
            uVar7 = local_a8;
            dVar10 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_d0 - 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar9 = dVar12;
            dVar13 = dVar10;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            uVar7 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar7);
            dVar9 = dVar9 - dVar10;
            _hypot(dVar9,dVar13 - dVar12);
            local_c8 = local_c8 + dVar9;
            puVar6[local_d0] = local_c8;
            dVar12 = dVar9;
          }
          if (local_80 < local_c8) {
            local_138 = (double)(long)(local_c8 / local_40);
            if (local_138 < 1.0) {
              local_138 = 1.0;
            }
            bVar1 = true;
            local_150 = 1;
            for (local_158 = 0.0; dVar12 = local_c8 + dVar2, local_158 <= dVar12;
                local_158 = local_158 + local_80) {
              dVar12 = local_c8;
              if (local_c8 <= local_158) {
                local_2d8 = local_c8;
                dVar10 = local_c8;
              }
              else {
                local_2d8 = local_158;
                dVar10 = local_158;
              }
              while( true ) {
                bVar3 = false;
                if (local_150 < uVar4) {
                  dVar10 = (double)puVar6[local_150];
                  bVar3 = dVar10 < local_2d8;
                  dVar12 = local_2d8;
                }
                if (!bVar3) break;
                local_150 = local_150 + 1;
              }
              if (uVar4 <= local_150) {
                local_150 = uVar4 - 1;
              }
              uVar7 = local_a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_150 - 1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar9 = dVar12;
              dVar13 = dVar10;
              (*(code *)PTR__objc_release_02578630)(uVar7);
              uVar7 = local_a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_150);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if ((double)puVar6[local_150] - (double)puVar6[local_150 - 1] <= dVar2) {
                local_328 = 0.0;
              }
              else {
                local_328 = (local_2d8 - (double)puVar6[local_150 - 1]) /
                            ((double)puVar6[local_150] - (double)puVar6[local_150 - 1]);
              }
              dVar11 = dVar10 + local_328 * (dVar9 - dVar10);
              dVar14 = dVar12 + local_328 * (dVar13 - dVar12);
              FUN_0031697c();
              dVar9 = dVar9 - dVar10;
              dVar10 = dVar9;
              _hypot(dVar9,dVar13 - dVar12);
              if (dVar2 <= dVar10) {
                fVar8 = (float)((local_2d8 / (local_c8 / local_138)) * 2.0 * DAT_02323cb0);
                _sinf();
                dVar11 = dVar11 + (double)fVar8 * local_38 * -((dVar13 - dVar12) / dVar10);
                dVar14 = dVar14 + (double)fVar8 * local_38 * (dVar9 / dVar10);
                FUN_0031697c();
                if (bVar1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar11,dVar14,local_78,PTR_s_moveToPoint__026a01b0);
                  bVar1 = false;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar11,dVar14,local_78,PTR_s_addLineToPoint__026a01b8);
                }
              }
            }
            _free(puVar6);
          }
          else {
            uVar4 = local_a8;
            dVar9 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar10 = dVar9;
            dVar12 = local_c8;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,dVar9,local_78,PTR_s_moveToPoint__026a01b0);
            (*(code *)PTR__objc_msgSend_02578628)(dVar10,local_78,PTR_s_addLineToPoint__026a01b8);
            _free(puVar6);
          }
        }
      }
      _objc_storeStrong(&local_a8,0);
    }
    _CFRelease(local_a0 - local_88,local_70);
    puVar5 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
    _objc_storeStrong(&local_78,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

