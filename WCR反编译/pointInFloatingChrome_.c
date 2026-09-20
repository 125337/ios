// pointInFloatingChrome: @ 01643048

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

bool WCRSuperFloatCropViewController::pointInFloatingChrome_(ID param_1,SEL param_2,CGPoint param_3)

{
  bool bVar1;
  uint uVar2;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_338;
  ulong local_330;
  ID local_318;
  uint local_2f8;
  uint local_2e8;
  uint local_2d8;
  uint local_2c8;
  uint local_2b4;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  byte local_229;
  ID local_228;
  byte local_1f9;
  ID local_1f8;
  byte local_1e9;
  ID local_1e8;
  byte local_1b9;
  ID local_1b8;
  byte local_1a9;
  ID local_1a8;
  byte local_179;
  ID local_178;
  byte local_169;
  ID local_168;
  byte local_139;
  ID local_138;
  byte local_129;
  ID local_128;
  byte local_f9;
  ID local_f8;
  SEL local_d0;
  ID local_c8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  ID IVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = param_2;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_toolbarScroll_026b1cb0,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar2 = (uint)IVar3;
  _CGRectContainsPoint();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((uVar2 & 1) == 0) {
    IVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hintBlur_026b1c90);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 0;
    local_129 = 0;
    local_2b4 = 0;
    if (IVar3 != 0) {
      IVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hintBlur_026b1c90);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2b4 = 0;
      if ((IVar4 & 1) == 0) {
        IVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hintBlur_026b1c90);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        local_128 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_2b4 = (uint)IVar4;
        _CGRectContainsPoint();
      }
    }
    if ((local_129 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_2b4 & 1) == 0) {
      IVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_penAttrBar_026b1de0);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 0;
      local_169 = 0;
      local_2c8 = 0;
      if (IVar3 != 0) {
        IVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_penAttrBar_026b1de0);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_138 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_2c8 = 0;
        if ((IVar4 & 1) == 0) {
          IVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_penAttrBar_026b1de0);
          _objc_retainAutoreleasedReturnValue();
          local_169 = 1;
          local_168 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2c8 = (uint)IVar4;
          _CGRectContainsPoint();
        }
      }
      if ((local_169 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_168);
      }
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((local_2c8 & 1) == 0) {
        IVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mosaicAttrBar_026b1de8);
        _objc_retainAutoreleasedReturnValue();
        local_179 = 0;
        local_1a9 = 0;
        local_2d8 = 0;
        if (IVar3 != 0) {
          IVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mosaicAttrBar_026b1de8);
          _objc_retainAutoreleasedReturnValue();
          local_179 = 1;
          local_178 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2d8 = 0;
          if ((IVar4 & 1) == 0) {
            IVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mosaicAttrBar_026b1de8);
            _objc_retainAutoreleasedReturnValue();
            local_1a9 = 1;
            local_1a8 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2d8 = (uint)IVar4;
            _CGRectContainsPoint();
          }
        }
        if ((local_1a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1a8);
        }
        if ((local_179 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((local_2d8 & 1) == 0) {
          IVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_shapeAttrBar_026b1df0);
          _objc_retainAutoreleasedReturnValue();
          local_1b9 = 0;
          local_1e9 = 0;
          local_2e8 = 0;
          if (IVar3 != 0) {
            IVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_shapeAttrBar_026b1df0);
            _objc_retainAutoreleasedReturnValue();
            local_1b9 = 1;
            local_1b8 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2e8 = 0;
            if ((IVar4 & 1) == 0) {
              IVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_shapeAttrBar_026b1df0);
              _objc_retainAutoreleasedReturnValue();
              local_1e9 = 1;
              local_1e8 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_2e8 = (uint)IVar4;
              _CGRectContainsPoint();
            }
          }
          if ((local_1e9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1e8);
          }
          if ((local_1b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b8);
          }
          (*(code *)PTR__objc_release_02578630)(IVar3);
          if ((local_2e8 & 1) == 0) {
            IVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_translateStickerView_026b1df8);
            _objc_retainAutoreleasedReturnValue();
            local_1f9 = 0;
            local_229 = 0;
            local_2f8 = 0;
            if (IVar3 != 0) {
              IVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_translateStickerView_026b1df8);
              _objc_retainAutoreleasedReturnValue();
              local_1f9 = 1;
              local_1f8 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_2f8 = 0;
              if ((IVar4 & 1) == 0) {
                IVar4 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_translateStickerView_026b1df8);
                _objc_retainAutoreleasedReturnValue();
                local_229 = 1;
                local_228 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_2f8 = (uint)IVar4;
                _CGRectContainsPoint();
              }
            }
            if ((local_229 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_228);
            }
            if ((local_1f9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1f8);
            }
            (*(code *)PTR__objc_release_02578630)(IVar3);
            if ((local_2f8 & 1) == 0) {
              _memset(auStack_278,0,0x40);
              IVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_floatingOverlays_026b1e00);
              _objc_retainAutoreleasedReturnValue();
              local_318 = IVar3;
              if (IVar3 == 0) {
                local_318 = *(ID *)PTR____NSArray0___02578280;
              }
              (*(code *)PTR__objc_retain_02578638)();
              (*(code *)PTR__objc_release_02578630)(IVar3);
              local_330 = local_318;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_318,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                         auStack_a8,0x10);
              if (local_330 != 0) {
                lVar5 = *local_268;
                local_338 = 0;
                do {
                  do {
                    if (*local_268 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_268 - lVar5,local_318);
                    }
                    uVar6 = *(ulong *)(local_270 + local_338 * 8);
                    local_238 = uVar6;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
                    if ((uVar6 & 1) == 0) {
                      uVar6 = local_238;
                      (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_frame_026ca640);
                      _CGRectContainsPoint();
                      if ((uVar6 & 1) != 0) {
                        local_a9 = 1;
                        bVar1 = true;
                        goto LAB_01643c08;
                      }
                    }
                    local_338 = local_338 + 1;
                  } while (local_338 < local_330);
                  local_330 = local_318;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_318,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                             auStack_a8,0x10);
                  local_338 = 0;
                } while (local_330 != 0);
              }
              bVar1 = false;
LAB_01643c08:
              (*(code *)PTR__objc_release_02578630)(local_318);
              if (!bVar1) {
                local_a9 = 0;
              }
            }
            else {
              local_a9 = 1;
            }
          }
          else {
            local_a9 = 1;
          }
        }
        else {
          local_a9 = 1;
        }
      }
      else {
        local_a9 = 1;
      }
    }
    else {
      local_a9 = 1;
    }
  }
  else {
    local_a9 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

