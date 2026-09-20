// FUN_0168911c @ 0168911c

void FUN_0168911c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double local_288;
  double local_270;
  ulong local_240;
  ulong local_238;
  byte local_189;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_270 = *(double *)(param_1 + 0x38);
  dVar7 = *(double *)(param_1 + 0x40);
  uVar6 = 0;
  dVar5 = 0.0;
  FUN_0163f5dc();
  local_e0 = dVar5;
  local_d8 = uVar6;
  local_d0 = local_270;
  local_c8 = dVar7;
  _UIRectFill(dVar5,uVar6);
  _memset(auStack_128,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_238 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_238 != 0) {
    lVar3 = *local_118;
    local_240 = 0;
    do {
      do {
        if (*local_118 - lVar3 != 0) {
          _objc_enumerationMutation(*local_118 - lVar3,uVar2);
        }
        uVar4 = *(ulong *)(local_120 + local_240 * 8);
        local_e8 = uVar4;
        FUN_01688e80();
        if (((((uVar4 & 1) == 0) &&
             (uVar4 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isHidden_026ca768),
             (uVar4 & 1) == 0)) &&
            ((*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_alpha_026ca4d8),
            DAT_02323d38 <= dVar5)) &&
           (dVar5 = local_270, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_bounds_026ca548)
           , local_270 = dVar5, 1.0 <= dVar5)) {
          dVar5 = dVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_bounds_026ca548);
          uVar6 = 0x3ff0000000000000;
          dVar7 = dVar5;
          if (1.0 <= dVar5) {
            dVar8 = dVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_frame_026ca640);
            uVar4 = local_e8;
            local_288 = local_270;
            dVar7 = dVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar5,uVar6,local_e8,PTR_s_drawViewHierarchyInRect_afterScr_0269e2f8,1);
            local_189 = (byte)uVar4;
            if ((uVar4 & 1) == 0) {
              uVar6 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_CGContext_026a48e0);
              _CGContextSaveGState(uVar6);
              _CGContextTranslateCTM(uVar6);
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_bounds_026ca548);
              if (local_270 < 1.0) {
                local_270 = 1.0;
              }
              dVar5 = local_288 / local_270;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_bounds_026ca548);
              local_288 = dVar8;
              if (dVar8 < 1.0) {
                local_288 = 1.0;
              }
              _CGContextScaleCTM(dVar5,dVar7 / local_288,uVar6);
              uVar4 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar4);
              _CGContextRestoreGState(uVar6);
              local_189 = 1;
            }
            local_270 = local_288;
            if ((local_189 & 1) != 0) {
              **(long **)(param_1 + 0x48) = **(long **)(param_1 + 0x48) + 1;
            }
          }
        }
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_240 = 0;
    } while (local_238 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

