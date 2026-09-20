// FUN_01551e44 @ 01551e44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01551e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_490;
  ulong local_488;
  ulong local_438;
  ulong local_430;
  ulong local_3c8;
  ulong local_3c0;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  ulong local_310;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  ulong local_2c8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulong local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  ulong local_248 [5];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  undefined4 local_1b4;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_5);
  if (local_1b0 == 0) {
    local_1b4 = 1;
  }
  else {
    uVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_tag_026cab98);
    if (uVar1 == 0x24f6dd) {
      _memset(auStack_200,0,0x40);
      uVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_3c0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3c0 != 0) {
        lVar5 = *local_1f0;
        local_3c8 = 0;
        do {
          do {
            if (*local_1f0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1f0 - lVar5,uVar1);
            }
            local_1c0 = *(ulong *)(local_1f8 + local_3c8 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_bounds_026ca548);
            local_220 = param_1;
            uStack_218 = param_2;
            local_210 = param_3;
            uStack_208 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setFrame__026ca960);
            local_248[0] = 0;
            uVar6 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_valueForKey__0269d128,&cf_displayView);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_248[0];
            local_248[0] = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if (local_248[0] != 0) {
              pcVar2 = &cf_setVideoGravity_;
              _NSSelectorFromString();
              uVar3 = local_248[0];
              local_268 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_248[0],PTR_s_respondsToSelector__026ca818,pcVar2);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_248[0],local_268,
                           *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
              }
              pcVar2 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
              _NSSelectorFromString();
              uVar3 = local_248[0];
              local_270 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_248[0],PTR_s_respondsToSelector__026ca818,pcVar2);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_248[0],local_270,2);
              }
            }
            _objc_storeStrong(local_248,0);
            local_3c8 = local_3c8 + 1;
          } while (local_3c8 < local_3c0);
          local_3c0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,
                     0x10);
          local_3c8 = 0;
        } while (local_3c0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_1b0;
    _objc_getAssociatedObject(local_1b0,DAT_028c5fc0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
    local_278 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar1 & 1) == 0) {
      _memset(auStack_308,0,0x40);
      uVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_430 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_128,0x10)
      ;
      if (local_430 != 0) {
        lVar5 = *local_2f8;
        local_438 = 0;
        do {
          do {
            if (*local_2f8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_2f8 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_300 + local_438 * 8);
            puVar4 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
            local_2c8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            uVar1 = local_2c8;
            if ((uVar6 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_310 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_bounds_026ca548);
              local_350 = param_1;
              uStack_348 = param_2;
              local_340 = param_3;
              uStack_338 = param_4;
              local_330 = param_1;
              uStack_328 = param_2;
              local_320 = param_3;
              uStack_318 = param_4;
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_310,PTR_s_setVideoGravity__0269f298,
                         *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
              _objc_storeStrong(&local_310,0);
            }
            local_438 = local_438 + 1;
          } while (local_438 < local_430);
          local_430 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_128,
                     0x10);
          local_438 = 0;
        } while (local_430 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_bounds_026ca548);
      local_298 = param_1;
      uStack_290 = param_2;
      local_288 = param_3;
      uStack_280 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_278,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_278,PTR_s_setVideoGravity__0269f298,
                 *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
    }
    _memset(auStack_398,0,0x40);
    uVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_488 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_488 != 0) {
      lVar5 = *local_388;
      local_490 = 0;
      do {
        do {
          if (*local_388 - lVar5 != 0) {
            _objc_enumerationMutation(*local_388 - lVar5,uVar1);
          }
          local_358 = *(undefined8 *)(local_390 + local_490 * 8);
          FUN_01551e44(local_358);
          local_490 = local_490 + 1;
        } while (local_490 < local_488);
        local_488 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_1a8,
                   0x10);
        local_490 = 0;
      } while (local_488 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_278,0);
    local_1b4 = 0;
  }
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

