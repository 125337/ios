// FUN_0084a058 @ 0084a058

void FUN_0084a058(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double local_668;
  double local_660;
  ulong local_620;
  ulong local_618;
  uint local_5f0;
  ulong local_568;
  ulong local_560;
  ulong local_478;
  ulong local_470;
  byte local_3f0;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ulong local_310;
  byte local_302;
  byte local_301;
  double local_300;
  double local_2f8;
  double local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  undefined1 local_2c9;
  undefined *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  byte local_271;
  ulong local_270;
  ulong local_268;
  ulong local_260;
  ulong local_258;
  undefined1 local_249;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  ulong local_208;
  ulong local_1f8;
  undefined4 local_1ec;
  ulong local_1e8;
  ulong local_1e0;
  byte local_1d6;
  byte local_1d5;
  byte local_1c1;
  undefined *local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = param_6;
  local_1b0 = param_5;
  (*DAT_028cd490)(param_5,param_6);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_profileCornerEnabled_026a8e40);
  local_1c1 = (byte)puVar3;
  local_3f0 = 1;
  if ((DAT_026f4898 & 1) == 0) {
    puVar3 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_profileHideArrowQREnabled_026a8e48);
    local_3f0 = 1;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_profileHideStateButtonsEnabled_026a8df8)
      ;
      local_3f0 = (byte)puVar3;
    }
  }
  uVar4 = local_1b0;
  local_1d5 = local_3f0 & 1;
  local_1d6 = 1;
  if ((local_1c1 & 1) == 0) {
    local_1d6 = local_1d5;
  }
  local_1e0 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e8 = uVar4;
  do {
    uVar7 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_1e8;
    local_1e8 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_1e8;
    if (uVar7 == 0) goto LAB_0084a2a0;
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  } while ((uVar4 & 1) == 0);
  _objc_storeStrong(&local_1e0,local_1e8);
LAB_0084a2a0:
  uVar4 = local_1e0;
  if (local_1e0 != 0) {
    pcVar5 = &cf_MoreViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar5);
    if ((uVar4 & 1) != 0) {
      local_1f8 = 0;
      uVar7 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_1f8;
      local_1f8 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_1f8 != 0) {
        _memset(auStack_248,0,0x40);
        uVar4 = local_1f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_470 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8,0x10
                  );
        if (local_470 != 0) {
          lVar6 = *local_238;
          local_478 = 0;
          do {
            do {
              if (*local_238 - lVar6 != 0) {
                _objc_enumerationMutation(*local_238 - lVar6,uVar4);
              }
              uVar7 = *(ulong *)(local_240 + local_478 * 8);
              pcVar5 = &cf_MMUIButton;
              local_208 = uVar7;
              _NSClassFromString();
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,pcVar5);
              if ((uVar7 & 1) != 0) {
                uVar7 = local_208;
                _objc_getAssociatedObject(local_208,DAT_026f48a0);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar7);
                uVar7 = local_208;
                uVar1 = DAT_026f48a0;
                local_249 = (undefined1)uVar9;
                if ((local_1d6 & 1) == 0) {
                  if ((uVar9 & 1) != 0) {
                    FUN_0084bcc0(local_1b0,local_208);
                  }
                }
                else {
                  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_setAssociatedObject(uVar7,uVar1,puVar3,1);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  uVar7 = local_208;
                  FUN_0084c170();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = local_208;
                  local_258 = uVar7;
                  FUN_0084c4f8();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = local_208;
                  local_260 = uVar9;
                  FUN_0084cb28();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = local_208;
                  local_268 = uVar7;
                  FUN_0084ce38();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = local_208;
                  local_270 = uVar9;
                  if ((DAT_026f4898 & 1) == 0) {
                    puVar3 = local_1c0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_profileHideArrowQREnabled_026a8e48);
                    FUN_0084d148(uVar7,(ulong)puVar3 & 0xffffffff);
                    uVar7 = local_208;
                    puVar3 = local_1c0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_profileHideStateButtonsEnabled_026a8df8);
                    FUN_0084d494(uVar7,(ulong)puVar3 & 0xffffffff);
                    FUN_0084d604(local_258,0,DAT_026f48a8);
                    FUN_0084d604(local_260,0,DAT_026f48b0);
                    FUN_0084d910(local_1b0,local_208);
                  }
                  else {
                    puVar3 = local_1c0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_profileHideArrowQREnabled_026a8e48);
                    FUN_0084d148(uVar7,(ulong)puVar3 & 0xffffffff);
                    if ((DAT_028cd2c0 == 0) || ((local_1c1 & 1) == 0)) {
                      FUN_0084dc30(local_208);
                    }
                    FUN_0084dd28(local_1b0,local_208);
                  }
                  local_271 = 0;
                  _memset(auStack_2c0,0,0x40);
                  uVar7 = local_208;
                  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_gestureRecognizers_026ca650)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  local_560 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  if (local_560 != 0) {
                    lVar8 = *local_2b0;
                    local_568 = 0;
                    do {
                      do {
                        if (*local_2b0 - lVar8 != 0) {
                          _objc_enumerationMutation(*local_2b0 - lVar8,uVar7);
                        }
                        uVar9 = *(ulong *)(local_2b8 + local_568 * 8);
                        puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
                        local_280 = uVar9;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,
                                   PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
                        if ((uVar9 & 1) != 0) {
                          local_271 = 1;
                          local_1ec = 8;
                          goto LAB_0084aa70;
                        }
                        local_568 = local_568 + 1;
                      } while (local_568 < local_560);
                      local_560 = uVar7;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                                 auStack_128,0x10);
                      local_568 = 0;
                    } while (local_560 != 0);
                  }
                  local_1ec = 0;
LAB_0084aa70:
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  if ((local_271 & 1) == 0) {
                    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
                    _objc_alloc();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_initWithTarget_action__026ca718,local_208,
                               PTR_s_handleLongPress__026a48f8);
                    local_2c8 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (DAT_02323d00,puVar3,PTR_s_setMinimumPressDuration__026ca9c8);
                    param_1 = 15.0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2c8,PTR_s_setAllowableMovement__0269e520);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_208,PTR_s_addGestureRecognizer__026ca4a8,local_2c8);
                    _objc_storeStrong(&local_2c8,0);
                  }
                  if ((local_1c1 & 1) == 0) {
                    FUN_0084f998(local_208);
                    local_1ec = 7;
                  }
                  else {
                    puVar3 = local_1c0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_profileHideEnabled_0269e140);
                    uVar2 = (uint)puVar3;
                    local_2c9 = SUB81(puVar3,0);
                    if (((ulong)puVar3 & 1) == 0) {
                      if ((DAT_028cd288 == 1 || DAT_028cd288 == 2) &&
                         (FUN_0085361c(), (uVar2 & 1) != 0)) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_frame_026ca640);
                        _CGRectGetHeight(param_1,param_2);
                        dVar10 = param_1;
                        FUN_0084fc74(local_208);
                        param_2 = 1.0;
                        if (1.0 < dVar10) {
                          FUN_00854074(param_1,dVar10,local_1b0,local_208,1);
                          dVar10 = ABS(dVar10 - param_1);
                          param_2 = 0.5;
                          if (0.5 < dVar10) {
                            FUN_0084fc74(local_208);
                          }
                        }
                      }
                      else if ((DAT_028cd2a8 == 1) && (FUN_0085361c(0), (uVar2 & 1) != 0)) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_frame_026ca640);
                        _CGRectGetHeight(param_1,param_2);
                        dVar11 = param_1;
                        FUN_0084fc74(local_208);
                        dVar10 = dVar11;
                        param_2 = param_1;
                        if (param_1 < dVar11) {
                          FUN_00854074(local_1b0,local_208,0);
                          FUN_0084fc74(local_208);
                          dVar10 = param_1;
                          param_2 = dVar11;
                        }
                      }
                      else {
                        FUN_0084fc74(local_208);
                        dVar10 = param_1;
                      }
                      puVar3 = local_1c0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c0,PTR_s_profileCornerRadiusEnabled_026a8e50);
                      if (((ulong)puVar3 & 1) == 0) {
                        FUN_0084f998(local_208);
                        param_1 = dVar10;
                      }
                      else {
                        FUN_0085517c(local_208,1);
                        param_1 = dVar10;
                      }
                      local_1ec = 0;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_frame_026ca640);
                      local_2f8 = param_1;
                      local_2f0 = param_2;
                      local_2e8 = param_3;
                      local_2e0 = param_4;
                      _CGRectGetHeight(param_1,param_2);
                      local_2d8 = param_1;
                      FUN_0084fc74(local_208);
                      local_301 = DAT_028cd288 == 1 || DAT_028cd288 == 2;
                      uVar2 = 1;
                      local_5f0 = 1;
                      local_300 = param_1;
                      if ((bool)local_301) {
                        FUN_0085361c();
                        local_5f0 = 1;
                        if ((uVar2 & 1) != 0) {
                          uVar7 = local_208;
                          FUN_0085362c();
                          local_5f0 = (uint)uVar7;
                        }
                      }
                      local_302 = (byte)local_5f0 & 1;
                      if ((local_5f0 & 1) != 0) {
                        _memset(auStack_350,0,0x40);
                        uVar7 = local_208;
                        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_subviews_026cab40);
                        _objc_retainAutoreleasedReturnValue();
                        local_618 = uVar7;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (local_618 != 0) {
                          lVar8 = *local_340;
                          local_620 = 0;
                          do {
                            do {
                              if (*local_340 - lVar8 != 0) {
                                _objc_enumerationMutation(*local_340 - lVar8,uVar7);
                              }
                              uVar9 = *(ulong *)(local_348 + local_620 * 8);
                              local_310 = uVar9;
                              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_tag_026cab98);
                              if (uVar9 == 0x24f6dc) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_310,PTR_s_setHidden__026ca970,0);
                              }
                              else if ((local_310 == local_268) || (local_310 == local_270)) {
                                FUN_00853910(local_310,1);
                              }
                              else {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_310,PTR_s_setHidden__026ca970,1);
                              }
                              local_620 = local_620 + 1;
                            } while (local_620 < local_618);
                            local_618 = uVar7;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                       auStack_350,auStack_1a8,0x10);
                            local_620 = 0;
                          } while (local_618 != 0);
                        }
                        (*(code *)PTR__objc_release_02578630)(uVar7);
                        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_208,PTR_s_setBackgroundColor__026ca888);
                        (*(code *)PTR__objc_release_02578630)(puVar3);
                        FUN_00853ba8(local_208);
                      }
                      if (((local_301 & 1) == 0) || (local_300 <= 1.0)) {
                        if (local_300 <= local_2d8) {
                          local_668 = local_2d8;
                        }
                        else {
                          local_668 = local_300;
                        }
                        local_660 = local_668;
                      }
                      else {
                        local_660 = local_300;
                      }
                      FUN_00854074(local_2d8,local_660,local_1b0,local_208,local_301 & 1);
                      param_1 = ABS(local_660 - local_2d8);
                      param_2 = 0.5;
                      if (0.5 < param_1) {
                        FUN_0084fc74(local_208);
                      }
                      puVar3 = local_1c0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c0,PTR_s_profileCornerRadiusEnabled_026a8e50);
                      if (((ulong)puVar3 & 1) == 0) {
                        FUN_0084f998(local_208);
                      }
                      else {
                        FUN_0085517c(local_208,0);
                      }
                      local_1ec = 7;
                    }
                  }
                  _objc_storeStrong(&local_270);
                  _objc_storeStrong(&local_268,0);
                  _objc_storeStrong(&local_260,0);
                  _objc_storeStrong(&local_258,0);
                }
              }
              local_478 = local_478 + 1;
            } while (local_478 < local_470);
            local_470 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8,
                       0x10);
            local_478 = 0;
          } while (local_470 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      _objc_storeStrong(&local_1f8,0);
      if (((local_1d6 & 1) == 0) || ((local_1c1 & 1) == 0)) {
        FUN_0085603c(local_1b0);
        local_1ec = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_profileOffsetY_026a8e58);
        FUN_008561c4(param_1,local_1b0);
        local_1ec = 0;
      }
      goto LAB_0084b5d0;
    }
  }
  local_1ec = 1;
LAB_0084b5d0:
  _objc_storeStrong(&local_1e8);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

