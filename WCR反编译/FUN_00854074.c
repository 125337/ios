// FUN_00854074 @ 00854074

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00854074(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong local_640;
  ulong local_638;
  double local_5f8;
  ulong local_578;
  ulong local_570;
  double local_470;
  double local_460;
  undefined1 auStack_358 [8];
  long local_350;
  long *local_348;
  ulong local_318;
  double local_310;
  ulong local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  ulong local_290;
  double local_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  undefined8 local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  undefined8 local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  ulong local_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  double dStack_198;
  double local_190;
  char local_181;
  double local_180;
  double local_178;
  ulong local_170 [3];
  ulong local_158;
  undefined4 local_150;
  byte local_149;
  double local_148;
  double local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_4);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_5);
  local_149 = param_6;
  local_148 = param_2;
  local_140 = param_1;
  if ((local_130 == 0) || (local_138 == 0)) {
    local_150 = 1;
    goto LAB_008550c4;
  }
  local_460 = param_1;
  if (((param_6 & 1) == 0) && (local_460 = param_2, param_2 < param_1)) {
    local_460 = param_1;
    local_148 = param_1;
  }
  uVar4 = local_130;
  _objc_getAssociatedObject(local_130,DAT_026f48d0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_130;
  local_158 = uVar4;
  _objc_getAssociatedObject(local_130,DAT_026f48c8);
  _objc_retainAutoreleasedReturnValue();
  local_170[0] = uVar6;
  if (local_158 == 0) {
    local_460 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_doubleValue_026ca608);
  }
  local_178 = local_460;
  if (local_170[0] == 0) {
    local_470 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_170[0],PTR_s_doubleValue_026ca608);
    local_470 = local_460;
  }
  uVar4 = local_130;
  uVar1 = DAT_026f48d0;
  local_180 = local_470;
  local_181 = false;
  if ((1.0 < local_140) && (local_181 = true, 1.0 <= local_470)) {
    local_181 = local_140 + 0.5 < local_470;
  }
  if ((local_178 < 1.0) || ((bool)local_181 != false)) {
    local_178 = local_140;
  }
  if (((local_149 & 1) == 0) && (local_148 < local_178)) {
    local_148 = local_178;
  }
  local_190 = local_148 - local_178;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  dVar9 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_178,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar4,uVar1,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_130;
  uVar1 = DAT_026f48c0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar4,uVar1,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_130;
  uVar1 = DAT_026f48c8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  dVar8 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar4,uVar1,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_frame_026ca640);
  dStack_198 = local_148;
  dStack_1b8 = local_148;
  dStack_1d8 = local_148;
  local_1f0 = dVar8;
  dStack_1e8 = dVar9;
  local_1e0 = param_3;
  local_1d0 = dVar8;
  dStack_1c8 = dVar9;
  local_1c0 = param_3;
  local_1b0 = dVar8;
  dStack_1a8 = dVar9;
  local_1a0 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar8,dVar9,param_3,local_148,local_138,PTR_s_setFrame__026ca960);
  local_1f8 = 0;
  uVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_tableHeaderView_0269ea08);
  if ((uVar4 & 1) != 0) {
    uVar6 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableHeaderView_0269ea08);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_1f8;
    local_1f8 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  uVar4 = local_1f8 - local_138;
  if (uVar4 == 0) {
    uVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_setTableHeaderView__0269ea10);
    uVar6 = local_130;
    uVar1 = DAT_026f48d8;
    uVar4 = uVar3 & 0xffffffff;
    if ((uVar3 & 1) == 0) goto LAB_00854790;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar6,uVar1,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (0.5 <= ABS(local_140 - local_148)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTableHeaderView__0269ea10,local_138);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layoutIfNeeded_026ca790);
      local_150 = 1;
    }
    else {
      local_150 = 1;
    }
  }
  else {
LAB_00854790:
    dStack_238 = dStack_1a8;
    local_240 = local_1b0;
    dStack_228 = dStack_198;
    local_230 = local_1a0;
    dVar8 = local_1b0;
    _CGRectGetMinX(uVar4,local_1b0,dStack_1a8,local_1a0,dStack_198);
    dStack_258 = dStack_1a8;
    local_260 = local_1b0;
    dStack_248 = dStack_198;
    local_250 = local_1a0;
    dVar9 = local_1b0;
    _CGRectGetMinY(local_1b0,dStack_1a8,local_1a0,dStack_198);
    dStack_278 = dStack_1a8;
    local_280 = local_1b0;
    dStack_268 = dStack_198;
    local_270 = local_1a0;
    dVar11 = local_1b0;
    _CGRectGetWidth(local_1b0,dStack_1a8,local_1a0,dStack_198);
    dVar10 = local_178;
    FUN_0081e864();
    local_220 = dVar8;
    local_218 = dVar9;
    local_210 = dVar11;
    local_208 = dVar10;
    _CGRectGetMaxY();
    dVar7 = -1.0;
    local_288 = -1.0;
    local_200 = dVar8;
    _memset(auStack_2d0,0,0x40);
    uVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_570 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_570 != 0) {
      lVar5 = *local_2c0;
      local_578 = 0;
      do {
        do {
          if (*local_2c0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_2c0 - lVar5,uVar4);
          }
          uVar6 = *(ulong *)(local_2c8 + local_578 * 8);
          local_290 = uVar6;
          if (uVar6 != local_138) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if ((uVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_frame_026ca640);
              local_2f8 = dVar7;
              local_2f0 = dVar9;
              local_2e8 = dVar11;
              local_2e0 = dVar10;
              _CGRectGetMinY(dVar7,dVar9,dVar11);
              dVar11 = 0.5;
              dVar9 = local_200 - 0.5;
              local_2d8 = dVar7;
              if ((dVar9 <= dVar7) &&
                 ((local_300 = dVar7 - local_200, dVar9 = local_200, dVar7 = local_300,
                  local_288 < 0.0 || (dVar9 = local_288, local_300 < local_288)))) {
                local_288 = local_300;
              }
            }
          }
          local_578 = local_578 + 1;
        } while (local_578 < local_570);
        local_570 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_a8,0x10
                  );
        local_578 = 0;
      } while (local_570 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_288 < 0.0) {
      uVar4 = local_130;
      local_5f8 = local_288;
      _objc_getAssociatedObject(local_130,DAT_026f48d8);
      _objc_retainAutoreleasedReturnValue();
      local_308 = uVar4;
      if (uVar4 == 0) {
        local_5f8 = 0.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_doubleValue_026ca608);
      }
      local_288 = local_5f8;
      _objc_storeStrong(&local_308,0);
    }
    uVar4 = local_130;
    uVar1 = DAT_026f48d8;
    local_310 = local_190 - local_288;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar4,uVar1,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dVar8 = ABS(local_310);
    dVar9 = 0.5;
    if (0.5 <= dVar8) {
      _memset(auStack_358,0,0x40);
      uVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_638 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_638 != 0) {
        lVar5 = *local_348;
        local_640 = 0;
        do {
          do {
            dVar7 = dVar8;
            dVar10 = dVar9;
            dVar12 = dVar11;
            if (*local_348 - lVar5 != 0) {
              _objc_enumerationMutation(*local_348 - lVar5,uVar4);
              dVar7 = dVar8;
              dVar10 = dVar9;
              dVar12 = dVar11;
            }
            uVar6 = *(ulong *)(local_350 + local_640 * 8);
            dVar8 = dVar7;
            dVar9 = dVar10;
            dVar11 = dVar12;
            local_318 = uVar6;
            if (uVar6 != local_138) {
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              dVar8 = dVar7;
              dVar9 = dVar10;
              dVar11 = dVar12;
              if ((uVar3 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_frame_026ca640);
                dVar8 = dVar7;
                _CGRectGetMinY(dVar7,dVar10,dVar12);
                dVar9 = local_200 - 0.5;
                dVar11 = 0.5;
                if (local_200 - 0.5 <= dVar8) {
                  dVar9 = dVar10 + local_310;
                  (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_setFrame__026ca960);
                  dVar8 = dVar7;
                  dVar11 = dVar12;
                }
              }
            }
            local_640 = local_640 + 1;
          } while (local_640 < local_638);
          local_638 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_128,
                     0x10);
          local_640 = 0;
        } while (local_638 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentSize_026ca5a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar8,dVar9 + local_310,local_130,PTR_s_setContentSize__026ca8e8);
      local_150 = 0;
    }
    else {
      local_150 = 1;
    }
  }
  _objc_storeStrong(&local_1f8);
  _objc_storeStrong(local_170,0);
  _objc_storeStrong(&local_158,0);
LAB_008550c4:
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

