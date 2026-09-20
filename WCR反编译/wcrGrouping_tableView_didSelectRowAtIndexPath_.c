// wcrGrouping_tableView:didSelectRowAtIndexPath: @ 003a0bac

/* WARNING: Removing unreachable block (ram,0x003a1ce4) */
/* WARNING: Removing unreachable block (ram,0x003a18f8) */
/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_didSelectRowAtIndexPath_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  dispatch_time_t dVar12;
  int iVar13;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_240;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [15];
  byte local_171;
  ID local_170 [2];
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [15];
  byte local_129;
  ID local_128 [2];
  cfstringStruct *local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0 [2];
  cfstringStruct *local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0 [3];
  undefined *local_88;
  byte local_79;
  ID local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ID local_60;
  undefined1 local_51;
  ID local_50;
  int local_44;
  cfstringStruct *local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar5 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_active_026a2a40);
    IVar8 = local_38;
    local_51 = 0;
    bVar4 = false;
    uVar1 = (IVar7 & 1) != 0;
    if ((bool)uVar1) {
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_findMainTableView_026a2848);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = IVar8 == IVar7;
      local_51 = uVar1;
      local_50 = IVar7;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      uVar1 = local_51;
    }
    local_51 = uVar1;
    if (bVar4) {
      IVar8 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar7;
      (*(code *)PTR__objc_release_02578630)(IVar8);
      if ((local_60 == 0) || (IVar8 = local_60, FUN_00357d1c(), (IVar8 & 1) == 0)) {
        IVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_38);
        _objc_retainAutoreleasedReturnValue();
        IVar8 = local_60;
        local_60 = IVar7;
        (*(code *)PTR__objc_release_02578630)(IVar8);
      }
      pcVar9 = local_40;
      FUN_0039d120(local_40,local_60);
      if (((ulong)pcVar9 & 1) == 0) {
        pcVar9 = local_40;
        FUN_0039d4e0(local_40,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar9;
        if (pcVar9 == (cfstringStruct *)0x0) {
          pcVar9 = local_40;
          FUN_0039d550(local_40,local_60);
          if (((ulong)pcVar9 & 1) == 0) {
            pcVar9 = local_40;
            FUN_0039d6b4(local_40,local_60);
            IVar7 = local_28;
            IVar8 = local_38;
            if (((ulong)pcVar9 & 1) == 0) {
              local_44 = 0;
            }
            else {
              pcVar9 = local_40;
              FUN_0039d7f0(local_40,local_60);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar7,PTR_s_wcrGrouping_tableView_didSelectR_026a2928,IVar8);
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              local_44 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_40,0);
            local_44 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_40,1);
          FUN_003a1e48(local_28);
          _WCRChatLatencyProbeMarkHomeSelection();
          _CACurrentMediaTime();
          IVar8 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          IVar7 = IVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_128[0] = IVar7;
          (*(code *)PTR__objc_release_02578630)(IVar8);
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar8);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_129 = 0;
          FUN_003a2acc(local_28,local_38,local_118);
          local_44 = 0;
          IVar8 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar8);
          if ((local_129 & 1) != 0) {
            _objc_exception_rethrow();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x3a18e8);
            (*pcVar3)();
          }
          local_44 = 0;
          _objc_initWeak(auStack_138,local_28);
          puVar5 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_003a2d00;
          local_148 = &DAT_0257be28;
          _objc_copyWeak(auStack_140,auStack_138);
          _dispatch_async(puVar5,&local_160);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_44 = 1;
          _objc_destroyWeak(auStack_140);
          _objc_destroyWeak(auStack_138);
          _objc_storeStrong(local_128,0);
        }
        _objc_storeStrong(&local_118,0);
      }
      else {
        pcVar9 = local_40;
        FUN_0039d35c(local_40,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar9;
        if (pcVar9 == (cfstringStruct *)0x0) {
          pcVar9 = local_40;
          FUN_0039e3b0(local_40,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar9;
          FUN_003a1e48(local_28);
          _WCRChatLatencyProbeMarkHomeSelection();
          IVar8 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          IVar7 = IVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_78 = IVar7;
          (*(code *)PTR__objc_release_02578630)(IVar8);
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar8);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_79 = 0;
          puVar5 = PTR_WCRGroupingSessionListViewController_026ce5d0;
          _objc_alloc();
          pcVar9 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          pcVar11 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          local_240 = pcVar11;
          if (pcVar11 == (cfstringStruct *)0x0) {
            local_240 = *(cfstringStruct **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_initWithTitle_groupId_items_main_026a2d80,pcVar9,pcVar10,local_240
                     ,local_28);
          local_88 = puVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar11);
          (*(code *)PTR__objc_release_02578630)(pcVar10);
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_40,0);
          (*(code *)PTR__objc_retain_02578638)();
          local_a0[0] = &cf_missing;
          local_a1 = 0;
          pcVar9 = &cf_PushViewController_;
          _NSSelectorFromString();
          IVar8 = local_28;
          local_b0 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar9);
          if ((IVar8 & 1) == 0) {
            IVar8 = local_28;
            FUN_003612b8(local_28,&cf_navigationController);
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = &cf_PushViewController_animated_;
            local_b8 = IVar8;
            _NSSelectorFromString();
            IVar8 = local_b8;
            local_c0 = pcVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_respondsToSelector__026ca818,pcVar9);
            if ((IVar8 & 1) == 0) {
              if (local_b8 != 0) {
                _objc_storeStrong(local_a0,&cf_uikit);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_pushViewController_animated__0269d590,local_88,1);
                local_a1 = 1;
              }
            }
            else {
              _objc_storeStrong(local_a0,&cf_nav_private);
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_c0,local_88,1);
              local_a1 = 1;
            }
            _objc_storeStrong(&local_b8,0);
          }
          else {
            _objc_storeStrong(local_a0,&cf_mainframe);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,local_b0,local_88);
            local_a1 = 1;
          }
          if ((local_a1 & 1) == 0) {
            local_44 = 1;
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            pcVar9 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_items_0269e4b0);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar9;
            FUN_003a1fd4();
            _objc_retainAutoreleasedReturnValue();
            local_d0[0] = pcVar10;
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            local_d9 = 0;
            local_2b8 = local_d0[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_length_0269cca0);
            if (local_2b8 == (cfstringStruct *)0x0) {
              FUN_003a2544();
              _objc_retainAutoreleasedReturnValue();
              local_d9 = 1;
              local_d8 = local_2b8;
            }
            else {
              local_2b8 = local_d0[0];
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTimeText__026a2d88,local_2b8);
            if ((local_d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_d8);
            }
            pcVar9 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_groupId_0269ea88);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2e0 = pcVar10;
            if (pcVar10 == (cfstringStruct *)0x0) {
              local_2e0 = &::cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = local_2e0;
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            dVar12 = _dispatch_time(0,450000000);
            puVar5 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = local_e8;
            local_110 = PTR___NSConcreteStackBlock_02578660;
            local_108 = 0xc2000000;
            local_104 = 0;
            local_100 = FUN_003a27c0;
            local_f8 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_f0 = pcVar9;
            _dispatch_after(dVar12,puVar5,&local_110);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_storeStrong(&local_f0);
            _objc_storeStrong(&local_e8,0);
            _objc_storeStrong(local_d0,0);
            local_44 = 0;
          }
          _objc_storeStrong(local_a0);
          _objc_storeStrong(&local_88,0);
          if (local_44 == 0) {
            local_44 = 0;
          }
          iVar2 = local_44;
          IVar8 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar8);
          if ((local_79 & 1) != 0) {
            _objc_exception_rethrow();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x3a166c);
            (*pcVar3)();
          }
          if (iVar2 == 0) {
            iVar13 = 1;
            local_44 = 1;
          }
          else {
            iVar13 = iVar2 + -4;
            local_44 = iVar2;
            if (iVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x3a1e48);
              (*pcVar3)();
            }
          }
          _objc_storeStrong(iVar13,&local_78);
          _objc_storeStrong(&local_70,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcrGrouping_tableView_didSelectR_026a2928,local_38,pcVar9);
          local_44 = 1;
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
      if (local_44 != 0) goto LAB_003a1db0;
    }
    IVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_active_026a2a40);
    if ((IVar8 & 1) != 0) {
      FUN_003a1e48(local_28);
    }
    _WCRChatLatencyProbeMarkHomeSelection();
    _CACurrentMediaTime();
    IVar8 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_170[0] = IVar7;
    (*(code *)PTR__objc_release_02578630)(IVar8);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_171 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrGrouping_tableView_didSelectR_026a2928,local_38,local_40);
    local_44 = 0;
    IVar8 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar8);
    if ((local_171 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3a1cd4);
      (*pcVar3)();
    }
    local_44 = 0;
    _objc_initWeak(auStack_180,local_28);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = PTR___NSConcreteStackBlock_02578660;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_003a2d40;
    local_190 = &DAT_0257be28;
    _objc_copyWeak(auStack_188,auStack_180);
    _dispatch_async(puVar5,&local_1a8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_180);
    _objc_storeStrong(local_170,0);
    local_44 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_40,0);
    local_44 = 1;
  }
LAB_003a1db0:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

