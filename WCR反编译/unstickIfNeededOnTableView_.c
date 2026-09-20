// unstickIfNeededOnTableView: @ 00fcd6b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineHomeHeaderUnstick::unstickIfNeededOnTableView_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  ID IVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  double in_d0;
  double in_d1;
  undefined8 in_d2;
  double in_d3;
  double dVar11;
  ulong local_388;
  ulong local_380;
  ulong local_350;
  ulong local_328;
  ulong local_320;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  code *local_2b0;
  cfstringStruct *local_2a8;
  double local_2a0;
  double dStack_298;
  undefined8 local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  double dStack_248;
  undefined1 local_239;
  double dStack_230;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  double dStack_200;
  ulong local_1f8;
  byte local_1e9;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  ulong local_188;
  double local_170;
  char *local_150;
  undefined4 local_144;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  uVar3 = local_140;
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_144 = 1;
  }
  else {
    uVar3 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_style_026a2028);
    if (uVar3 == 0) {
      pcVar4 = "MainFrameTableView";
      _objc_getClass();
      local_150 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         (uVar3 = local_140,
         (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isKindOfClass__0269cd68,pcVar4),
         (uVar3 & 1) != 0)) {
        IVar5 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHoldingAtViewportTop_026a89e8);
        if ((IVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_adjustedContentInset_0269dcd0);
          local_170 = in_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_contentOffset_0269dd18);
          in_d0 = in_d1 + local_170;
          in_d1 = 10.0;
          if (in_d0 < 10.0) {
            local_144 = 1;
            goto LAB_00fcdf84;
          }
        }
        uVar3 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_numberOfSections_026a2068);
        local_188 = uVar3;
        if ((long)uVar3 < 1) {
          local_144 = 1;
        }
        else {
          _memset(auStack_1d0,0,0x40);
          uVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_320 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_320 != 0) {
            lVar8 = *local_1c0;
            local_328 = 0;
            do {
              do {
                if (*local_1c0 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_1c0 - lVar8,uVar3);
                }
                local_190 = *(ulong *)(local_1c8 + local_328 * 8);
                IVar5 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_isHomeCardHeaderContainer__026ad130,local_190);
                if ((IVar5 & 1) != 0) {
                  local_350 = local_190;
                  _objc_getAssociatedObject(local_190,&DAT_028e3030);
                  _objc_retainAutoreleasedReturnValue();
                  local_1e9 = 0;
                  bVar1 = local_350 == 0;
                  local_1d8 = local_350;
                  if (bVar1) {
                    local_350 = local_190;
                    _objc_getAssociatedObject(local_190,&DAT_028e3031);
                    _objc_retainAutoreleasedReturnValue();
                    local_1e8 = local_350;
                  }
                  local_1e9 = bVar1;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1e0 = local_350;
                  if ((local_1e9 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_1e8);
                  }
                  local_1f8 = 0;
                  if (local_1e0 == 0) {
                    local_1f8 = 0;
LAB_00fcda9c:
                    if (local_1d8 == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_rectForHeaderInSection__026ad140,local_1f8);
                      local_218 = in_d0;
                      dStack_210 = in_d1;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_rectForFooterInSection__026ad138,local_1f8);
                      local_218 = in_d0;
                      dStack_210 = in_d1;
                    }
                    in_d0 = in_d3;
                    in_d1 = 0.5;
                    if (0.5 <= in_d0) {
                      dVar11 = in_d0;
                      local_208 = in_d2;
                      dStack_200 = in_d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_frame_026ca640);
                      local_239 = 0.5 < ABS(in_d1 - dStack_210) || 0.5 < ABS(in_d0 - local_218);
                      dStack_230 = in_d1;
                      if ((bool)local_239) {
                        dStack_298 = dStack_210;
                        local_2a0 = local_218;
                        dStack_248 = dVar11;
                        if (0.5 < ABS(dVar11 - dStack_200)) {
                          dStack_248 = dStack_200;
                        }
                        dStack_268 = dStack_248;
                        local_270 = local_208;
                        dStack_288 = dStack_248;
                        local_290 = local_208;
                        local_280 = local_2a0;
                        dStack_278 = dStack_298;
                        local_260 = local_2a0;
                        dStack_258 = dStack_298;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_218,dStack_210,local_208,dStack_248,local_190,
                                   PTR_s_setFrame__026ca960);
                        uVar6 = local_190;
                        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_tag_026cab98);
                        if ((((uVar6 == 0x7f149) &&
                             (uVar6 = local_140,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_140,PTR_s_isDragging_0269ddf8), (uVar6 & 1) == 0)) &&
                            (uVar6 = local_140,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_140,PTR_s_isDecelerating_0269e888), (uVar6 & 1) == 0))
                           && (uVar6 = local_140,
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_140,PTR_s_isTracking_0269ddf0), (uVar6 & 1) == 0)) {
                          pcVar7 = &cf_resyncHostedWebGeometry;
                          _NSSelectorFromString();
                          local_2a8 = pcVar7;
                          _memset(auStack_2f0,0,0x40);
                          uVar6 = local_190;
                          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_subviews_026cab40);
                          _objc_retainAutoreleasedReturnValue();
                          local_380 = uVar6;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          if (local_380 != 0) {
                            lVar9 = *local_2e0;
                            local_388 = 0;
                            do {
                              do {
                                if (*local_2e0 - lVar9 != 0) {
                                  _objc_enumerationMutation(*local_2e0 - lVar9,uVar6);
                                }
                                pcVar10 = *(code **)(local_2e8 + local_388 * 8);
                                local_2b0 = pcVar10;
                                (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_tag_026cab98);
                                if ((pcVar10 == FUN_0007f148) &&
                                   (pcVar10 = local_2b0,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_2b0,PTR_s_respondsToSelector__026ca818,local_2a8
                                             ), ((ulong)pcVar10 & 1) != 0)) {
                                  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,local_2a8);
                                  local_144 = 4;
                                  goto LAB_00fcde88;
                                }
                                local_388 = local_388 + 1;
                              } while (local_388 < local_380);
                              local_380 = uVar6;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                         auStack_2f0,auStack_128,0x10);
                              local_388 = 0;
                            } while (local_380 != 0);
                          }
                          local_144 = 0;
LAB_00fcde88:
                          (*(code *)PTR__objc_release_02578630)(uVar6);
                        }
                      }
                      in_d0 = local_218;
                      in_d1 = dStack_210;
                      FUN_00fcdfc0(local_140,local_190,local_1f8);
                      local_144 = 0;
                      in_d2 = local_208;
                      in_d3 = dStack_200;
                    }
                    else {
                      local_144 = 3;
                      in_d3 = in_d0;
                    }
                  }
                  else {
                    uVar6 = local_1e0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_integerValue_026ca750);
                    local_1f8 = uVar6;
                    if ((-1 < (long)uVar6) && ((long)uVar6 < (long)local_188)) goto LAB_00fcda9c;
                    local_144 = 3;
                  }
                  _objc_storeStrong(&local_1e0);
                  _objc_storeStrong(&local_1d8,0);
                }
                local_328 = local_328 + 1;
              } while (local_328 < local_320);
              local_320 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                         auStack_a8,0x10);
              local_328 = 0;
            } while (local_320 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_144 = 0;
        }
      }
      else {
        local_144 = 1;
      }
    }
    else {
      local_144 = 1;
    }
  }
LAB_00fcdf84:
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

