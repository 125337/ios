// wcrGrouping_handleHomeItemLongPress: @ 003ac0bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_handleHomeItemLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  undefined *puVar11;
  cfstringStruct *local_3b8;
  cfstringStruct *local_348;
  cfstringStruct *local_308;
  cfstringStruct *local_2f8;
  cfstringStruct *local_298;
  cfstringStruct *local_258;
  cfstringStruct *local_210;
  uint local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8 [2];
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  byte local_191;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  byte local_179;
  cfstringStruct *local_178;
  byte local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [15];
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined1 local_99;
  cfstringStruct *local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  ulong local_68;
  cfstringStruct *local_60;
  long local_58;
  ulong local_50;
  int local_48;
  byte local_41;
  undefined *local_40;
  ulong local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  local_41 = 0;
  local_1e0 = 1;
  if (uVar5 == 1) {
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1e0 = (uint)puVar6 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_1e0 & 1) != 0) {
    local_48 = 1;
    goto LAB_003ad64c;
  }
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = 0;
  local_60 = (cfstringStruct *)0x0;
  local_50 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar5;
  while (uVar5 = local_68, local_68 != 0) {
    if (local_58 == 0) {
      puVar6 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      if ((uVar5 & 1) != 0) {
        _objc_storeStrong(&local_58,local_68);
      }
    }
    uVar5 = local_68;
    puVar6 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((uVar5 & 1) != 0) {
      _objc_storeStrong(&local_60,local_68);
      break;
    }
    uVar7 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_68;
    local_68 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  local_48 = 2;
  _objc_storeStrong(&local_68,0);
  local_79 = 0;
  if ((local_58 == 0) || (local_60 == (cfstringStruct *)0x0)) {
    local_210 = (cfstringStruct *)0x0;
  }
  else {
    local_210 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_indexPathForCell__0269e208,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_210;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_210;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar9 = local_70;
  if (local_70 == (cfstringStruct *)0x0) {
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = pcVar9;
    local_90 = 0;
    pcVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_active_026a2a40);
    pcVar9 = local_60;
    local_99 = 0;
    bVar4 = false;
    uVar1 = ((ulong)pcVar8 & 1) != 0;
    if ((bool)uVar1) {
      pcVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_findMainTableView_026a2848);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = pcVar9 == pcVar8;
      local_99 = uVar1;
      local_98 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      uVar1 = local_99;
    }
    local_99 = uVar1;
    if (bVar4) {
      pcVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_70;
      local_a8 = pcVar9;
      FUN_0039d120(local_70,pcVar9);
      if (((ulong)pcVar8 & 1) == 0) {
        pcVar9 = local_70;
        FUN_0039d4e0(local_70,local_a8);
        _objc_retainAutoreleasedReturnValue();
        local_150 = pcVar9;
        if (pcVar9 == (cfstringStruct *)0x0) {
          pcVar9 = local_70;
          FUN_0039d550(local_70,local_a8);
          if (((ulong)pcVar9 & 1) == 0) {
            pcVar9 = local_70;
            FUN_0039d6b4(local_70,local_a8);
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar8 = local_70;
              FUN_0039d7f0(local_70,local_a8);
              _objc_retainAutoreleasedReturnValue();
              pcVar9 = local_88;
              local_88 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar9);
            }
            local_48 = 0;
          }
          else {
            local_48 = 1;
          }
        }
        else {
          pcVar9 = local_70;
          FUN_003ad874(local_70,local_a8);
          _objc_retainAutoreleasedReturnValue();
          local_158 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          local_2f8 = pcVar9;
          if (pcVar9 == (cfstringStruct *)0x0) {
            local_2f8 = &::cf___;
          }
          _objc_storeStrong(&local_90,local_2f8);
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_username_026a2238);
          _objc_retainAutoreleasedReturnValue();
          local_169 = 0;
          local_179 = 0;
          local_308 = pcVar9;
          if (pcVar9 == (cfstringStruct *)0x0) {
            local_308 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_session_0269d000);
            _objc_retainAutoreleasedReturnValue();
            local_169 = 1;
            local_168 = local_308;
            FUN_00366324();
            _objc_retainAutoreleasedReturnValue();
            local_178 = local_308;
          }
          local_179 = pcVar9 == (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_160 = local_308;
          if ((local_179 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_178);
          }
          if ((local_169 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_168);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
          if ((pcVar9 == (cfstringStruct *)0x0) ||
             (pcVar9 = local_160, FUN_003ad8e4(), ((ulong)pcVar9 & 1) != 0)) {
            local_48 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setUsername__026a2510,local_160);
            pcVar9 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_cellData_026a27b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (pcVar9 == (cfstringStruct *)0x0) {
              puVar6 = PTR_WCRefineGroupDataProvider_026ce540;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              pcVar9 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_session_0269d000);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nativeCellDataForSession__026a2810)
              ;
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setCellData__026a2818);
              (*(code *)PTR__objc_release_02578630)(puVar11);
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            pcVar9 = local_28;
            puVar6 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar6);
            local_191 = 0;
            bVar4 = ((ulong)pcVar9 & 1) == 0;
            if (bVar4) {
              local_348 = local_28;
              FUN_003ad674();
              _objc_retainAutoreleasedReturnValue();
              local_190 = local_348;
            }
            else {
              local_348 = local_28;
            }
            local_191 = bVar4;
            (*(code *)PTR__objc_retain_02578638)();
            local_188 = local_348;
            if ((local_191 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_190);
            }
            FUN_0036d100(local_188,local_28,local_150,local_90,local_58,0);
            local_48 = 1;
            _objc_storeStrong(&local_188,0);
          }
          _objc_storeStrong(&local_160);
          _objc_storeStrong(&local_158,0);
        }
        _objc_storeStrong(&local_150,0);
      }
      else {
        pcVar9 = local_70;
        FUN_0039e3b0(local_70,local_a8);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_nativePassthrough_026a2e00);
        local_b9 = 0;
        bVar4 = false;
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          local_b8 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar4 = pcVar9 != (cfstringStruct *)0x0;
        }
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if (bVar4) {
          pcVar9 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_c8 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_username_026a2238);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 0;
          local_e9 = 0;
          local_258 = pcVar9;
          if (pcVar9 == (cfstringStruct *)0x0) {
            local_258 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_session_0269d000);
            _objc_retainAutoreleasedReturnValue();
            local_d9 = 1;
            local_d8 = local_258;
            FUN_00366324();
            _objc_retainAutoreleasedReturnValue();
            local_e8 = local_258;
          }
          local_e9 = pcVar9 == (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = local_258;
          if ((local_e9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_e8);
          }
          if ((local_d9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_d8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
          if (pcVar9 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setUsername__026a2510,local_d0);
            pcVar9 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_cellData_026a27b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (pcVar9 == (cfstringStruct *)0x0) {
              puVar6 = PTR_WCRefineGroupDataProvider_026ce540;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              pcVar9 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_session_0269d000);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_nativeCellDataForSession__026a2810)
              ;
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setCellData__026a2818);
              (*(code *)PTR__objc_release_02578630)(puVar11);
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            pcVar9 = local_28;
            puVar6 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar6);
            local_101 = 0;
            bVar4 = ((ulong)pcVar9 & 1) == 0;
            if (bVar4) {
              local_298 = local_28;
              FUN_003ad674();
              _objc_retainAutoreleasedReturnValue();
              local_100 = local_298;
            }
            else {
              local_298 = local_28;
            }
            local_101 = bVar4;
            (*(code *)PTR__objc_retain_02578638)();
            local_f8 = local_298;
            if ((local_101 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_100);
            }
            _objc_initWeak(auStack_110,local_28);
            pcVar3 = local_28;
            pcVar8 = local_c8;
            pcVar9 = local_f8;
            pcVar10 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupId_0269ea88);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = local_58;
            local_148 = PTR___NSConcreteStackBlock_02578660;
            local_140 = 0xc2000000;
            local_13c = 0;
            local_138 = FUN_003ad81c;
            local_130 = &DAT_0257be28;
            _objc_copyWeak(auStack_128,auStack_110);
            FUN_0036d100(pcVar9,pcVar3,pcVar8,pcVar10,lVar2,0,&local_148);
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            _objc_destroyWeak(auStack_128);
            _objc_destroyWeak(auStack_110);
            _objc_storeStrong(&local_f8,0);
          }
          _objc_storeStrong(&local_d0);
          _objc_storeStrong(&local_c8,0);
        }
        local_48 = 1;
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8,0);
      if (local_48 == 0) goto LAB_003ad15c;
    }
    else {
LAB_003ad15c:
      if (local_88 == (cfstringStruct *)0x0) {
        local_48 = 1;
      }
      else {
        local_1a0 = (cfstringStruct *)0x0;
        pcVar9 = &cf_wcrGrouping_logicGetSessionAtIndexPath_;
        _NSSelectorFromString();
        pcVar8 = local_28;
        local_1a8 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar9);
        if (((ulong)pcVar8 & 1) != 0) {
          pcVar8 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,local_1a8,local_88);
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = local_1a0;
          local_1a0 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar9);
        }
        puVar6 = PTR_WCRefineGroupDataProvider_026ce540;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_1b8[0] = puVar11;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        if (local_1b8[0] == (undefined *)0x0) {
          local_48 = 1;
        }
        else {
          puVar6 = PTR_WCRefineGroupDataProvider_026ce540;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = puVar11;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
          if ((puVar6 == (undefined *)0x0) ||
             (puVar6 = local_1c0, FUN_003ad8e4(), ((ulong)puVar6 & 1) != 0)) {
            local_48 = 1;
          }
          else {
            puVar6 = PTR_WCRGroupingItem_026ce5c8;
            _objc_alloc_init();
            local_1c8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setSession__0269d2e0,local_1b8[0]);
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setUsername__026a2510,local_1c0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_setOriginalIndexPath__026a2c68,local_88);
            puVar6 = PTR_WCRefineGroupDataProvider_026ce540;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setCellData__026a2818);
            (*(code *)PTR__objc_release_02578630)(puVar11);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            pcVar9 = local_28;
            puVar6 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar6);
            bVar4 = ((ulong)pcVar9 & 1) == 0;
            if (bVar4) {
              local_3b8 = local_28;
              FUN_003ad674();
              _objc_retainAutoreleasedReturnValue();
              local_1d8 = local_3b8;
            }
            else {
              local_3b8 = local_28;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1d0 = local_3b8;
            if (bVar4) {
              (*(code *)PTR__objc_release_02578630)(local_1d8);
            }
            FUN_0036d100(local_1d0,local_28,local_1c8,local_90,local_58,0);
            _objc_storeStrong(&local_1d0,0);
            _objc_storeStrong(&local_1c8,0);
            local_48 = 0;
          }
          _objc_storeStrong(&local_1c0,0);
        }
        _objc_storeStrong(local_1b8);
        _objc_storeStrong(&local_1a0,0);
      }
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
LAB_003ad64c:
  _objc_storeStrong(&local_38,0);
  return;
}

