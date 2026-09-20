// confirmClearContactsFriendAddTimeMarkerEntry: @ 01a698e0

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::confirmClearContactsFriendAddTimeMarkerEntry_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  ulong local_1b0;
  ulong local_1a8;
  undefined *local_178;
  ID local_170;
  ID local_168;
  undefined *local_160;
  undefined1 local_151;
  ID local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  long local_100;
  long local_f8;
  ID local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    pcVar4 = "MMServiceCenter";
    _objc_getClass();
    pcVar5 = "CContactMgr";
    local_d0 = pcVar4;
    _objc_getClass();
    local_d8 = pcVar5;
    if (((local_d0 == (char *)0x0) || (pcVar5 == (char *)0x0)) ||
       (pcVar4 = local_d0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar4 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NgRNS_u);
      local_c4 = 1;
    }
    else {
      pcVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar4 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NgRNS_u);
        local_c4 = 1;
      }
      else {
        pcVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_getService__0269d170,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NgRNS_u);
          local_c4 = 1;
        }
        else {
          IVar6 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_wcrContactsFriendAddTimeAllConta_026bd240,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = 0;
          local_100 = 0;
          local_f0 = IVar6;
          _memset(auStack_148,0,0x40);
          IVar6 = local_f0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1a8 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          if (local_1a8 != 0) {
            lVar9 = *local_138;
            local_1b0 = 0;
            do {
              do {
                if (*local_138 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_138 - lVar9,IVar6);
                }
                local_108 = *(undefined8 *)(local_140 + local_1b0 * 8);
                IVar7 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b0,PTR_s_wcrContactsFriendAddTimeDescript_026bd248,local_108);
                _objc_retainAutoreleasedReturnValue();
                local_150 = IVar7;
                (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_length_0269cca0);
                IVar8 = local_150;
                if (IVar7 == 0) {
                  local_c4 = 3;
                }
                else {
                  FUN_01a69fd4();
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR_s_rangeOfString__0269d838;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  bVar1 = IVar8 != 0x7fffffffffffffff;
                  local_168 = IVar8;
                  local_160 = puVar2;
                  (*(code *)PTR__objc_release_02578630)(IVar7);
                  local_151 = bVar1;
                  if (bVar1) {
                    IVar8 = local_150;
                    FUN_01a69fe0();
                    _objc_retainAutoreleasedReturnValue();
                    local_170 = IVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar8,PTR_s_isEqualToString__0269ccc8,local_150);
                    if ((IVar8 & 1) == 0) {
                      IVar8 = local_b0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_b0,PTR_s_wcrContactsFriendAddTimeWriteDes_026bd250,local_170,
                                 local_108,local_e8);
                      if ((IVar8 & 1) == 0) {
                        local_100 = local_100 + 1;
                      }
                      else {
                        local_f8 = local_f8 + 1;
                      }
                      local_c4 = 0;
                    }
                    else {
                      local_c4 = 3;
                    }
                    _objc_storeStrong(&local_170,0);
                  }
                  else {
                    local_c4 = 3;
                  }
                }
                _objc_storeStrong(&local_150,0);
                local_1b0 = local_1b0 + 1;
              } while (local_1b0 < local_1a8);
              local_1a8 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,
                         auStack_a8,0x10);
              local_1b0 = 0;
            } while (local_1a8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(IVar6);
          if ((local_f8 == 0) && (local_100 == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gSsSndveh);
            local_c4 = 1;
          }
          else {
            local_178 = (undefined *)0x0;
            if (local_100 == 0) {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf__nd);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_178;
              local_178 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf__nd);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_178;
              local_178 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                       &cf_WCRefine,local_178,&cf_bwSN);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_storeStrong(&local_178,0);
            local_c4 = 0;
          }
          _objc_storeStrong(&local_f0,0);
        }
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_e0,0);
    }
  }
  else {
    local_c4 = 1;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

