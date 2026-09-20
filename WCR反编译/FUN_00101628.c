// FUN_00101628 @ 00101628

void FUN_00101628(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong local_238;
  ulong local_230;
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined8 uStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  int local_164;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  ulong local_108;
  ulong local_100;
  int local_f8;
  ulong local_e8;
  ulong local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_5);
  uVar1 = local_e0;
  FUN_00100134();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_f8 = 1;
  }
  else {
    uVar1 = local_e0;
    FUN_000f91dc();
    if ((uVar1 & 1) == 0) {
      FUN_00101264(local_e8);
      local_f8 = 1;
    }
    else {
      uVar1 = local_e0;
      FUN_000f9998();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_e0;
      local_100 = uVar1;
      FUN_0010206c();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_100;
      puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      local_108 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar1 & 1) == 0) ||
         (uVar1 = local_108, (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0),
         uVar1 == 0)) {
        local_f8 = 1;
      }
      else {
        _memset(auStack_150,0,0x40);
        uVar1 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_indexPathsForVisibleRows_0269ec40);
        _objc_retainAutoreleasedReturnValue();
        local_230 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_230 != 0) {
          lVar9 = *local_140;
          local_238 = 0;
          do {
            do {
              if (*local_140 - lVar9 != 0) {
                _objc_enumerationMutation(*local_140 - lVar9,uVar1);
              }
              lVar10 = *(long *)(local_148 + local_238 * 8);
              local_110 = lVar10;
              (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_section_0269e988);
              if (-1 < lVar10) {
                lVar10 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_section_0269e988);
                uVar4 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
                uVar2 = local_108;
                if (lVar10 < (long)uVar4) {
                  lVar10 = local_110;
                  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_section_0269e988);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar10);
                  _objc_retainAutoreleasedReturnValue();
                  local_158 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
                  if ((uVar2 & 1) == 0) {
                    local_f8 = 3;
                  }
                  else {
                    uVar2 = local_158;
                    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_messageWrap_0269d070);
                    _objc_retainAutoreleasedReturnValue();
                    local_160 = uVar2;
                    if ((uVar2 == 0) ||
                       ((*(code *)PTR__objc_msgSend_02578628)
                                  (uVar2,PTR_s_respondsToSelector__026ca818,
                                   PTR_s_m_uiMesLocalID_0269d238), (uVar2 & 1) == 0)) {
                      local_f8 = 3;
                    }
                    else {
                      uVar2 = local_160;
                      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_m_uiMesLocalID_0269d238)
                      ;
                      local_164 = (int)uVar2;
                      if (local_164 == 0) {
                        local_f8 = 3;
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_100,PTR_s_rectForRowAtIndexPath__0269ec48,local_110);
                        local_1b0 = param_1;
                        dStack_1a8 = param_2;
                        local_1a0 = param_3;
                        uStack_198 = param_4;
                        local_188 = param_1;
                        dStack_180 = param_2;
                        local_178 = param_3;
                        uStack_170 = param_4;
                        _CGRectGetMinY(param_1,param_2,param_3);
                        param_3 = param_1;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_100,PTR_s_contentOffset_0269dd18);
                        local_190 = param_1 - param_2;
                        local_d8 = &cf_localID;
                        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                        local_1c0 = param_3;
                        local_1b8 = param_2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSNumber_026ce038,
                                   PTR_s_numberWithUnsignedInt__0269d800,local_164);
                        _objc_retainAutoreleasedReturnValue();
                        local_d0 = &cf_marginTop;
                        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                        param_1 = local_190;
                        local_c0 = puVar5;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSNumber_026ce038,
                                   PTR_s_numberWithDouble__0269d6d0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                        local_c8 = &cf_savedAt;
                        puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
                        local_b8 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar3,PTR_s_numberWithDouble__0269d6d0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                        local_b0 = puVar3;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,
                                   &local_d8,3);
                        _objc_retainAutoreleasedReturnValue();
                        local_1c8 = puVar8;
                        (*(code *)PTR__objc_release_02578630)(puVar3);
                        (*(code *)PTR__objc_release_02578630)(puVar7);
                        (*(code *)PTR__objc_release_02578630)(puVar6);
                        (*(code *)PTR__objc_release_02578630)(puVar5);
                        _os_unfair_lock_lock(&DAT_028c8460);
                        if (DAT_028c83b0 == (undefined *)0x0) {
                          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,
                                     PTR_s_dictionary_0269d240);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = DAT_028c83b0;
                          DAT_028c83b0 = puVar5;
                          (*(code *)PTR__objc_release_02578630)(puVar3);
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (DAT_028c83b0,PTR_s_setObject_forKeyedSubscript__0269d248,
                                   local_1c8,local_e8);
                        _os_unfair_lock_unlock(&DAT_028c8460);
                        local_f8 = 1;
                        _objc_storeStrong(&local_1c8,0);
                      }
                    }
                    _objc_storeStrong(&local_160,0);
                  }
                  _objc_storeStrong(&local_158,0);
                  if (local_f8 != 3) goto LAB_00101f7c;
                }
              }
              local_238 = local_238 + 1;
            } while (local_238 < local_230);
            local_230 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                       0x10);
            local_238 = 0;
          } while (local_230 != 0);
        }
        local_f8 = 0;
LAB_00101f7c:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_f8 == 0) {
          local_f8 = 0;
        }
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
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

