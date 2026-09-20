// buildPluginPageForGroup: @ 01787744

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCPluginsViewControllerBehavior::buildPluginPageForGroup_
          (WCPluginsViewControllerBehavior *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_370;
  uint local_338;
  uint local_324;
  undefined *local_308;
  undefined *local_300;
  undefined *local_240;
  undefined4 local_238;
  undefined4 local_234;
  code *local_230;
  undefined *local_228;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  undefined *local_200;
  char *local_1f8;
  undefined *local_1f0;
  byte local_1e1;
  ulong local_1e0;
  byte local_1d1;
  undefined8 local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  long local_170;
  byte local_161;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char *local_d0 [2];
  undefined8 local_c0;
  SEL local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = (char *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  _CFAbsoluteTimeGetCurrent();
  pcVar2 = "WCTableViewManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_d0[0] = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_d0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  uVar13 = 0xc034000000000000;
  uVar16 = 0;
  uVar14 = 0;
  uVar15 = 0x4038000000000000;
  FUN_017886cc();
  pcVar2 = local_d0[0];
  local_f0 = uVar13;
  uStack_e8 = uVar14;
  local_e0 = uVar15;
  uStack_d8 = uVar16;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_e8;
  local_110 = local_f0;
  uStack_f8 = uStack_d8;
  local_100 = local_e0;
  uVar13 = local_f0;
  uVar14 = uStack_e8;
  uVar15 = local_e0;
  uVar16 = uStack_d8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_d0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar4 = local_d0[0];
  local_130 = uVar13;
  uStack_128 = uVar14;
  local_120 = uVar15;
  uStack_118 = uVar16;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uStack_128;
  local_150 = local_130;
  uStack_138 = uStack_118;
  local_140 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,uStack_128,local_120,uStack_118);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar2 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pageScrollView_026b4530);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_requireGestureRecognizerToFail__026ca810);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_d0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar2 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_addSection__0269e3d0,puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_02323d38,local_158,PTR_s_setFHeaderHeight__026b46e8);
  puVar3 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_160 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar7);
  local_161 = (byte)puVar3;
  local_170 = 0;
  _memset(auStack_1b8,0,0x40);
  puVar3 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_orderedPluginsIncludingHidden__026b1a18,0);
  _objc_retainAutoreleasedReturnValue();
  local_300 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_300 != (undefined *)0x0) {
    lVar12 = *local_1a8;
    local_308 = (undefined *)0x0;
    do {
      do {
        if (*local_1a8 - lVar12 != 0) {
          _objc_enumerationMutation(*local_1a8 - lVar12,puVar3);
        }
        local_178 = *(ulong *)(local_1b0 + (long)local_308 * 8);
        puVar7 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_groupingEnabled_026b45c8);
        local_1c1 = 0;
        local_1d1 = 0;
        local_324 = 0;
        if (((ulong)puVar7 & 1) != 0) {
          puVar7 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_groupIdentifierForPlugin__026b4470,local_178);
          _objc_retainAutoreleasedReturnValue();
          local_1c1 = 1;
          uVar13 = local_c0;
          local_1c0 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          local_1d1 = 1;
          local_1d0 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isEqualToString__0269ccc8);
          local_324 = (uint)puVar7 ^ 1;
        }
        if ((local_1d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1d0);
        }
        if ((local_1c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1c0);
        }
        if ((local_324 & 1) == 0) {
          uVar8 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_isController_026b1a20);
          local_1e1 = 0;
          local_338 = 0;
          if (((uVar8 & 1) != 0) && (local_338 = 0, (local_161 & 1) != 0)) {
            uVar8 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_controller_0269cff8);
            _objc_retainAutoreleasedReturnValue();
            local_1e1 = 1;
            local_1e0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_338 = (uint)uVar8;
          }
          if ((local_1e1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1e0);
          }
          if ((local_338 & 1) == 0) {
            puVar7 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_displayTitleForPlugin__026b1a30,local_178);
            _objc_retainAutoreleasedReturnValue();
            local_1f8 = (char *)0x0;
            uVar8 = local_178;
            local_1f0 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_isController_026b1a20);
            pcVar2 = local_b0;
            puVar1 = local_1f0;
            puVar7 = PTR_s_pushPluginController__026b46f0;
            if ((uVar8 & 1) == 0) {
              puVar7 = PTR_WCRefinePluginPageAction_026cefc0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefinePluginPageAction_026cefc0,PTR_s_new_0269d288);
              pcVar2 = local_b0;
              local_200 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_actionTargets_026b4558);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              uVar8 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_key_026a7380);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_208 = uVar10;
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_storage_026b1a28);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_210 = uVar10;
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar10 = local_208;
              local_240 = PTR___NSConcreteStackBlock_02578660;
              local_238 = 0xc2000000;
              local_234 = 0;
              local_230 = FUN_01788718;
              local_228 = &DAT_02588a30;
              (*(code *)PTR__objc_retain_02578638)();
              uVar8 = local_210;
              local_220 = uVar10;
              (*(code *)PTR__objc_retain_02578638)();
              local_218 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_200,PTR_s_setSwitchBlock__026b4710,&local_240);
              pcVar2 = "WCTableViewCellManager";
              _objc_getClass();
              puVar9 = local_1f0;
              puVar1 = local_200;
              puVar7 = PTR_s_switchChanged__026b4718;
              uVar8 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_key_026a7380);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_storage_026b1a28);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar8;
              FUN_017892e0(uVar8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_switchCellForSel_target_title_on_026a0aa8,puVar7,puVar1,puVar9
                         ,uVar11);
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = local_1f8;
              local_1f8 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              (*(code *)PTR__objc_release_02578630)(uVar10);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              _objc_storeStrong(&local_218);
              _objc_storeStrong(&local_220,0);
              _objc_storeStrong(&local_210,0);
              _objc_storeStrong(&local_208,0);
              _objc_storeStrong(&local_200,0);
            }
            else {
              puVar9 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_displayVersionForPlugin__026b46f8,local_178);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_sourceModel_026b4700);
              _objc_retainAutoreleasedReturnValue();
              local_370 = uVar8;
              if (uVar8 == 0) {
                local_370 = local_178;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_addNormalCellForSel_title_rightV_026b4708,puVar7,puVar1,puVar9
                         ,local_370);
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = local_1f8;
              local_1f8 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              (*(code *)PTR__objc_release_02578630)(puVar9);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_configureLongPressForCellManager_026b4720,local_1f8,local_178)
            ;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addCell__0269e3f8,local_1f8);
            local_170 = local_170 + 1;
            _objc_storeStrong(&local_1f8);
            _objc_storeStrong(&local_1f0,0);
          }
        }
        local_308 = local_308 + 1;
      } while (local_308 < local_300);
      local_300 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10)
      ;
      local_308 = (undefined *)0x0;
    } while (local_300 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_170 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setFooterTitle__0269e3c8,&cf__NR_lgcNS_WcN6e_n__NteR_0);
  }
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pageManagers_026b4550);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_d0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_d0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

