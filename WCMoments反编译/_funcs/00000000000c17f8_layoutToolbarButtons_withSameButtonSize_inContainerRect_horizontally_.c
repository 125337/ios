// layoutToolbarButtons:withSameButtonSize:inContainerRect:horizontally: @0xc17f8

/* WARNING: Removing unreachable block (ram,0x000c1fe4) */
/* WARNING: Removing unreachable block (ram,0x000c1fec) */
/* WARNING: Removing unreachable block (ram,0x000c20ac) */
/* Function Stack Size: 0x4c bytes */

void WCMTOCropToolbar::layoutToolbarButtons_withSameButtonSize_inContainerRect_horizontally_
               (ID param_1,SEL param_2,ID param_3,CGSize param_4,CGRect param_5,bool param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_418;
  double local_408;
  double local_400;
  double local_3f8;
  ulong local_3d8;
  ulong local_3d0;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  undefined8 local_380;
  undefined8 local_2a0;
  byte local_291;
  long local_290;
  undefined8 local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  long local_258;
  double local_250;
  double local_248;
  double local_240;
  long local_238;
  double local_230;
  double dStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined4 local_f8;
  byte local_f1;
  undefined8 local_f0;
  SEL local_e8;
  ID local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_c0 = param_5.field1_0x10.field1_0x8;
  local_c8 = param_5.field1_0x10.field0_0x0;
  local_d0 = param_5.field0_0x0.field1_0x8;
  local_d8 = param_5.field0_0x0.field0_0x0;
  dStack_b0 = param_4.field1_0x8;
  local_b8 = param_4.field0_0x0;
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  local_f1 = (byte)param_6;
  uVar1 = _WCMTOCropViewUsesGlassDesign();
  if ((uVar1 & 1) != 0) {
    lVar2 = _objc_msgSend_count(local_f0,local_380);
    _objc_msgSend_setHidden_(*(undefined8 *)(local_e0 + (long)_glassView),local_380,lVar2 == 0);
  }
  lVar2 = _objc_msgSend_count(local_f0,local_380);
  if (lVar2 == 0) {
    local_f8 = 1;
  }
  else {
    local_100 = 0x4046000000000000;
    uVar1 = _WCMTOCropViewUsesGlassDesign();
    if ((uVar1 & 1) == 0) {
      local_238 = _objc_msgSend_count(local_f0,local_380);
      if ((local_f1 & 1) == 0) {
        local_3f8 = dStack_b0;
      }
      else {
        local_3f8 = local_b8;
      }
      local_240 = local_3f8;
      if ((local_f1 & 1) == 0) {
        local_400 = (double)_CGRectGetHeight(local_d8,local_d0,local_c8,local_c0);
      }
      else {
        local_400 = (double)_CGRectGetWidth(local_d8,local_d0,local_c8,local_c0);
      }
      local_248 = local_400;
      local_250 = (local_400 - (double)local_238 * local_240) / (double)(local_238 + 1);
      for (local_258 = 0; local_258 < local_238; local_258 = local_258 + 1) {
        _objc_msgSend_objectAtIndexedSubscript_(local_258 - local_238,local_f0,local_380,local_258);
        local_260 = _objc_retainAutoreleasedReturnValue();
        if ((local_f1 & 1) == 0) {
          local_408 = (double)_CGRectGetWidth(local_d8,local_d0,local_c8,local_c0);
          local_408 = local_408 - local_b8;
        }
        else {
          local_408 = (double)_CGRectGetHeight(local_d8,local_d0,local_c8,local_c0);
          local_408 = local_408 - 44.0;
        }
        local_408 = ABS(local_408);
        local_268 = local_408;
        dVar5 = local_250 + (local_240 + local_250) * (double)local_258;
        local_270 = dVar5;
        if ((local_f1 & 1) == 0) {
          local_280 = (double)_CGPointMake(local_408);
          dStack_278 = dVar5;
        }
        else {
          local_280 = (double)_CGPointMake(dVar5);
          dStack_278 = local_408;
        }
        if ((local_f1 & 1) == 0) {
          dVar5 = (double)_CGRectGetMinY(local_d8,local_d0,local_c8,local_c0);
          dStack_278 = dStack_278 + dVar5;
        }
        else {
          dVar5 = (double)_CGRectGetMinX(local_d8,local_d0,local_c8,local_c0);
          local_280 = local_280 + dVar5;
          _objc_msgSend_configuration(local_260,local_380);
          lVar2 = _objc_retainAutoreleasedReturnValue();
          local_291 = 0;
          local_418 = lVar2;
          if (lVar2 == 0) {
            _objc_msgSend_plainButtonConfiguration(&_OBJC_CLASS___UIButtonConfiguration,local_380);
            local_290 = _objc_retainAutoreleasedReturnValue();
            local_418 = local_290;
          }
          local_291 = lVar2 == 0;
          local_288 = (*(code *)PTR__objc_retain_00110460)(local_418);
          if ((local_291 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_290);
          }
          (*(code *)PTR__objc_release_00110458)(lVar2);
          _objc_msgSend_setImagePlacement_(local_288,local_380,2);
          _objc_msgSend_setImagePadding_(0x4020000000000000,local_288,local_380);
          _objc_msgSend_imageView(local_260,local_380);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_image(uVar3,local_380);
          local_2a0 = _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_00110458)(uVar3);
          uVar3 = _objc_msgSend_baselineOffsetFromBottom(local_2a0,local_380);
          uVar7 = 0;
          uVar6 = 0;
          uVar4 = _NSDirectionalEdgeInsetsMake(0);
          _objc_msgSend_setContentInsets_(uVar4,uVar6,uVar3,uVar7,local_288,local_380);
          _objc_msgSend_setConfiguration_(local_260,local_380,local_288);
          _objc_storeStrong(&local_2a0);
          _objc_storeStrong(&local_288,0);
        }
        _objc_msgSend_setFrame_(local_280,dStack_278,local_b8,dStack_b0,local_260,local_380);
        _objc_storeStrong(&local_260,0);
      }
    }
    else {
      local_108 = 6.0;
      local_110 = 12.0;
      uVar1 = _objc_msgSend_count(local_f0,local_380);
      dVar5 = local_110;
      lVar2 = _objc_msgSend_count(local_f0,local_380);
      local_118 = dVar5 * (double)(lVar2 - 1) + (double)uVar1 * 44.0 + local_108 * 2.0;
      dStack_138 = *(double *)(PTR__CGRectZero_001108d8 + 8);
      local_140 = *(double *)PTR__CGRectZero_001108d8;
      local_398 = local_118;
      if ((local_f1 & 1) == 0) {
        local_398 = 44.0;
      }
      local_130 = local_398;
      local_3a0 = local_118;
      if ((local_f1 & 1) != 0) {
        local_3a0 = 44.0;
      }
      dStack_128 = local_3a0;
      if ((local_f1 & 1) == 0) {
        local_3a8 = 0.0;
      }
      else {
        local_3a8 = (double)_CGRectGetMidX(local_d8,local_d0,local_c8,local_c0);
        local_3a8 = local_3a8 - local_130 / 2.0;
      }
      local_140 = local_3a8;
      if ((local_f1 & 1) == 0) {
        local_3b0 = (double)_CGRectGetMidY(local_d8,local_d0,local_c8,local_c0);
        local_3b0 = local_3b0 - dStack_128 / 2.0;
      }
      else {
        local_3b0 = 0.0;
      }
      dStack_138 = local_3b0;
      dStack_158 = local_3b0;
      local_160 = local_140;
      dStack_148 = dStack_128;
      local_150 = local_130;
      dStack_178 = local_3b0;
      local_180 = local_140;
      dStack_168 = dStack_128;
      local_170 = local_130;
      _objc_msgSend_setFrame_
                (local_140,local_3b0,local_130,dStack_128,
                 *(undefined8 *)(local_e0 + (long)_glassView),local_380);
      local_188 = local_108;
      _memset(auStack_1d0,0,0x40);
      uVar3 = (*(code *)PTR__objc_retain_00110460)(local_f0);
      local_3d0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_380,auStack_1d0,auStack_a8,0x10);
      if (local_3d0 != 0) {
        lVar2 = *local_1c0;
        local_3d8 = 0;
        do {
          do {
            if (*local_1c0 - lVar2 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar2,uVar3);
            }
            local_190 = *(undefined8 *)(local_1c8 + local_3d8 * 8);
            dVar5 = 0.0;
            uVar6 = 0x4046000000000000;
            uVar4 = 0x4046000000000000;
            local_1f0 = (double)_CGRectMake(0);
            if ((local_f1 & 1) == 0) {
              dStack_1e8 = local_188;
            }
            else {
              local_1f0 = local_188;
              dStack_1e8 = dVar5;
            }
            dStack_208 = dStack_1e8;
            local_210 = local_1f0;
            dStack_228 = dStack_1e8;
            local_230 = local_1f0;
            local_220 = uVar4;
            uStack_218 = uVar6;
            local_200 = uVar4;
            uStack_1f8 = uVar6;
            local_1e0 = uVar4;
            uStack_1d8 = uVar6;
            _objc_msgSend_setFrame_(local_1f0,dStack_1e8,uVar4,uVar6,local_190,local_380);
            local_188 = local_188 + local_110 + 44.0;
            local_3d8 = local_3d8 + 1;
          } while (local_3d8 < local_3d0);
          local_3d0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar3,local_380,auStack_1d0,auStack_a8,0x10);
          local_3d8 = 0;
        } while (local_3d0 != 0);
      }
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    local_f8 = 0;
  }
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

