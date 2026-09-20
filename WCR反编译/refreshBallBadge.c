// refreshBallBadge @ 015e87a4

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::refreshBallBadge(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double in_d2;
  double dVar10;
  double dVar11;
  double in_d3;
  double dVar12;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_240;
  uint local_20c;
  ID local_f8;
  undefined *local_50;
  uint local_48;
  byte local_42;
  byte local_41;
  uint local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballOfficialBadge_026b1328);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBallOfficialBadge__026b1330,0);
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatBallShowBadge_026b1338);
  if (((ulong)puVar5 & 1) == 0) {
    local_3c = 1;
  }
  else {
    local_40 = 0;
    local_41 = 0;
    puVar3 = PTR_WCRQuickChatRuntime_026ce698;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_42 = 0;
    if (local_40 == 0) {
      local_42 = local_41;
    }
    local_42 = local_42 & 1;
    if (local_40 == 0) {
      local_20c = (uint)((local_41 & 1) != 0);
    }
    else {
      local_20c = local_40;
    }
    local_48 = local_20c;
    if (local_20c == 0) {
      local_3c = 1;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_20c
                );
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_42 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_officialUnreadBadgeViewWithCount_026b10e0,puVar6);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (local_50 == (undefined *)0x0) {
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setBallOfficialBadge__026b1330,local_50);
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        dVar8 = 1.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatBallSize_026b1310);
        local_240 = dVar8;
        if (dVar8 <= 1.0) {
          local_240 = 1.0;
        }
        local_278 = local_240;
        FUN_015e8030();
        dVar10 = in_d2;
        dVar9 = in_d3;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
        dVar12 = dVar9;
        if ((dVar10 < 1.0) || (dVar9 < 1.0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
          dVar9 = dVar10;
          dVar10 = dVar9;
        }
        puVar5 = local_38;
        dVar11 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatBallBadgeSide_026b1348);
        bVar2 = false;
        bVar1 = true;
        if ((puVar5 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) &&
           (bVar1 = false, puVar5 == (undefined1 *)0x0)) {
          local_f8 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          bVar1 = dVar11 * 0.5 < dVar9;
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_f8);
        }
        if (bVar1) {
          dVar9 = local_278;
          _CGRectGetMinX(local_278,dVar8,in_d2,in_d3);
          local_260 = (dVar9 - dVar10) + dVar12 * 0.35;
          if (local_260 < 0.0) {
            local_260 = 0.0;
          }
          local_268 = local_260;
        }
        else {
          dVar9 = local_278;
          _CGRectGetMaxX(local_278,dVar8,in_d2,in_d3);
          dVar9 = dVar9 - dVar12 * 0.35;
          local_270 = local_240 - dVar10;
          if (dVar9 < local_270) {
            local_270 = dVar9;
          }
          local_268 = local_270;
        }
        _CGRectGetMinY(local_278,dVar8,in_d2,in_d3);
        local_278 = local_278 - dVar12 * 0.3;
        if (local_278 <= 0.0) {
          local_278 = 0.0;
        }
        if (local_268 <= 0.0) {
          local_280 = 0.0;
        }
        else {
          local_280 = local_268;
        }
        FUN_015dff84();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_280,local_278,dVar10,dVar12,local_50,PTR_s_setFrame__026ca960);
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        local_3c = 0;
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

