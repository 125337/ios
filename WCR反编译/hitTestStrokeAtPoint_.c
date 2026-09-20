// hitTestStrokeAtPoint: @ 0165c848

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRSuperFloatCropViewController::hitTestStrokeAtPoint_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,CGPoint param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_d0;
  undefined8 in_d1;
  double local_200;
  uint local_1d4;
  uint local_1b4;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  SEL local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = param_2;
  local_c8 = param_1;
  local_c0 = in_d0;
  local_b8 = in_d1;
  _memset(auStack_118,0,0x40);
  IVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_strokeLayers_026b2088);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_190 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar7 = *local_108;
    local_198 = 0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,IVar3);
        }
        uVar8 = *(ulong *)(local_110 + local_198 * 8);
        local_d8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_path_0269d4d8);
        if (uVar8 != 0) {
          uVar8 = local_d8;
          _objc_getAssociatedObject(local_d8,DAT_028c6008);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1b4 = 0;
          if ((uVar4 & 1) != 0) {
            uVar4 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_path_0269d4d8);
            local_1b4 = (uint)uVar4;
            _CGPathContainsPoint(local_c0,local_b8);
          }
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar8 = local_d8;
          if ((local_1b4 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar8;
            bVar1 = true;
            goto LAB_0165cd88;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_fillColor_026a80e8);
          local_1d4 = 0;
          if (uVar8 != 0) {
            uVar8 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_fillColor_026a80e8);
            puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
            _CGColorEqualToColor(uVar8,puVar6);
            local_1d4 = (uint)uVar8 ^ 1;
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          if ((local_1d4 & 1) != 0) {
            uVar4 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_path_0269d4d8);
            _CGPathContainsPoint(local_c0,local_b8);
            uVar8 = local_d8;
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar8;
              bVar1 = true;
              goto LAB_0165cd88;
            }
          }
          local_200 = 14.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lineWidth_026a0390);
          local_200 = local_200 + 10.0;
          if (local_200 <= 14.0) {
            local_200 = 14.0;
          }
          uVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_path_0269d4d8);
          _CGPathCreateCopyByStrokingPath(local_200,0x4024000000000000);
          if (uVar8 != 0) {
            uVar4 = uVar8;
            _CGPathContainsPoint(local_c0,local_b8,uVar8,0,0);
            _CGPathRelease(uVar8);
            uVar8 = local_d8;
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar8;
              bVar1 = true;
              goto LAB_0165cd88;
            }
          }
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  bVar1 = false;
LAB_0165cd88:
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (!bVar1) {
    local_b0 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

