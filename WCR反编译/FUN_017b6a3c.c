// FUN_017b6a3c @ 017b6a3c

void FUN_017b6a3c(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_390;
  undefined *local_360;
  undefined *local_358;
  ulong local_2b0;
  ulong local_2a8;
  cfstringStruct *local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  cfstringStruct *local_200;
  byte local_1f4;
  byte local_1f3;
  byte local_1f2;
  byte local_1f1;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  undefined *local_178;
  ulong local_170;
  undefined4 local_168;
  undefined1 local_161;
  ulong local_160;
  ulong local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar3 = *(long *)(param_1 + 0x20);
  local_138 = param_1;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_class_0269cd60);
  _class_getInstanceVariable();
  local_140 = lVar3;
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    _object_getIvar(uVar4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 0;
    bVar2 = true;
    uVar1 = uVar4 != 0;
    local_148 = uVar4;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar4 == 0;
      local_161 = uVar1;
      local_160 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar1 = local_161;
    }
    local_161 = uVar1;
    if (bVar2) {
      local_168 = 1;
    }
    else {
      uVar4 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_170 = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_170 == 0) {
        local_168 = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_178 = puVar5;
        _memset(auStack_1c0,0,0x40);
        uVar4 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2a8 != 0) {
          lVar3 = *local_1b0;
          local_2b0 = 0;
          do {
            do {
              if (*local_1b0 - lVar3 != 0) {
                _objc_enumerationMutation(*local_1b0 - lVar3,uVar4);
              }
              uVar8 = *(ulong *)(local_1b8 + local_2b0 * 8);
              puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              local_180 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((uVar8 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_addObject__0269d180,local_180)
                ;
              }
              local_2b0 = local_2b0 + 1;
            } while (local_2b0 < local_2a8);
            local_2a8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                       0x10);
            local_2b0 = 0;
          } while (local_2a8 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_retain_02578638)();
        local_1c8 = &cf_D;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d0 = &cf_a_;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = &cf_AllRightsReservedByReXinWangYou;
        puVar5 = PTR__OBJC_CLASS___NSCalendar_026ce070;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_components_fromDate__026a44c0,4);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_year_0269fa28);
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_1e8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_W);
        _objc_retainAutoreleasedReturnValue();
        local_1f1 = 0;
        local_1f2 = 0;
        local_1f3 = 0;
        local_1f4 = 0;
        local_1f0 = puVar6;
        _memset(auStack_240,0,0x40);
        puVar5 = local_178;
        (*(code *)PTR__objc_retain_02578638)();
        local_358 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                   0x10);
        if (local_358 != (undefined *)0x0) {
          lVar3 = *local_230;
          local_360 = (undefined *)0x0;
          do {
            do {
              if (*local_230 - lVar3 != 0) {
                _objc_enumerationMutation(*local_230 - lVar3,puVar5);
              }
              pcVar9 = *(cfstringStruct **)(local_238 + (long)local_360 * 8);
              local_200 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              local_390 = pcVar9;
              if (pcVar9 == (cfstringStruct *)0x0) {
                local_390 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_248 = local_390;
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              if (((local_1f1 & 1) == 0) &&
                 (pcVar9 = local_248,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_248,PTR_s_isEqualToString__0269ccc8,local_1f0),
                 ((ulong)pcVar9 & 1) != 0)) {
                local_1f1 = 1;
                local_168 = 5;
              }
              else if (((local_1f2 & 1) == 0) &&
                      (pcVar9 = local_248,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_isEqualToString__0269ccc8,local_1c8),
                      ((ulong)pcVar9 & 1) != 0)) {
                local_1f2 = 1;
                local_168 = 5;
              }
              else if (((local_1f3 & 1) == 0) &&
                      (pcVar9 = local_248,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_isEqualToString__0269ccc8,local_1d0),
                      ((ulong)pcVar9 & 1) != 0)) {
                local_1f3 = 1;
                local_168 = 5;
              }
              else if (((local_1f4 & 1) == 0) &&
                      (pcVar9 = local_248,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_isEqualToString__0269ccc8,local_1d8),
                      ((ulong)pcVar9 & 1) != 0)) {
                local_1f4 = 1;
                local_168 = 5;
              }
              else {
                local_168 = 0;
              }
              _objc_storeStrong(&local_248,0);
              local_360 = local_360 + 1;
            } while (local_360 < local_358);
            local_358 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                       auStack_128,0x10);
            local_360 = (undefined *)0x0;
          } while (local_358 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (((((local_1f1 & 1) == 0) || ((local_1f2 & 1) == 0)) || ((local_1f3 & 1) == 0)) ||
           ((local_1f4 & 1) == 0)) {
          puVar5 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                     &cf_format_s_,&cf_R_9ecN_OXf,&cf__Nw,&PTR___NSConcreteGlobalBlock_02588f00);
          _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
        }
        _objc_storeStrong(&local_1f0);
        _objc_storeStrong(&local_1e0,0);
        _objc_storeStrong(&local_1d8,0);
        _objc_storeStrong(&local_1d0,0);
        _objc_storeStrong(&local_1c8,0);
        _objc_storeStrong(&local_178,0);
        local_168 = 0;
      }
      _objc_storeStrong(&local_170,0);
    }
    _objc_storeStrong(&local_148,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

