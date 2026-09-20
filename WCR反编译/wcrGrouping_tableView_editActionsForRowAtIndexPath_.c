// wcrGrouping_tableView:editActionsForRowAtIndexPath: @ 003a3da8

/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_editActionsForRowAtIndexPath_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_1e8;
  ulong local_1a8;
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
  puVar5 = local_60;
  local_79 = 0;
  bVar2 = false;
  uVar1 = ((ulong)puVar3 & 1) != 0;
  if ((bool)uVar1) {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar5 == puVar3;
    local_79 = uVar1;
    local_78 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_79;
  }
  local_79 = uVar1;
  if (bVar2) {
    _CACurrentMediaTime();
    puVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_60);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_68;
    local_90[0] = puVar5;
    FUN_0039d120(local_68,puVar5);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_68;
      FUN_0039d4e0(local_68,local_90[0]);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = uVar4;
      if (uVar4 == 0) {
        uVar4 = local_68;
        FUN_0039d550(local_68,local_90[0]);
        if ((uVar4 & 1) == 0) {
          uVar4 = local_68;
          FUN_0039d6b4(local_68,local_90[0]);
          puVar5 = PTR_s_wcrGrouping_tableView_editAction_026a2968;
          if ((uVar4 & 1) == 0) {
            local_b0 = 0;
          }
          else {
            puVar6 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_respondsToSelector__026ca818,
                       PTR_s_wcrGrouping_tableView_editAction_026a2968);
            local_48 = local_50;
            puVar3 = local_60;
            if (((ulong)puVar6 & 1) == 0) {
              local_48 = (undefined *)0x0;
              local_b0 = 1;
            }
            else {
              uVar4 = local_68;
              FUN_0039d7f0(local_68,local_90[0]);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar5,puVar3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)(uVar4);
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
      _objc_storeStrong(&local_1a8,0);
    }
    else {
      uVar4 = local_68;
      FUN_0039d35c(local_68,local_90[0]);
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar4;
      if (uVar4 == 0) {
        puVar5 = local_50;
        FUN_003a4820(local_50,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = puVar5;
        if (puVar5 == (undefined *)0x0) {
          puVar5 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = 1;
          local_48 = puVar5;
        }
        else {
          puVar3 = local_50;
          FUN_003a48f4(local_50,puVar5);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = puVar3;
          _objc_initWeak(auStack_c8,local_50);
          _objc_initWeak(auStack_d0,local_60);
          puVar5 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
          local_110 = PTR___NSConcreteStackBlock_02578660;
          local_108 = 0xc2000000;
          local_104 = 0;
          local_100 = FUN_003a4998;
          local_f8 = &DAT_0257c8e8;
          _objc_copyWeak(auStack_e8,auStack_c8);
          _objc_copyWeak(auStack_e0,auStack_d0);
          puVar3 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_rowActionWithStyle_title_handler_026a2d90,0,&cf_Rd,&local_110);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_003a4bf4;
          local_148 = &DAT_0257c8e8;
          local_d8 = puVar5;
          _objc_copyWeak(auStack_138,auStack_c8);
          _objc_copyWeak(auStack_130,auStack_d0);
          puVar5 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,&cf_N>f_y,&local_160);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_128[0] = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,DAT_02323e10,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar3 = local_c0;
          puVar5 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
          local_1a0 = PTR___NSConcreteStackBlock_02578660;
          local_198 = 0xc2000000;
          local_194 = 0;
          local_190 = FUN_003a4dec;
          local_188 = &DAT_0257c8e8;
          _objc_copyWeak(auStack_178,auStack_c8);
          _objc_copyWeak(auStack_170,auStack_d0);
          puVar6 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,puVar3,&local_1a0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_168 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,DAT_02323f80,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_40 = local_d8;
          local_38 = local_128[0];
          local_30 = local_168;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = 1;
          local_48 = puVar5;
          _objc_storeStrong(&local_168);
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
        local_a0 = PTR_s_wcrGrouping_tableView_editAction_026a2968;
        puVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_wcrGrouping_tableView_editAction_026a2968);
        local_a9 = false;
        bVar2 = ((ulong)puVar5 & 1) == 0;
        if (bVar2) {
          local_1e8 = (undefined *)0x0;
        }
        else {
          local_1e8 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,local_a0,local_60,local_98);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_1e8;
        }
        local_a9 = !bVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = local_1e8;
        if ((local_a9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        local_b0 = 1;
      }
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(local_90,0);
    if (local_b0 != 0) goto LAB_003a47c0;
  }
  puVar5 = PTR_s_wcrGrouping_tableView_editAction_026a2968;
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,
             PTR_s_wcrGrouping_tableView_editAction_026a2968);
  if (((ulong)puVar3 & 1) == 0) {
    local_48 = (undefined *)0x0;
    local_b0 = 1;
  }
  else {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,puVar5,local_60,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = 1;
    local_48 = puVar3;
  }
LAB_003a47c0:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_48;
}

