// applyOnTableView:owner: @ 00fd1a18

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineHomeTableHeaderHost::applyOnTableView_owner_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double in_d2;
  double in_d3;
  undefined *local_388;
  undefined *local_340;
  ulong local_2e0;
  ulong local_2d8;
  undefined *local_288;
  ID local_238;
  byte local_229;
  undefined *local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined1 local_1d9;
  double local_1c8;
  double local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined1 local_159;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  byte local_139;
  double local_130;
  double local_f8;
  undefined4 local_ec;
  undefined *local_e8;
  ulong local_e0;
  SEL local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  local_e8 = (undefined *)0x0;
  _objc_storeStrong(&local_e8,param_4);
  uVar4 = local_e0;
  puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_ec = 1;
  }
  else {
    if (local_e8 != (undefined *)0x0) {
      _objc_setAssociatedObject(local_e0,&DAT_028e3047,local_e8,0);
    }
    IVar5 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_wantsTableHeader_026ad198);
    if ((IVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_unwrapHostOnTableView_reason__026ad1b0,local_e0,&cf_noTopCards);
      local_ec = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_installSetTableHeaderViewHookIfN_026ad1b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
      dVar9 = 1.0;
      local_f8 = in_d2;
      if (in_d2 < 1.0) {
        puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_130 = dVar9;
        local_f8 = in_d2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_139 = (byte)local_e0;
      FUN_00fd148c();
      uVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_tag_026cab98);
      if (uVar4 == 0x7f152) {
        uVar4 = local_148;
        _objc_getAssociatedObject(local_148,&DAT_028e3044);
        _objc_retainAutoreleasedReturnValue();
        local_150 = uVar4;
        FUN_00fcee64();
        local_159 = 0;
        bVar2 = true;
        uVar1 = (uVar4 & 1) != 0;
        if ((bool)uVar1) {
          uVar4 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = uVar4 != local_148;
          local_159 = uVar1;
          local_158 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar1 = local_159;
        }
        local_159 = uVar1;
        if (bVar2) {
          _objc_storeStrong(&local_150,0);
          _memset(auStack_1a8,0,0x40);
          uVar4 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_2d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_2d8 != 0) {
            lVar7 = *local_198;
            local_2e0 = 0;
            do {
              do {
                if (*local_198 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_198 - lVar7,uVar4);
                }
                uVar8 = *(ulong *)(local_1a0 + local_2e0 * 8);
                local_168 = uVar8;
                FUN_00fcee64();
                if ((uVar8 & 1) != 0) {
                  _objc_storeStrong(&local_150,local_168);
                  local_ec = 2;
                  goto LAB_00fd1eec;
                }
                local_2e0 = local_2e0 + 1;
              } while (local_2e0 < local_2d8);
              local_2d8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,
                         auStack_a8,0x10);
              local_2e0 = 0;
            } while (local_2d8 != 0);
          }
          local_ec = 0;
LAB_00fd1eec:
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        if (local_150 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
          local_1c8 = dVar9;
          local_1b0 = in_d3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_layoutSlotsInHost_base_tableView_026ad190,local_148,local_150,
                     local_e0,(local_139 ^ 1) & 1);
          dVar9 = ABS(local_1b0 - local_f8);
          dVar10 = 0.5;
          local_1d9 = 0.5 < dVar9;
          if (((bool)local_1d9) && ((local_139 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentOffset_0269dd18);
            uVar4 = local_e0;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_1f0 = dVar9;
            dStack_1e8 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar4);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_setTableHeaderView__0269ea10,local_148);
            _objc_setAssociatedObject(local_e0,&DAT_028e3045,0,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentOffset_0269dd18);
            local_200 = dVar9;
            local_1f8 = dVar10;
            if (0.5 < ABS(dVar10 - dStack_1e8)) {
              dStack_218 = dStack_1e8;
              local_220 = local_1f0;
              local_210 = local_220;
              dStack_208 = dStack_218;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f0,dStack_1e8,local_e0,PTR_s_setContentOffset__0269e780);
            }
          }
          if ((local_139 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0)
            ;
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_e0;
            local_b8 = &cf_owner;
            local_340 = local_e8;
            local_229 = 0;
            bVar2 = local_e8 == (undefined *)0x0;
            if (bVar2) {
              local_340 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_228 = local_340;
            }
            local_b0 = local_340;
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_229 = bVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_postNotificationName_object_user_026a1e90,
                       &cf_com_qimiao_wcrefine_home_th_applied,uVar4);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if ((local_229 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_228);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
        }
        local_ec = 1;
        _objc_storeStrong(&local_150,0);
      }
      else {
        uVar4 = local_148;
        FUN_00fcee64();
        if ((uVar4 & 1) == 0) {
          local_ec = 0;
        }
        else {
          IVar5 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_embedSearchBase_intoHostFor_widt_026ad1a0,local_148,local_e0,
                     (local_139 ^ 1) & 1);
          _objc_retainAutoreleasedReturnValue();
          local_238 = IVar5;
          if (IVar5 != 0) {
            dVar10 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentOffset_0269dd18);
            uVar4 = local_e0;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            dVar11 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar4);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_setTableHeaderView__0269ea10,local_238);
            _objc_setAssociatedObject(local_e0,&DAT_028e3045,0,1);
            if (((local_139 & 1) != 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentOffset_0269dd18),
               0.5 < ABS(dVar11 - dVar9))) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar10,dVar9,local_e0,PTR_s_setContentOffset__0269e780);
            }
            if ((local_139 & 1) == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,
                         PTR_s_defaultCenter_026ca5e0);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = local_e0;
              local_c8 = &cf_owner;
              local_388 = local_e8;
              bVar2 = local_e8 == (undefined *)0x0;
              if (bVar2) {
                local_388 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                _objc_retainAutoreleasedReturnValue();
                local_288 = local_388;
              }
              local_c0 = local_388;
              puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_c8,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_postNotificationName_object_user_026a1e90,
                         &cf_com_qimiao_wcrefine_home_th_applied,uVar4);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              if (bVar2) {
                (*(code *)PTR__objc_release_02578630)(local_288);
              }
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_scheduleSettleOnTableView_owner__026a2470,local_e0,local_e8)
              ;
            }
          }
          local_ec = 1;
          _objc_storeStrong(&local_238,0);
        }
      }
      _objc_storeStrong(&local_148,0);
    }
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

