// wcrGrouping_tableView:trailingSwipeActionsConfigurationForRowAtIndexPath: @ 003a4f98

/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRefineHomeSessionGroupingHook::
wcrGrouping_tableView_trailingSwipeActionsConfigurationForRowAtIndexPath_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *local_1f0;
  ulong local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined *local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined *local_128 [3];
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *local_c0;
  undefined *local_b8;
  int local_b0;
  bool local_a9;
  undefined *local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined *local_90 [2];
  undefined1 local_79;
  undefined *local_78;
  ulong local_68;
  undefined *local_60;
  SEL local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = (undefined *)0x0;
  local_58 = param_2;
  local_50 = (undefined *)param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  _CACurrentMediaTime();
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcrGrouping_active_026a2a40);
  puVar4 = local_60;
  local_79 = 0;
  bVar2 = false;
  uVar1 = ((ulong)puVar3 & 1) != 0;
  if ((bool)uVar1) {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar4 == puVar3;
    local_79 = uVar1;
    local_78 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_79;
  }
  local_79 = uVar1;
  if (bVar2) {
    _CACurrentMediaTime();
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_60);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_68;
    local_90[0] = puVar4;
    FUN_0039d120(local_68,puVar4);
    if ((uVar5 & 1) == 0) {
      uVar5 = local_68;
      FUN_0039d4e0(local_68,local_90[0]);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = uVar5;
      if (uVar5 == 0) {
        uVar5 = local_68;
        FUN_0039d550(local_68,local_90[0]);
        if ((uVar5 & 1) == 0) {
          uVar5 = local_68;
          FUN_0039d6b4(local_68,local_90[0]);
          puVar4 = PTR_s_wcrGrouping_tableView_trailingSw_026a2978;
          if ((uVar5 & 1) == 0) {
            local_b0 = 0;
          }
          else {
            puVar6 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_respondsToSelector__026ca818,
                       PTR_s_wcrGrouping_tableView_trailingSw_026a2978);
            local_48 = local_50;
            puVar3 = local_60;
            if (((ulong)puVar6 & 1) == 0) {
              local_48 = (undefined *)0x0;
              local_b0 = 1;
            }
            else {
              uVar5 = local_68;
              FUN_0039d7f0(local_68,local_90[0]);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar4,puVar3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)(uVar5);
              local_b0 = 1;
            }
          }
        }
        else {
          local_48 = (undefined *)0x0;
          local_b0 = 1;
        }
      }
      else {
        local_48 = (undefined *)0x0;
        local_b0 = 1;
      }
      _objc_storeStrong(&local_1b0,0);
    }
    else {
      uVar5 = local_68;
      FUN_0039d35c(local_68,local_90[0]);
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar5;
      if (uVar5 == 0) {
        puVar4 = local_50;
        FUN_003a4820(local_50,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          local_48 = (undefined *)0x0;
          local_b0 = 1;
        }
        else {
          puVar3 = local_50;
          FUN_003a48f4(local_50,puVar4);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = puVar3;
          _objc_initWeak(auStack_c8,local_50);
          _objc_initWeak(auStack_d0,local_60);
          puVar4 = PTR__OBJC_CLASS___UIContextualAction_026ce5e0;
          local_110 = PTR___NSConcreteStackBlock_02578660;
          local_108 = 0xc2000000;
          local_104 = 0;
          local_100 = FUN_003a5a98;
          local_f8 = &DAT_0257c918;
          _objc_copyWeak(auStack_e8,auStack_c8);
          _objc_copyWeak(auStack_e0,auStack_d0);
          puVar3 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_contextualActionWithStyle_title__026a2d98,1,&cf_Rd,&local_110);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___UIContextualAction_026ce5e0;
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_003a5bf0;
          local_148 = &DAT_0257c918;
          local_d8 = puVar4;
          _objc_copyWeak(auStack_138,auStack_c8);
          _objc_copyWeak(auStack_130,auStack_d0);
          puVar4 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_contextualActionWithStyle_title__026a2d98,0,&cf_N>f_y,&local_160);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_128[0] = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,DAT_02323e10,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar3 = local_c0;
          puVar4 = PTR__OBJC_CLASS___UIContextualAction_026ce5e0;
          local_1a0 = PTR___NSConcreteStackBlock_02578660;
          local_198 = 0xc2000000;
          local_194 = 0;
          local_190 = FUN_003a5d48;
          local_188 = &DAT_0257c918;
          _objc_copyWeak(auStack_178,auStack_c8);
          _objc_copyWeak(auStack_170,auStack_d0);
          puVar6 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_contextualActionWithStyle_title__026a2d98,0,puVar3,&local_1a0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_168 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,DAT_02323f80,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar4 = PTR__OBJC_CLASS___UISwipeActionsConfiguration_026ce5e8;
          local_40 = local_d8;
          local_38 = local_128[0];
          local_30 = local_168;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_configurationWithActions__026a2da0);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setPerformsFirstActionWithFullSw_026a2da8,0);
          puVar4 = local_1a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_48 = puVar4;
          local_b0 = 1;
          _objc_storeStrong(&local_1a8);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_180,0);
          _objc_destroyWeak(auStack_170);
          _objc_destroyWeak(auStack_178);
          _objc_storeStrong(local_128,0);
          _objc_storeStrong(&local_140,0);
          _objc_destroyWeak(auStack_130);
          _objc_destroyWeak(auStack_138);
          _objc_storeStrong(&local_d8,0);
          _objc_storeStrong(&local_f0,0);
          _objc_destroyWeak(auStack_e0);
          _objc_destroyWeak(auStack_e8);
          _objc_destroyWeak(auStack_d0);
          _objc_destroyWeak(auStack_c8);
          _objc_storeStrong(&local_c0,0);
        }
        _objc_storeStrong(&local_b8,0);
      }
      else {
        local_a0 = PTR_s_wcrGrouping_tableView_trailingSw_026a2978;
        puVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_wcrGrouping_tableView_trailingSw_026a2978);
        local_a9 = false;
        bVar2 = ((ulong)puVar4 & 1) == 0;
        if (bVar2) {
          local_1f0 = (undefined *)0x0;
        }
        else {
          local_1f0 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,local_a0,local_60,local_98);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_1f0;
        }
        local_a9 = !bVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = local_1f0;
        if ((local_a9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        local_b0 = 1;
      }
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(local_90,0);
    if (local_b0 != 0) goto LAB_003a5a38;
  }
  puVar4 = PTR_s_wcrGrouping_tableView_trailingSw_026a2978;
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,
             PTR_s_wcrGrouping_tableView_trailingSw_026a2978);
  if (((ulong)puVar3 & 1) == 0) {
    local_48 = (undefined *)0x0;
    local_b0 = 1;
  }
  else {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,puVar4,local_60,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = 1;
    local_48 = puVar3;
  }
LAB_003a5a38:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_48;
}

