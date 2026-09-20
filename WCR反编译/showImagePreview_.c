// showImagePreview: @ 01facae8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineWatermarkLibraryViewController::showImagePreview_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 in_d0;
  undefined8 uVar9;
  double in_d2;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_6a0;
  ulong local_698;
  undefined *local_658;
  undefined *local_650;
  ulong local_608;
  ulong local_600;
  ulong local_5c0;
  ulong local_5b8;
  undefined *local_580;
  undefined *local_578;
  undefined *local_548;
  undefined4 local_540;
  undefined4 local_53c;
  code *local_538;
  undefined *local_530;
  undefined *local_528;
  double local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  double local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined *local_4b8 [5];
  undefined8 local_490;
  undefined *local_470;
  undefined *local_468 [5];
  undefined *local_440;
  undefined1 auStack_438 [8];
  long local_430;
  long *local_428;
  ulong local_3f8;
  undefined1 auStack_3f0 [8];
  long local_3e8;
  long *local_3e0;
  ulong local_3b0;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  long *local_398;
  ulong local_368;
  undefined1 auStack_360 [8];
  long local_358;
  long *local_350;
  ulong local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  ulong local_2d8;
  ulong local_2d0;
  undefined4 local_2c4;
  long local_2c0;
  SEL local_2b8;
  ID local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2c0 = 0;
  local_2b8 = param_2;
  local_2b0 = param_1;
  _objc_storeStrong(&local_2c0,param_3);
  if (local_2c0 == 0) {
    local_2c4 = 1;
  }
  else {
    local_2d0 = 0;
    _memset(auStack_318,0,0x40);
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_578 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_a8,0x10);
    if (local_578 != (undefined *)0x0) {
      lVar4 = *local_308;
      local_580 = (undefined *)0x0;
      do {
        do {
          if (*local_308 - lVar4 != 0) {
            _objc_enumerationMutation(*local_308 - lVar4,puVar2);
          }
          uVar5 = *(ulong *)(local_310 + (long)local_580 * 8);
          local_2d8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_activationState_026ca490);
          if (uVar5 == 0) {
            _memset(auStack_360,0,0x40);
            uVar5 = local_2d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_5b8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_5b8 != 0) {
              lVar6 = *local_350;
              local_5c0 = 0;
              do {
                do {
                  if (*local_350 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_350 - lVar6,uVar5);
                  }
                  uVar7 = *(ulong *)(local_358 + local_5c0 * 8);
                  pcVar3 = &cf_WCActionSheet;
                  local_320 = uVar7;
                  _NSClassFromString(&cf_WCActionSheet);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,pcVar3);
                  if (((uVar7 & 1) == 0) &&
                     (uVar7 = local_320,
                     (*(code *)PTR__objc_msgSend_02578628)(local_320,PTR_s_isKeyWindow_0269cd70),
                     (uVar7 & 1) != 0)) {
                    _objc_storeStrong(&local_2d0,local_320);
                    local_2c4 = 4;
                    goto LAB_01face10;
                  }
                  local_5c0 = local_5c0 + 1;
                } while (local_5c0 < local_5b8);
                local_5b8 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,
                           auStack_128,0x10);
                local_5c0 = 0;
              } while (local_5b8 != 0);
            }
            local_2c4 = 0;
LAB_01face10:
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if (local_2d0 != 0) {
              local_2c4 = 2;
              goto LAB_01fad06c;
            }
            _memset(auStack_3a8,0,0x40);
            uVar5 = local_2d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_600 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_600 != 0) {
              lVar6 = *local_398;
              local_608 = 0;
              do {
                do {
                  if (*local_398 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_398 - lVar6,uVar5);
                  }
                  uVar7 = *(ulong *)(local_3a0 + local_608 * 8);
                  pcVar3 = &cf_WCActionSheet;
                  local_368 = uVar7;
                  _NSClassFromString(&cf_WCActionSheet);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,pcVar3);
                  if ((uVar7 & 1) == 0) {
                    _objc_storeStrong(&local_2d0,local_368);
                    local_2c4 = 6;
                    goto LAB_01facfd8;
                  }
                  local_608 = local_608 + 1;
                } while (local_608 < local_600);
                local_600 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,
                           auStack_1a8,0x10);
                local_608 = 0;
              } while (local_600 != 0);
            }
            local_2c4 = 0;
LAB_01facfd8:
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          local_580 = local_580 + 1;
        } while (local_580 < local_578);
        local_578 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_a8,
                   0x10);
        local_580 = (undefined *)0x0;
      } while (local_578 != (undefined *)0x0);
    }
    local_2c4 = 0;
LAB_01fad06c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_2d0 == 0) {
      _memset(auStack_3f0,0,0x40);
      puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_650 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,auStack_228,0x10
                );
      if (local_650 != (undefined *)0x0) {
        lVar4 = *local_3e0;
        local_658 = (undefined *)0x0;
        do {
          do {
            if (*local_3e0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_3e0 - lVar4,puVar2);
            }
            uVar5 = *(ulong *)(local_3e8 + (long)local_658 * 8);
            pcVar3 = &cf_WCActionSheet;
            local_3b0 = uVar5;
            _NSClassFromString(&cf_WCActionSheet);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar3);
            if ((uVar5 & 1) == 0) {
              _objc_storeStrong(&local_2d0,local_3b0);
              local_2c4 = 8;
              goto LAB_01fad258;
            }
            local_658 = local_658 + 1;
          } while (local_658 < local_650);
          local_650 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,auStack_228,
                     0x10);
          local_658 = (undefined *)0x0;
        } while (local_650 != (undefined *)0x0);
      }
      local_2c4 = 0;
LAB_01fad258:
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (local_2d0 == 0) {
      local_2c4 = 1;
    }
    else {
      _memset(auStack_438,0,0x40);
      uVar5 = local_2d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_698 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_698 != 0) {
        lVar4 = *local_428;
        local_6a0 = 0;
        do {
          do {
            if (*local_428 - lVar4 != 0) {
              _objc_enumerationMutation(*local_428 - lVar4,uVar5);
            }
            uVar8 = *(ulong *)(local_430 + local_6a0 * 8);
            local_3f8 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_tag_026cab98);
            uVar7 = local_3f8;
            if (uVar8 == 0x5f06) {
              puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar7 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_3f8,PTR_s_removeFromSuperview_026ca800);
              }
            }
            local_6a0 = local_6a0 + 1;
          } while (local_6a0 < local_698);
          local_698 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_438,auStack_2a8,
                     0x10);
          local_6a0 = 0;
        } while (local_698 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,puVar1,PTR_s_initWithFrame__026ca6e8);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_440 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar9 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_setTag__026caa80,0x5f06);
      puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_468[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_addGestureRecognizer__026ca4a8,puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_470 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setContentMode__026ca8e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_bounds_026ca548);
      local_490 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_addSubview__026ca4c0,local_470);
      puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
      _objc_retainAutoreleasedReturnValue();
      local_4b8[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_bounds_026ca548);
      in_d2 = in_d2 - 60.0;
      uVar9 = 0x4044000000000000;
      uVar11 = 0x4049000000000000;
      uVar10 = 0x4049000000000000;
      FUN_01fa74bc();
      local_520 = in_d2;
      uStack_518 = uVar9;
      local_510 = uVar10;
      uStack_508 = uVar11;
      local_4d8 = in_d2;
      uStack_4d0 = uVar9;
      local_4c8 = uVar10;
      uStack_4c0 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d2,uVar9,uVar10,uVar11,local_4b8[0],PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_4b8[0],PTR_s_setTitle_forState__026caab8,&::cf__);
      puVar1 = local_4b8[0];
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0,puVar2,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x403e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_4b8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_4b8[0],PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4b8[0],PTR_s_addTarget_action_forControlEvent_026ca4c8,local_2b0,
                 PTR_s_dismissPreview__026b6548,0x40);
      (*(code *)PTR__objc_msgSend_02578628)(local_4b8[0],PTR_s_setAutoresizingMask__026ca878,0x21);
      (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_addSubview__026ca4c0,local_4b8[0]);
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_addSubview__026ca4c0,local_440);
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_bringSubviewToFront__026ca550,local_440)
      ;
      puVar2 = local_440;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_548 = PTR___NSConcreteStackBlock_02578660;
      local_540 = 0xc2000000;
      local_53c = 0;
      local_538 = FUN_01fada78;
      local_530 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_528 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd3333333333333,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,
                 &local_548);
      _objc_storeStrong(&local_528,0);
      _objc_storeStrong(local_4b8,0);
      _objc_storeStrong(&local_470,0);
      _objc_storeStrong(local_468,0);
      _objc_storeStrong(&local_440,0);
      local_2c4 = 0;
    }
    _objc_storeStrong(&local_2d0,0);
  }
  _objc_storeStrong(&local_2c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

