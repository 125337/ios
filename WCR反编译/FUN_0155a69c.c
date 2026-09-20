// FUN_0155a69c @ 0155a69c

byte FUN_0155a69c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_a48;
  undefined *local_a40;
  undefined *local_a08;
  undefined *local_a00;
  undefined *local_9c8;
  undefined *local_9c0;
  undefined *local_988;
  undefined *local_980;
  undefined *local_948;
  undefined *local_940;
  undefined *local_8f8;
  undefined *local_8f0;
  undefined *local_8b8;
  undefined *local_8b0;
  ulong local_878;
  ulong local_870;
  uint local_81c;
  undefined1 auStack_808 [8];
  long local_800;
  long *local_7f8;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined1 auStack_7b8 [8];
  long local_7b0;
  long *local_7a8;
  undefined8 local_778;
  undefined1 auStack_770 [8];
  long local_768;
  long *local_760;
  undefined8 local_730;
  ulong local_728;
  undefined1 auStack_720 [8];
  long local_718;
  long *local_710;
  ulong local_6e0;
  byte local_6d1;
  undefined1 auStack_6d0 [8];
  long local_6c8;
  long *local_6c0;
  ulong local_690;
  undefined *local_688;
  undefined *local_680;
  undefined *local_678;
  undefined *local_670;
  ulong local_668;
  undefined8 local_660;
  undefined1 auStack_658 [8];
  long local_650;
  long *local_648;
  undefined8 local_618;
  undefined1 auStack_610 [8];
  long local_608;
  long *local_600;
  ulong local_5d0;
  undefined *local_5c8;
  undefined1 auStack_5c0 [8];
  long local_5b8;
  long *local_5b0;
  long local_580;
  byte local_571;
  ulong local_570;
  undefined *local_568;
  long local_560;
  int local_554;
  long local_550;
  ulong local_548;
  byte local_539;
  undefined1 auStack_538 [128];
  undefined1 auStack_4b8 [128];
  undefined1 auStack_438 [128];
  undefined1 auStack_3b8 [128];
  undefined1 auStack_338 [128];
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  undefined1 auStack_1d8 [128];
  undefined1 auStack_158 [128];
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_548 = 0;
  _objc_storeStrong(&local_548,param_1);
  local_550 = 0;
  _objc_storeStrong(&local_550,param_2);
  if ((local_548 == 0) || (local_550 == 0)) {
    local_539 = 0;
    local_554 = 1;
  }
  else {
    lVar4 = local_550;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_560 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      local_539 = 0;
      local_554 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_568 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,local_548);
      uVar7 = local_548;
      (*(code *)PTR__objc_msgSend_02578628)(local_548,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_568;
      local_571 = 0;
      local_81c = 0;
      if (uVar7 != 0) {
        uVar8 = local_548;
        (*(code *)PTR__objc_msgSend_02578628)(local_548,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_571 = 1;
        local_570 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8);
        local_81c = (uint)puVar1 ^ 1;
      }
      if ((local_571 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_570);
      }
      (*(code *)PTR__objc_release_02578630)(uVar7);
      puVar1 = local_568;
      if ((local_81c & 1) != 0) {
        uVar7 = local_548;
        (*(code *)PTR__objc_msgSend_02578628)(local_548,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      _memset(auStack_5c0,0,0x40);
      uVar7 = local_548;
      (*(code *)PTR__objc_msgSend_02578628)(local_548,PTR_s_childViewControllers_0269d618);
      _objc_retainAutoreleasedReturnValue();
      local_870 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_870 != 0) {
        lVar4 = *local_5b0;
        local_878 = 0;
        do {
          do {
            if (*local_5b0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_5b0 - lVar4,uVar7);
            }
            local_580 = *(long *)(local_5b8 + local_878 * 8);
            if ((local_580 != 0) &&
               (puVar1 = local_568,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_568,PTR_s_containsObject__0269cbb8,local_580),
               ((ulong)puVar1 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_568,PTR_s_addObject__0269d180,local_580);
            }
            local_878 = local_878 + 1;
          } while (local_878 < local_870);
          local_870 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5c0,auStack_a8,
                     0x10);
          local_878 = 0;
        } while (local_870 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar7);
      local_d8 = &cf_delegate;
      local_d0 = &cf_m_delegate;
      local_c8 = &cf_searchHelper;
      local_c0 = &cf_msgSearchHelper;
      local_b8 = &cf_helper;
      local_b0 = &cf_dataSource;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      local_5c8 = puVar1;
      _memset(auStack_610,0,0x40);
      puVar1 = local_568;
      (*(code *)PTR__objc_msgSend_02578628)(local_568,PTR_s_copy_0269d150);
      local_8b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_8b0 != (undefined *)0x0) {
        lVar4 = *local_600;
        local_8b8 = (undefined *)0x0;
        do {
          do {
            if (*local_600 - lVar4 != 0) {
              _objc_enumerationMutation(*local_600 - lVar4,puVar1);
            }
            local_5d0 = *(ulong *)(local_608 + (long)local_8b8 * 8);
            _memset(auStack_658,0,0x40);
            puVar3 = local_5c8;
            (*(code *)PTR__objc_retain_02578638)();
            local_8f0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_658,
                       auStack_1d8,0x10);
            if (local_8f0 != (undefined *)0x0) {
              lVar5 = *local_648;
              local_8f8 = (undefined *)0x0;
              do {
                do {
                  if (*local_648 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_648 - lVar5,puVar3);
                  }
                  uVar6 = *(undefined8 *)(local_650 + (long)local_8f8 * 8);
                  local_618 = uVar6;
                  _NSSelectorFromString();
                  uVar7 = local_5d0;
                  local_660 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_5d0,PTR_s_respondsToSelector__026ca818,uVar6);
                  if ((uVar7 & 1) != 0) {
                    uVar7 = local_5d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_5d0,local_660);
                    _objc_retainAutoreleasedReturnValue();
                    local_668 = uVar7;
                    if ((uVar7 != 0) &&
                       (puVar2 = local_568,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_568,PTR_s_containsObject__0269cbb8,uVar7),
                       ((ulong)puVar2 & 1) == 0)) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_568,PTR_s_addObject__0269d180,local_668);
                    }
                    _objc_storeStrong(&local_668,0);
                  }
                  local_8f8 = local_8f8 + 1;
                } while (local_8f8 < local_8f0);
                local_8f0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_658,
                           auStack_1d8,0x10);
                local_8f8 = (undefined *)0x0;
              } while (local_8f0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_8b8 = local_8b8 + 1;
          } while (local_8b8 < local_8b0);
          local_8b0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_610,auStack_158,
                     0x10);
          local_8b8 = (undefined *)0x0;
        } while (local_8b0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_208 = &cf_onSelectContact_;
      local_200 = &cf_didSelectContact_;
      local_1f8 = &cf_setSelectedContact_;
      local_1f0 = &cf_setTargetContact_;
      local_1e8 = &cf_setFilterContact_;
      local_1e0 = &cf_setSearchContact_;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_208,6);
      _objc_retainAutoreleasedReturnValue();
      local_230 = &cf_setSearchUsrName_;
      local_228 = &cf_setSearchUserName_;
      local_220 = &cf_setFilterUsrName_;
      local_218 = &cf_setFilterUserName_;
      local_210 = &cf_setUsrName_;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_670 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_230,5);
      _objc_retainAutoreleasedReturnValue();
      local_270 = &cf_selectedContact;
      local_268 = &cf_m_selectedContact;
      local_260 = &cf_targetContact;
      local_258 = &cf_m_targetContact;
      local_250 = &cf_filterContact;
      local_248 = &cf_m_filterContact;
      local_240 = &cf_searchContact;
      local_238 = &cf_m_searchContact;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_678 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_270,8);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = &cf_searchUsrName;
      local_2b0 = &cf_m_searchUsrName;
      local_2a8 = &cf_searchUserName;
      local_2a0 = &cf_m_searchUserName;
      local_298 = &cf_filterUsrName;
      local_290 = &cf_m_filterUsrName;
      local_288 = &cf_filterUserName;
      local_280 = &cf_m_filterUserName;
      local_278 = &cf_usrName;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_680 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_2b8,9);
      _objc_retainAutoreleasedReturnValue();
      local_688 = puVar3;
      _memset(auStack_6d0,0,0x40);
      puVar1 = local_568;
      (*(code *)PTR__objc_retain_02578638)();
      local_940 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6d0,auStack_338,0x10
                );
      if (local_940 != (undefined *)0x0) {
        lVar4 = *local_6c0;
        local_948 = (undefined *)0x0;
        do {
          do {
            if (*local_6c0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_6c0 - lVar4,puVar1);
            }
            uVar7 = *(ulong *)(local_6c8 + (long)local_948 * 8);
            local_690 = uVar7;
            FUN_01530740();
            local_6d1 = (byte)uVar7;
            _memset(auStack_720,0,0x40);
            puVar3 = local_670;
            (*(code *)PTR__objc_retain_02578638)();
            local_980 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_720,
                       auStack_3b8,0x10);
            if (local_980 != (undefined *)0x0) {
              lVar5 = *local_710;
              local_988 = (undefined *)0x0;
              do {
                do {
                  if (*local_710 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_710 - lVar5,puVar3);
                  }
                  uVar8 = *(ulong *)(local_718 + (long)local_988 * 8);
                  local_6e0 = uVar8;
                  _NSSelectorFromString();
                  uVar7 = local_690;
                  local_728 = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_690,PTR_s_respondsToSelector__026ca818,uVar8);
                  if (((uVar7 & 1) != 0) &&
                     (((local_6d1 & 1) == 0 ||
                      ((uVar7 = local_6e0,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_6e0,PTR_s_isEqualToString__0269ccc8,&cf_setSearchContact_),
                       (uVar7 & 1) == 0 &&
                       (uVar7 = local_6e0,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_6e0,PTR_s_isEqualToString__0269ccc8,&cf_setFilterContact_),
                       (uVar7 & 1) == 0)))))) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_690,local_728,local_550);
                    local_539 = 1;
                    local_554 = 1;
                    goto LAB_0155b2e0;
                  }
                  local_988 = local_988 + 1;
                } while (local_988 < local_980);
                local_980 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_720,
                           auStack_3b8,0x10);
                local_988 = (undefined *)0x0;
              } while (local_980 != (undefined *)0x0);
            }
            local_554 = 0;
LAB_0155b2e0:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_554 != 0) goto LAB_0155b814;
            _memset(auStack_770,0,0x40);
            puVar3 = local_680;
            (*(code *)PTR__objc_retain_02578638)();
            local_9c0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_770,
                       auStack_438,0x10);
            if (local_9c0 != (undefined *)0x0) {
              lVar5 = *local_760;
              local_9c8 = (undefined *)0x0;
              do {
                do {
                  if (*local_760 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_760 - lVar5,puVar3);
                  }
                  local_730 = *(undefined8 *)(local_768 + (long)local_9c8 * 8);
                  if (((local_6d1 & 1) == 0) &&
                     (uVar7 = local_690, FUN_01563e1c(local_690,local_730,local_550),
                     (uVar7 & 1) != 0)) {
                    local_539 = 1;
                    local_554 = 1;
                    goto LAB_0155b464;
                  }
                  local_9c8 = local_9c8 + 1;
                } while (local_9c8 < local_9c0);
                local_9c0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_770,
                           auStack_438,0x10);
                local_9c8 = (undefined *)0x0;
              } while (local_9c0 != (undefined *)0x0);
            }
            local_554 = 0;
LAB_0155b464:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_554 != 0) goto LAB_0155b814;
            _memset(auStack_7b8,0,0x40);
            puVar3 = local_678;
            (*(code *)PTR__objc_retain_02578638)();
            local_a00 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7b8,
                       auStack_4b8,0x10);
            if (local_a00 != (undefined *)0x0) {
              lVar5 = *local_7a8;
              local_a08 = (undefined *)0x0;
              do {
                do {
                  if (*local_7a8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_7a8 - lVar5,puVar3);
                  }
                  uVar6 = *(undefined8 *)(local_7b0 + (long)local_a08 * 8);
                  local_778 = uVar6;
                  _NSSelectorFromString();
                  uVar7 = local_690;
                  local_7c0 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_690,PTR_s_respondsToSelector__026ca818,uVar6);
                  if ((uVar7 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_690,local_7c0,local_560);
                    local_539 = 1;
                    local_554 = 1;
                    goto LAB_0155b608;
                  }
                  local_a08 = local_a08 + 1;
                } while (local_a08 < local_a00);
                local_a00 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7b8,
                           auStack_4b8,0x10);
                local_a08 = (undefined *)0x0;
              } while (local_a00 != (undefined *)0x0);
            }
            local_554 = 0;
LAB_0155b608:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_554 != 0) goto LAB_0155b814;
            _memset(auStack_808,0,0x40);
            puVar3 = local_688;
            (*(code *)PTR__objc_retain_02578638)();
            local_a40 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_808,
                       auStack_538,0x10);
            if (local_a40 != (undefined *)0x0) {
              lVar5 = *local_7f8;
              local_a48 = (undefined *)0x0;
              do {
                do {
                  if (*local_7f8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_7f8 - lVar5,puVar3);
                  }
                  local_7c8 = *(undefined8 *)(local_800 + (long)local_a48 * 8);
                  if (((local_6d1 & 1) == 0) &&
                     (uVar7 = local_690, FUN_01563e1c(local_690,local_7c8,local_560),
                     (uVar7 & 1) != 0)) {
                    local_539 = 1;
                    local_554 = 1;
                    goto LAB_0155b78c;
                  }
                  local_a48 = local_a48 + 1;
                } while (local_a48 < local_a40);
                local_a40 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_808,
                           auStack_538,0x10);
                local_a48 = (undefined *)0x0;
              } while (local_a40 != (undefined *)0x0);
            }
            local_554 = 0;
LAB_0155b78c:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_554 != 0) goto LAB_0155b814;
            local_948 = local_948 + 1;
          } while (local_948 < local_940);
          local_940 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6d0,auStack_338,
                     0x10);
          local_948 = (undefined *)0x0;
        } while (local_940 != (undefined *)0x0);
      }
      local_554 = 0;
LAB_0155b814:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (local_554 == 0) {
        local_539 = 0;
        local_554 = 1;
      }
      _objc_storeStrong(&local_688);
      _objc_storeStrong(&local_680,0);
      _objc_storeStrong(&local_678,0);
      _objc_storeStrong(&local_670,0);
      _objc_storeStrong(&local_5c8,0);
      _objc_storeStrong(&local_568,0);
    }
    _objc_storeStrong(&local_560,0);
  }
  _objc_storeStrong(&local_550);
  _objc_storeStrong(&local_548,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_539 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

