// autoDetectHollowAreasAndApplyMissingSetsWithFeedback: @ 01d55ef4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

bool WCRefineScreenshotFrameEditorViewController::
     autoDetectHollowAreasAndApplyMissingSetsWithFeedback_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  undefined8 in_d1;
  double in_d2;
  double dVar9;
  undefined8 in_d3;
  uint local_2b8;
  ulong local_260;
  ulong local_258;
  undefined *local_1f0;
  undefined *local_1e8;
  byte local_1d9;
  ID local_1d8;
  undefined *local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ID local_168;
  double local_160;
  double local_140;
  double local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 uStack_108;
  long local_f8;
  ID local_f0;
  undefined4 local_e4;
  ID local_e0;
  byte local_d1;
  ID local_d0;
  byte local_c3;
  byte local_c2;
  byte local_c1;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c1 = (byte)param_3;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_b8;
  local_c2 = IVar2 != 4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isDoubleMode_026c4670);
  local_d1 = 0;
  bVar1 = false;
  if ((IVar3 & 1) != 0) {
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar2 != 4;
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  local_c3 = bVar1;
  if (((local_c2 & 1) != 0) || (bVar1)) {
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_detectHollowAreaCandidates_026c4930);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
    IVar2 = local_b8;
    if (IVar3 == 0) {
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_showAlert_message__026c4820,&cf__g_R0RBzz_SW,&cf_lg_b0Rf>fvf_);
      }
      local_a9 = 0;
      local_e4 = 1;
    }
    else {
      local_f0 = 0;
      local_f8 = 0;
      uStack_118 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
      local_120 = *(double *)PTR__CGRectNull_025782e8;
      uStack_108 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
      dVar8 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
      local_110 = dVar8;
      if ((local_c2 & 1) == 0) {
        IVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_points_026c4688);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_rectForPointValues__026c4938);
        dVar9 = in_d2;
        local_160 = dVar8;
        local_120 = dVar8;
        uStack_118 = in_d1;
        local_110 = in_d2;
        uStack_108 = in_d3;
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      else {
        IVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_f0;
        local_f0 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rect);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar9 = in_d2;
        local_140 = dVar8;
        local_120 = dVar8;
        uStack_118 = in_d1;
        local_110 = in_d2;
        uStack_108 = in_d3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      if ((local_c3 & 1) != 0) {
        _memset(auStack_1a8,0,0x40);
        IVar2 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_258 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        if (local_258 != 0) {
          lVar6 = *local_198;
          local_260 = 0;
          do {
            do {
              if (*local_198 - lVar6 != 0) {
                _objc_enumerationMutation(*local_198 - lVar6,IVar2);
              }
              uVar7 = *(ID *)(local_1a0 + local_260 * 8);
              local_168 = uVar7;
              if (uVar7 != local_f0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_rect);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1c8 = in_d2;
                local_1c0 = in_d1;
                local_1b8 = dVar9;
                local_1b0 = in_d3;
                (*(code *)PTR__objc_release_02578630)();
                _CGRectIsNull(local_120,uStack_118,local_110,uStack_108);
                if ((uVar7 & 1) == 0) {
                  in_d2 = local_120;
                  dVar9 = local_110;
                  in_d3 = uStack_108;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,uStack_118,local_110,uStack_108,local_1c8,local_1c0,local_1b8
                             ,local_1b0,local_b8,PTR_s_overlapRatioBetweenRect_rect__026c4940);
                  in_d1 = 0x3fd0000000000000;
                  if (0.25 <= in_d2) goto LAB_01d56484;
                }
                _objc_storeStrong(&local_f8,local_168);
                local_e4 = 2;
                goto LAB_01d564ec;
              }
LAB_01d56484:
              local_260 = local_260 + 1;
            } while (local_260 < local_258);
            local_258 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                       0x10);
            local_260 = 0;
          } while (local_258 != 0);
        }
        local_e4 = 0;
LAB_01d564ec:
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_b8;
      local_1d0 = puVar4;
      if (local_f0 != 0) {
        IVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_points);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_replacePointSetWithDetectedPoint_026c4948,IVar3,0);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,&::cf___);
      }
      IVar2 = local_b8;
      if (local_f8 != 0) {
        lVar6 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_points);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_replacePointSetWithDetectedPoint_026c4948,lVar6,1);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,&cf___NV);
      }
      puVar4 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
      if (puVar4 == (undefined *)0x0) {
        if ((local_c1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_showAlert_message__026c4820,&cf__g_R0RS_u_SW,
                     &cf___b0Ru<O:SWFOel9SMS_MR:_1YvpMO0KbRpbHQn_pMOTQ0);
        }
        local_a9 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_setSelectedPointIndex__026c4808,0xffffffffffffffff);
        IVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_points_026c4688);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1d9 = 0;
        bVar1 = false;
        if (IVar3 == 4) {
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isDoubleMode_026c4670);
          bVar1 = true;
          if ((IVar3 & 1) != 0) {
            IVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_points2_026c4690);
            _objc_retainAutoreleasedReturnValue();
            local_1d9 = 1;
            local_1d8 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = IVar3 == 4;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setIsAligned__026c4828,bVar1);
        if ((local_1d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1d8);
        }
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_updatePointCount_026c47c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_updateAlignStatus_026c4830);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_updateCoordinateFields_026c47d0);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_redrawCanvas_026c47d8);
        IVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_alignStatusLabel_026c4700);
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = 0;
        if (IVar2 != 0) {
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isAligned_026c4838);
          local_2b8 = (uint)IVar3;
        }
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((local_2b8 & 1) != 0) {
          IVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_alignStatusLabel_026c4700);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar2);
          puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323d40,DAT_02323db8,DAT_02339af0,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_alignStatusLabel_026c4700);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar2);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        if ((local_c1 & 1) != 0) {
          puVar4 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_componentsJoinedByString__0269d140,&::cf_0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1e8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__R_R_)
          ;
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_b8;
          local_1f0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isDoubleMode_026c4670);
          bVar1 = false;
          if ((IVar2 & 1) != 0) {
            IVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_points2_026c4690);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = IVar3 != 4;
            (*(code *)PTR__objc_release_02578630)(IVar2);
          }
          if (bVar1) {
            puVar5 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f0,PTR_s_stringByAppendingString__0269d398,&::cf_newline_s_);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_1f0;
            local_1f0 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_showAlert_message__026c4820,&cf_R_R_b,local_1f0);
          _objc_storeStrong(&local_1f0);
          _objc_storeStrong(&local_1e8,0);
        }
        local_a9 = 1;
      }
      local_e4 = 1;
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  else {
    local_a9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

