// FUN_001baa40 @ 001baa40

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001baa40(double param_1,undefined8 *****param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 ****ppppuVar2;
  uint uVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 ****local_200;
  undefined8 ****local_1f8;
  double local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 ****local_198;
  undefined8 ****local_190;
  undefined8 ****local_188;
  undefined8 ****local_180;
  undefined8 ****local_178;
  undefined8 ****local_170;
  undefined8 ****local_168;
  undefined8 ****local_160;
  undefined8 ****local_158;
  int local_14c;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  byte local_f9;
  undefined8 ****local_f8;
  undefined8 ****local_f0;
  byte local_d1;
  undefined8 ****local_d0;
  double local_c8;
  byte local_b9;
  undefined8 local_b8;
  undefined8 ****local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_3;
  local_b0 = param_2;
  _WCRHomeJankTableCaptureIsActive();
  local_b9 = (byte)param_2;
  pppppuVar4 = (undefined8 *****)local_b0;
  (*DAT_028c8ae8)(local_b0,local_b8);
  if ((local_b9 & 1) == 0) {
    local_1c0 = 0.0;
  }
  else {
    _CACurrentMediaTime();
    local_1c0 = param_1;
  }
  local_c8 = local_1c0;
  FUN_001cf8b0();
  local_d1 = 0;
  if ((((ulong)pppppuVar4 & 1) == 0) && (FUN_001e6424(), ((ulong)pppppuVar4 & 1) == 0)) {
    FUN_001e64c0();
    bVar1 = false;
    if (((ulong)pppppuVar4 & 1) != 0) goto LAB_001baafc;
  }
  else {
LAB_001baafc:
    pppppuVar4 = (undefined8 *****)local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = pppppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pppppuVar4 != (undefined8 *****)0x0;
  }
  if ((local_d1 & 1) != 0) {
    pppppuVar4 = (undefined8 *****)local_d0;
    (*(code *)PTR__objc_release_02578630)();
  }
  if (bVar1) {
    FUN_001d1ba0();
    local_f0 = pppppuVar4;
    FUN_001d1c14();
    local_f9 = 0;
    local_f8 = pppppuVar4;
    _memset(auStack_148,0,0x40);
    pppppuVar4 = (undefined8 *****)local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = pppppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if ((undefined8 *****)local_1f8 != (undefined8 *****)0x0) {
      lVar8 = *local_138;
      local_200 = (undefined8 *****)0x0;
      do {
        do {
          if (*local_138 - lVar8 != 0) {
            _objc_enumerationMutation(*local_138 - lVar8,pppppuVar4);
          }
          uVar9 = *(ulong *)(local_140 + (long)local_200 * 8);
          local_108 = uVar9;
          if ((((undefined8 *****)local_f0 != (undefined8 *****)0x0) &&
              ((*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,local_f0),
              (uVar9 & 1) != 0)) ||
             (((undefined8 *****)local_f8 != (undefined8 *****)0x0 &&
              (uVar9 = local_108,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_isKindOfClass__0269cd68,local_f8), (uVar9 & 1) != 0)))) {
            local_f9 = 1;
            local_14c = 2;
            goto LAB_001bae08;
          }
          local_200 = (undefined8 ****)((long)local_200 + 1);
        } while (local_200 < local_1f8);
        local_1f8 = pppppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pppppuVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8
                   ,0x10);
        local_200 = (undefined8 *****)0x0;
      } while ((undefined8 *****)local_1f8 != (undefined8 *****)0x0);
    }
    local_14c = 0;
LAB_001bae08:
    (*(code *)PTR__objc_release_02578630)();
    if ((local_f9 & 1) != 0) {
      FUN_001d1cf8();
      local_158 = pppppuVar4;
      FUN_001d1d6c();
      local_160 = pppppuVar4;
      FUN_001e655c();
      local_168 = pppppuVar4;
      FUN_001e65d0();
      local_170 = pppppuVar4;
      FUN_001e6644();
      local_178 = pppppuVar4;
      FUN_001e66b8();
      pppppuVar5 = (undefined8 *****)local_b0;
      local_180 = pppppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_188 = pppppuVar5;
      while ((undefined8 *****)local_188 != (undefined8 *****)0x0) {
        if ((((undefined8 *****)local_158 != (undefined8 *****)0x0) &&
            (pppppuVar4 = (undefined8 *****)local_188,
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,local_158)
            , ((ulong)pppppuVar4 & 1) != 0)) ||
           ((((undefined8 *****)local_160 != (undefined8 *****)0x0 &&
             (pppppuVar4 = (undefined8 *****)local_188,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_188,PTR_s_isKindOfClass__0269cd68,local_160),
             ((ulong)pppppuVar4 & 1) != 0)) ||
            (((undefined8 *****)local_168 != (undefined8 *****)0x0 &&
             (pppppuVar4 = (undefined8 *****)local_188,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_188,PTR_s_isKindOfClass__0269cd68,local_168),
             ((ulong)pppppuVar4 & 1) != 0)))))) {
          FUN_001d0988(local_b0);
          local_14c = 1;
          goto LAB_001bb120;
        }
        if ((undefined8 *****)local_170 != (undefined8 *****)0x0) {
          pppppuVar4 = (undefined8 *****)local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,local_170);
          uVar3 = (uint)pppppuVar4;
          if (((ulong)pppppuVar4 & 1) == 0) goto LAB_001bafcc;
LAB_001bb008:
          FUN_001cf8b0();
          if (((uVar3 & 1) != 0) && (FUN_001e6424(), (uVar3 & 1) != 0)) {
            FUN_001d0988(local_b0);
          }
          local_14c = 1;
          goto LAB_001bb120;
        }
LAB_001bafcc:
        if ((undefined8 *****)local_178 != (undefined8 *****)0x0) {
          pppppuVar4 = (undefined8 *****)local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,local_178);
          uVar3 = (uint)pppppuVar4;
          if (((ulong)pppppuVar4 & 1) != 0) goto LAB_001bb008;
        }
        if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
          pppppuVar4 = (undefined8 *****)local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,local_180);
          uVar3 = (uint)pppppuVar4;
          if (((ulong)pppppuVar4 & 1) != 0) {
            FUN_001e672c();
            if ((uVar3 & 1) != 0) {
              FUN_001e676c(local_188);
            }
            local_14c = 1;
            goto LAB_001bb120;
          }
        }
        pppppuVar4 = (undefined8 *****)local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        ppppuVar2 = local_188;
        local_188 = pppppuVar4;
        (*(code *)PTR__objc_release_02578630)(ppppuVar2);
      }
      local_14c = 0;
LAB_001bb120:
      pppppuVar4 = &local_188;
      _objc_storeStrong(pppppuVar4,0);
      if (local_14c != 0) goto LAB_001bb4f0;
    }
  }
  FUN_001e6b90();
  if (((ulong)pppppuVar4 & 1) != 0) {
    FUN_001e6c2c();
    pppppuVar5 = (undefined8 *****)local_b0;
    local_190 = pppppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_198 = pppppuVar5;
    while ((undefined8 *****)local_198 != (undefined8 *****)0x0) {
      if (((undefined8 *****)local_190 != (undefined8 *****)0x0) &&
         (pppppuVar4 = (undefined8 *****)local_198,
         (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_isKindOfClass__0269cd68,local_190),
         ((ulong)pppppuVar4 & 1) != 0)) {
        uVar3 = (uint)local_b0;
        FUN_001e6ca0();
        if ((uVar3 & 1) == 0) {
          pppppuVar4 = (undefined8 *****)local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = 0.0;
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(pppppuVar4);
          puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
          pppppuVar4 = (undefined8 *****)local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pppppuVar4);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        break;
      }
      pppppuVar4 = (undefined8 *****)local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar2 = local_198;
      local_198 = pppppuVar4;
      (*(code *)PTR__objc_release_02578630)(ppppuVar2);
    }
    pppppuVar4 = &local_198;
    _objc_storeStrong(pppppuVar4,0);
  }
  FUN_001e6e3c();
  if (((ulong)pppppuVar4 & 1) != 0) {
    local_1a0 = 0;
    local_1a8 = 0;
    pppppuVar4 = (undefined8 *****)local_b0;
    FUN_001e6e7c(local_b0,&local_1a8);
    _objc_storeStrong(&local_1a0,local_1a8);
    if (((ulong)pppppuVar4 & 1) != 0) {
      uVar7 = local_1a0;
      FUN_001e7030();
      FUN_001e71ac(local_b0,(uint)uVar7 & 1);
    }
    _objc_storeStrong(&local_1a0,0);
  }
  if ((local_b9 & 1) != 0) {
    _CACurrentMediaTime();
    _WCRHomeJankRecordGlobalUIViewLayout((local_1c0 - local_c8) * 1000.0);
  }
LAB_001bb4f0:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

