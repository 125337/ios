// updateNavigationLogs: @ 0090fc9c

/* Function Stack Size: 0x18 bytes */

void LogViewerViewController::updateNavigationLogs_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_componentsSeparatedByString__0269d3c0,&::cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_d0 = puVar3;
  _memset(auStack_140,0,0x40);
  uVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar6 = *local_130;
    local_180 = 0;
    do {
      do {
        if (*local_130 - lVar6 != 0) {
          _objc_enumerationMutation(*local_130 - lVar6,uVar2);
        }
        uVar7 = *(ulong *)(local_138 + local_180 * 8);
        local_100 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
        if (uVar7 != 0) {
          uVar7 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsString__0269d0b0,&cf_PUSH_);
          if ((uVar7 & 1) == 0) {
            uVar7 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsString__0269d0b0,&cf_POP);
            if ((uVar7 & 1) == 0) {
              uVar7 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_containsString__0269d0b0,&cf_PRESENT_);
              if ((uVar7 & 1) == 0) {
                uVar7 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_containsString__0269d0b0,&cf_DISMISS_);
                if ((uVar7 & 1) == 0) {
                  uVar7 = local_100;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_100,PTR_s_containsString__0269d0b0,&cf_viewDidLoad_);
                  if ((uVar7 & 1) == 0) {
                    uVar7 = local_100;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_100,PTR_s_containsString__0269d0b0,&cf_Appear_);
                    if ((uVar7 & 1) == 0) {
                      uVar7 = local_100;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_100,PTR_s_containsString__0269d0b0,&cf_Disappear_);
                      if ((uVar7 & 1) == 0) {
                        uVar7 = local_100;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_100,PTR_s_containsString__0269d0b0,&cf_Layout);
                        if ((uVar7 & 1) == 0) {
                          IVar4 = local_b0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b0,PTR_s_currentFilter_026aa1d0);
                          bVar1 = IVar4 == 0;
                        }
                        else {
                          IVar4 = local_b0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b0,PTR_s_currentFilter_026aa1d0);
                          bVar1 = true;
                          if (IVar4 != 0) {
                            IVar4 = local_b0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_b0,PTR_s_currentFilter_026aa1d0);
                            bVar1 = IVar4 == 8;
                          }
                        }
                      }
                      else {
                        IVar4 = local_b0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0)
                        ;
                        bVar1 = true;
                        if (IVar4 != 0) {
                          IVar4 = local_b0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b0,PTR_s_currentFilter_026aa1d0);
                          bVar1 = IVar4 == 7;
                        }
                      }
                    }
                    else {
                      IVar4 = local_b0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                      bVar1 = true;
                      if (IVar4 != 0) {
                        IVar4 = local_b0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0)
                        ;
                        bVar1 = IVar4 == 6;
                      }
                    }
                  }
                  else {
                    local_f8 = local_f8 + 1;
                    IVar4 = local_b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                    bVar1 = true;
                    if (IVar4 != 0) {
                      IVar4 = local_b0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                      bVar1 = IVar4 == 5;
                    }
                  }
                }
                else {
                  local_f0 = local_f0 + 1;
                  IVar4 = local_b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                  bVar1 = true;
                  if (IVar4 != 0) {
                    IVar4 = local_b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                    bVar1 = IVar4 == 4;
                  }
                }
              }
              else {
                local_e8 = local_e8 + 1;
                IVar4 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                bVar1 = true;
                if (IVar4 != 0) {
                  IVar4 = local_b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                  bVar1 = IVar4 == 3;
                }
              }
            }
            else {
              local_e0 = local_e0 + 1;
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
              bVar1 = true;
              if (IVar4 != 0) {
                IVar4 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
                bVar1 = IVar4 == 2;
              }
            }
          }
          else {
            local_d8 = local_d8 + 1;
            IVar4 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
            bVar1 = true;
            if (IVar4 != 0) {
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentFilter_026aa1d0);
              bVar1 = IVar4 == 1;
            }
          }
          if ((bVar1) &&
             (IVar4 = local_b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b0,PTR_s_lineMatchesKeyword__026aa1d8,local_100), (IVar4 & 1) == 0)) {
            bVar1 = false;
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_100);
          }
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_keywordFilter_026aa188);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (IVar5 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf____);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_statsLabel_026aa138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_keywordFilter_026aa188);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf____);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_statsLabel_026aa138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  bVar1 = false;
  if (puVar3 == (undefined *)0x0) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_keywordFilter_026aa188);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar5 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  if (bVar1) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_renderColoredNavigationLines__026aa1e0,local_d0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

