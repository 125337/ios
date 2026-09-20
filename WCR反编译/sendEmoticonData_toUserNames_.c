// sendEmoticonData:toUserNames: @ 00f4bd14

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::sendEmoticonData_toUserNames_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *local_250;
  ulong local_1f8;
  ulong local_1f0;
  cfstringStruct *local_190;
  undefined8 local_180;
  ID local_178 [3];
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  long local_120;
  long local_118;
  undefined *local_110;
  ID local_108 [4];
  ID local_e8;
  ID local_e0;
  ID local_d8;
  undefined4 local_cc;
  ulong local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  lVar7 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if ((lVar7 == 0) ||
     (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     IVar4 = local_b0, uVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gbO);
    local_cc = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass("CContactMgr");
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_serviceOfClass__0269f7e0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = 0;
    local_d8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
    if ((IVar4 & 1) != 0) {
      IVar5 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_e0;
      local_e0 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    local_e8 = 0;
    IVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_e8;
    local_e8 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_e8;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
    if (((IVar4 & 1) == 0) ||
       (IVar5 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
       IVar4 = local_b0, IVar5 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS_MR_S);
      local_cc = 1;
    }
    else {
      pcVar3 = "CMessageMgr";
      _objc_getClass("CMessageMgr");
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_serviceOfClass__0269f7e0,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_110 = PTR_s_AddEmoticonMsg_MsgWrap__026a1e58;
      local_108[0] = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_respondsToSelector__026ca818,PTR_s_AddEmoticonMsg_MsgWrap__026a1e58);
      if ((IVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRHr_gN_ecSh_);
        local_cc = 1;
      }
      else {
        local_118 = 0;
        _memset(auStack_160,0,0x40);
        uVar2 = local_c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10
                  );
        if (local_1f0 != 0) {
          lVar7 = *local_150;
          local_1f8 = 0;
          do {
            do {
              if (*local_150 - lVar7 != 0) {
                _objc_enumerationMutation(*local_150 - lVar7,uVar2);
              }
              lVar8 = *(long *)(local_158 + local_1f8 * 8);
              puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              local_120 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_178[2] = lVar8;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              IVar4 = local_178[2];
              (*(code *)PTR__objc_msgSend_02578628)(local_178[2],PTR_s_length_0269cca0);
              if (IVar4 == 0) {
                local_cc = 4;
              }
              else {
                local_178[1] = 0;
                local_180 = 0;
                IVar4 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b0,PTR_s_emoticonMessageForData_asSelfie__026a3dc0,local_c0,0,
                           &local_180);
                _objc_retainAutoreleasedReturnValue();
                _objc_storeStrong(local_178 + 1,local_180);
                local_178[0] = IVar4;
                if (IVar4 == 0) {
                  local_cc = 4;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar4,PTR_s_setValue_forKey__0269d300,local_e8,&cf_m_nsFromUsr);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178[0],PTR_s_setValue_forKey__0269d300,local_178[2],&cf_m_nsToUsr
                            );
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_108[0],local_110,local_178[2],local_178[0]);
                  local_118 = local_118 + 1;
                  local_cc = 0;
                }
                _objc_storeStrong(local_178);
                _objc_storeStrong(local_178 + 1,0);
              }
              _objc_storeStrong(local_178 + 2,0);
              local_1f8 = local_1f8 + 1;
            } while (local_1f8 < local_1f0);
            local_1f0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                       0x10);
            local_1f8 = 0;
          } while (local_1f0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_118 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S1Y_);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          puVar6 = PTR_WCRefineHelper_026ce000;
          bVar1 = local_118 != 1;
          if (bVar1) {
            local_250 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__S0R
                      );
            _objc_retainAutoreleasedReturnValue();
            local_190 = local_250;
          }
          else {
            local_250 = &cf__Sh_;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78,local_250);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_190);
          }
        }
        local_cc = 0;
      }
      _objc_storeStrong(local_108,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

