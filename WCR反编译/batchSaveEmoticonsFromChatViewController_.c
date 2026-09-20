// batchSaveEmoticonsFromChatViewController: @ 00f510e8

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::batchSaveEmoticonsFromChatViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ID local_200;
  ulong local_1b0;
  ulong local_1a8;
  ID local_180;
  ID local_178 [4];
  int local_154;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  ulong local_f0;
  uint local_e4;
  ulong local_e0;
  SEL local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  if (local_e0 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_Nmo_);
    local_e4 = 1;
  }
  else {
    local_f0 = 0;
    local_f8 = PTR_s_getSelectedMsgs_026ac558;
    uVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_getSelectedMsgs_026ac558);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_f8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_f0;
      local_f0 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_f0;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0),
       uVar1 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_Nmo_);
      local_e4 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_100 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_108 = puVar4;
      _memset(auStack_150,0,0x40);
      uVar1 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      if (local_1a8 != 0) {
        lVar8 = *local_140;
        local_1b0 = 0;
        do {
          do {
            if (*local_140 - lVar8 != 0) {
              _objc_enumerationMutation(*local_140 - lVar8,uVar1);
            }
            uVar9 = *(undefined8 *)(local_148 + local_1b0 * 8);
            local_154 = 0;
            local_110 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_154 = (int)uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if (local_154 == 0x2f) {
              IVar6 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,local_110);
              _objc_retainAutoreleasedReturnValue();
              local_178[0] = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0);
              if (IVar6 == 0) {
                local_e4 = 3;
              }
              else {
                puVar3 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_containsObject__0269cbb8,local_178[0]);
                if (((ulong)puVar3 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_108,PTR_s_addObject__0269d180,local_178[0]);
                  IVar6 = local_d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d0,PTR_s_downloadCandidatesFromMessageWra_026ac348,local_110);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = local_100;
                  local_c8 = &cf_md5;
                  local_b8 = local_178[0];
                  local_c0 = &cf_urls;
                  local_200 = IVar6;
                  if (IVar6 == 0) {
                    local_200 = *(ID *)PTR____NSArray0___02578280;
                  }
                  local_b0 = local_200;
                  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_180 = IVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  _objc_storeStrong(&local_180,0);
                  local_e4 = 0;
                }
                else {
                  local_e4 = 3;
                }
              }
              _objc_storeStrong(local_178,0);
            }
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < local_1a8);
          local_1a8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1b0 = 0;
        } while (local_1a8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar7 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
      puVar4 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar7 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_ck_WOX_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_batchSaveEmoticonItems_index_suc_026ac550,local_100,0,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_Nh_mo_);
      }
      local_e4 = (uint)(puVar7 == (undefined *)0x0);
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

