// FUN_002a0544 @ 002a0544

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002a0544(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_4f8;
  ulong local_4f0;
  ulong local_4b0;
  ulong local_4a8;
  double local_3f0;
  double local_3e8;
  undefined *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  code *local_378;
  undefined *local_370;
  ulong local_368;
  ulong local_360 [5];
  double local_338;
  undefined **local_330;
  ulong local_328;
  undefined1 auStack_320 [8];
  long local_318;
  long *local_310;
  undefined8 local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  undefined8 local_298;
  char local_259;
  ulong local_258 [19];
  ulong local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  undefined4 local_170;
  ulong local_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  local_158 = param_5;
  uStack_150 = param_6;
  local_148 = param_1;
  uStack_140 = param_2;
  local_138 = param_3;
  uStack_130 = param_4;
  _objc_storeStrong(&local_160,param_7);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_170 = 1;
  }
  else {
    uVar4 = local_160;
    FUN_0029ded4(local_160,0x24f74a);
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar4;
    if (uVar4 == 0) {
      FUN_002aef14();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_178;
      local_178 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar4 = local_160;
      FUN_002acca8(local_160,1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_160;
      local_180 = uVar4;
      FUN_0029ded4(local_160,0x24f749);
      _objc_retainAutoreleasedReturnValue();
      local_188 = uVar5;
      if (uVar5 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_addSubview__026ca4c0,local_178);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_insertSubview_aboveSubview__026ca740,local_178,uVar5);
      }
      _objc_storeStrong(&local_188);
      _objc_storeStrong(&local_180,0);
    }
    uVar4 = local_160;
    _objc_getAssociatedObject(local_160,&DAT_028c9611);
    _objc_retainAutoreleasedReturnValue();
    local_190 = uVar4;
    if (uVar4 == 0) {
      local_3e8 = local_158;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_doubleValue_026ca608);
      local_3e8 = param_1;
    }
    uVar4 = local_160;
    local_198 = local_3e8;
    local_1a8 = DAT_02323ec8;
    local_1b0 = ABS(local_158 - local_3e8) / 48.0;
    local_3f0 = local_1b0;
    if (DAT_02323ec8 < local_1b0) {
      local_3f0 = DAT_02323ec8;
    }
    local_1b8 = local_3f0;
    local_1a0 = local_3f0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar4,&DAT_028c9611,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar4 = local_160;
    FUN_002a00a0(local_148,uStack_140,local_138,uStack_130,local_158,uStack_150);
    uVar5 = local_160;
    dVar8 = local_148;
    uVar9 = uStack_140;
    uVar10 = local_138;
    uVar11 = uStack_130;
    local_1c0 = uVar4;
    FUN_002af3b0();
    uVar1 = (uint)uVar5;
    _CGRectIsEmpty(dVar8,uVar9,uVar10,uVar11);
    if ((uVar1 & 1) == 0) {
      uVar4 = local_160;
      _objc_getAssociatedObject(local_160,&DAT_028c9613);
      _objc_retainAutoreleasedReturnValue();
      local_259 = true;
      local_258[0] = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_unsignedIntegerValue_026cabb8);
        local_259 = uVar4 != local_1c0;
      }
      uVar4 = local_160;
      if (((bool)local_259 != false) && (local_1c0 != 0x7fffffffffffffff)) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_1c0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_028c9613,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        FUN_002a1338(local_160,local_1c0,1);
      }
      FUN_002a1490(local_148,uStack_140,local_138,uStack_130,local_158,uStack_150,local_160,
                   local_1c0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_178,PTR_s_setAlpha__026ca860);
      uVar4 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _memset(auStack_2d8,0,0x40);
      uVar4 = local_160;
      FUN_002ae960(local_160,&cf_MMTabBarItemView);
      _objc_retainAutoreleasedReturnValue();
      local_4a8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_4a8 != 0) {
        lVar7 = *local_2c8;
        local_4b0 = 0;
        do {
          do {
            if (*local_2c8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_2c8 - lVar7,uVar4);
            }
            local_298 = *(undefined8 *)(local_2d0 + local_4b0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_bringSubviewToFront__026ca550,local_298);
            local_4b0 = local_4b0 + 1;
          } while (local_4b0 < local_4a8);
          local_4a8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_a8,
                     0x10);
          local_4b0 = 0;
        } while (local_4a8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _memset(auStack_320,0,0x40);
      uVar4 = local_160;
      FUN_002ae960(local_160,&cf_UITabBarButton);
      _objc_retainAutoreleasedReturnValue();
      local_4f0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_4f0 != 0) {
        lVar7 = *local_310;
        local_4f8 = 0;
        do {
          do {
            if (*local_310 - lVar7 != 0) {
              _objc_enumerationMutation(*local_310 - lVar7,uVar4);
            }
            local_2e0 = *(undefined8 *)(local_318 + local_4f8 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_bringSubviewToFront__026ca550,local_2e0);
            local_4f8 = local_4f8 + 1;
          } while (local_4f8 < local_4f0);
          local_4f0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,auStack_128,
                     0x10);
          local_4f8 = 0;
        } while (local_4f0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_160;
      FUN_0029ded4(local_160,0x24f74b);
      _objc_retainAutoreleasedReturnValue();
      local_328 = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bringSubviewToFront__026ca550,uVar4);
      }
      uVar4 = local_178;
      ppuVar6 = &local_388;
      local_388 = PTR___NSConcreteStackBlock_02578660;
      local_380 = 0xc2000000;
      local_37c = 0;
      local_378 = FUN_002af88c;
      local_370 = &DAT_0257b938;
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = local_160;
      local_368 = uVar4;
      local_338 = local_1a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_360[0] = uVar5;
      _objc_retainBlock();
      local_330 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
      (*(code *)local_330[2])();
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
      _objc_storeStrong(&local_330);
      _objc_storeStrong(local_360,0);
      _objc_storeStrong(&local_368,0);
      _objc_storeStrong(&local_328,0);
      _objc_storeStrong(local_258,0);
      local_170 = 0;
    }
    else {
      local_170 = 1;
    }
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

