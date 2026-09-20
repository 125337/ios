// FUN_007b20d8 @ 007b20d8

void FUN_007b20d8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double local_570;
  undefined1 *local_568;
  undefined1 *local_528;
  double local_4d0;
  uint local_444;
  uint local_42c;
  double local_418;
  long local_3b8;
  long local_340;
  bool local_1d9;
  undefined1 *local_1d8;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  byte local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2;
  undefined1 local_1b1;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  byte local_142;
  byte local_141;
  undefined *local_140;
  byte local_131;
  undefined1 *local_130;
  long local_128;
  byte local_119;
  undefined *local_118;
  byte local_10a;
  byte local_109;
  undefined1 *local_108;
  double local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  byte local_d9;
  long local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  long local_b0;
  byte local_a1;
  long local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 *local_68;
  long local_60;
  long local_58;
  undefined1 *local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  long local_28;
  long *plVar2;
  
  plVar2 = &local_38;
  local_38 = 0;
  local_30 = param_6;
  local_28 = param_5;
  _objc_storeStrong(plVar2,param_7);
  uVar1 = (uint)plVar2;
  FUN_007ac894();
  if ((uVar1 & 1) == 0) {
    local_48 = 1;
  }
  else {
    puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_28;
    local_50 = puVar3;
    _objc_getAssociatedObject(local_28,DAT_026f4658);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_28;
    local_58 = lVar4;
    FUN_007ae408();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_50;
    local_60 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar4 == 1) {
      FUN_007b7ab4(1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_beginInteractiveTransition_026a8340);
      lVar4 = local_38;
      lVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_locationInView__026ca798);
      local_78 = param_1;
      local_70 = param_2;
      (*(code *)PTR__objc_release_02578630)(lVar5);
      lVar4 = local_38;
      lVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_translationInView__026cabb0);
      local_88 = param_2;
      local_80 = param_1;
      (*(code *)PTR__objc_release_02578630)(lVar5);
      lVar4 = local_28;
      uVar13 = DAT_026f46b0;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78 - local_88,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar4,uVar13,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_48 = 1;
    }
    else {
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
      if ((lVar4 == 4) ||
         (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
         lVar4 == 5)) {
        FUN_007b7ab4(0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setSelectedTabId_animated__026a8348,local_68,1);
        local_48 = 1;
      }
      else {
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        if ((lVar4 == 2) ||
           (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
           lVar4 == 3)) {
          lVar4 = local_38;
          lVar5 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 0;
          local_340 = lVar5;
          if (lVar5 == 0) {
            local_340 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = local_340;
          }
          local_a1 = lVar5 == 0;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_translationInView__026cabb0,local_340);
          local_98 = param_1;
          local_90 = param_2;
          if ((local_a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          (*(code *)PTR__objc_release_02578630)(lVar5);
          lVar5 = local_28;
          _objc_getAssociatedObject(local_28,DAT_026f46b0);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = local_38;
          dVar10 = ABS(local_98);
          dVar12 = 1.0;
          dVar11 = dVar12;
          local_b0 = lVar5;
          if ((dVar10 < 1.0) && (lVar5 != 0)) {
            lVar5 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_locationInView__026ca798);
            dVar11 = dVar10;
            local_c0 = dVar10;
            local_b8 = dVar12;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_doubleValue_026ca608);
            dVar10 = dVar10 - dVar11;
            local_98 = dVar10;
            (*(code *)PTR__objc_release_02578630)(lVar5);
          }
          lVar4 = local_38;
          lVar5 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 0;
          local_3b8 = lVar5;
          if (lVar5 == 0) {
            local_3b8 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            local_d8 = local_3b8;
          }
          local_d9 = lVar5 == 0;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_velocityInView__026cabd0,local_3b8);
          local_d0 = dVar10;
          local_c8 = dVar11;
          if ((local_d9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_d8);
          }
          (*(code *)PTR__objc_release_02578630)(lVar5);
          puVar6 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_visibleTabs_026a8350);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = (undefined1 *)0x7fffffffffffffff;
          local_e8 = puVar6;
          for (local_f8 = (undefined1 *)0x0; puVar6 = local_f8, puVar7 = local_e8,
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0), puVar6 < puVar7;
              local_f8 = local_f8 + 1) {
            puVar6 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_f8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if (((ulong)puVar8 & 1) != 0) {
              local_f0 = local_f8;
              break;
            }
          }
          if (local_f0 == (undefined1 *)0x7fffffffffffffff) {
            FUN_007b7ab4(0);
            local_48 = 1;
          }
          else {
            uVar13 = 0x3ff0000000000000;
            if (ABS(local_98) < 1.0) {
              local_418 = local_d0;
            }
            else {
              local_418 = local_98;
            }
            local_100 = local_418;
            puVar6 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
            local_108 = puVar6;
            FUN_007ae358();
            local_109 = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
            local_119 = 0;
            local_42c = 1;
            if ((bool)local_109) {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_119 = 1;
              local_118 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_42c = (uint)puVar3;
            }
            if ((local_119 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_118);
            }
            local_10a = (byte)local_42c & 1;
            iVar9 = -1;
            if (local_100 < 0.0) {
              iVar9 = 1;
            }
            local_128 = (long)iVar9;
            if ((local_42c & 1) == 0) {
              local_128 = -local_128;
            }
            local_130 = local_f0 + local_128;
            local_141 = 0;
            local_444 = 0;
            dVar11 = local_100;
            if ((local_109 & 1) != 0) {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_141 = 1;
              local_140 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_444 = (uint)puVar3;
            }
            if ((local_141 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_140);
            }
            local_131 = (byte)local_444 & 1;
            if ((((local_444 & 1) != 0) && (1 < (long)local_108)) &&
               (((long)local_130 < 0 || ((long)local_108 <= (long)local_130)))) {
              lVar4 = 0;
              if (local_108 != (undefined1 *)0x0) {
                lVar4 = (long)(local_130 + (long)local_108) / (long)local_108;
              }
              local_130 = local_130 + (long)local_108 + -(lVar4 * (long)local_108);
            }
            local_142 = false;
            if ((-1 < (long)local_130) && (local_142 = false, (long)local_130 < (long)local_108)) {
              local_142 = local_130 != local_f0;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
            local_170 = dVar11;
            local_168 = uVar13;
            local_160 = param_3;
            local_158 = param_4;
            _CGRectGetWidth(dVar11,uVar13);
            uVar13 = 0x3ff0000000000000;
            local_150 = dVar11;
            if (dVar11 < 1.0) {
              lVar4 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_190 = dVar11;
              local_188 = uVar13;
              local_180 = param_3;
              local_178 = param_4;
              _CGRectGetWidth(dVar11,uVar13);
              local_150 = dVar11;
              (*(code *)PTR__objc_release_02578630)(lVar4);
            }
            lVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
            if (lVar4 == 2) {
              FUN_007b7ab4(1);
              lVar4 = local_58;
              if ((local_142 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (0,local_58,PTR_s_previewTabId_progress__026a8368,local_68);
              }
              else {
                local_1a0 = 0x4059000000000000;
                local_1a8 = local_150 * 0.35;
                local_4d0 = local_1a8;
                if (local_1a8 <= 100.0) {
                  local_4d0 = 100.0;
                }
                local_1b0 = local_4d0;
                local_198 = local_4d0;
                puVar6 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_130);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (ABS(local_98) / local_198,lVar4,PTR_s_previewTabId_progress__026a8368);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(puVar6);
              }
              local_48 = 1;
            }
            else {
              local_1b1 = 0.0 < local_d0 * local_98;
              local_1b2 = 50.0 < ABS(local_98);
              local_1b3 = false;
              if ((12.0 < ABS(local_98)) && (local_1b3 = false, 450.0 < ABS(local_d0))) {
                local_1b3 = local_1b1;
              }
              dVar11 = ABS(local_d0);
              uVar13 = 0x4089000000000000;
              local_1b4 = false;
              if (800.0 < dVar11) {
                dVar11 = ABS(local_98);
                uVar13 = 0x3ff0000000000000;
                local_1b4 = dVar11 < 1.0 || (bool)local_1b1;
              }
              local_1b5 = false;
              if ((((local_142 & 1) != 0) && (local_1b5 = true, !(bool)local_1b2)) &&
                 (local_1b5 = true, (bool)local_1b3 == false)) {
                local_1b5 = local_1b4;
              }
              local_1d9 = (local_142 & 1) == 0;
              if (local_1d9) {
                local_528 = local_68;
              }
              else {
                local_1c8 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_130);
                _objc_retainAutoreleasedReturnValue();
                local_528 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_1d8 = local_528;
              }
              local_1d9 = !local_1d9;
              (*(code *)PTR__objc_retain_02578638)();
              local_1c0 = local_528;
              if (local_1d9) {
                (*(code *)PTR__objc_release_02578630)(local_1d8);
                (*(code *)PTR__objc_release_02578630)(local_1c8);
              }
              if ((local_1b5 & 1) == 0) {
                FUN_007b7ab4(0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (0,local_58,PTR_s_setSelectedTabId_animated_veloci_026a8288,local_68,1);
                local_48 = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
                _CGRectGetWidth(dVar11,uVar13,param_3,param_4);
                local_568 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
                if (local_568 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                  local_568 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                }
                dVar10 = (double)NEON_ucvtf(local_568);
                local_570 = local_150 * 0.35;
                if (local_570 <= 100.0) {
                  local_570 = 100.0;
                }
                dVar12 = -1.0;
                if ((local_10a & 1) == 0) {
                  dVar12 = 1.0;
                }
                FUN_007b6b44((dVar12 * local_d0 * (dVar11 / dVar10)) / local_570,local_1c0,1);
                local_48 = 1;
              }
              _objc_storeStrong(&local_1c0,0);
            }
          }
          _objc_storeStrong(&local_e8);
          _objc_storeStrong(&local_b0,0);
        }
        else {
          local_48 = 1;
        }
      }
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

