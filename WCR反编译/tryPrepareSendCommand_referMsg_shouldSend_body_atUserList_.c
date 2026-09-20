// tryPrepareSendCommand:referMsg:shouldSend:body:atUserList: @ 009dd4d0

/* Function Stack Size: 0x38 bytes */

bool WCRefineAnonymousAtHelper::tryPrepareSendCommand_referMsg_shouldSend_body_atUserList_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool *param_5,ID *param_6,ID *param_7)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ID local_e8;
  ID local_a8;
  byte local_99;
  ID local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  undefined8 local_78;
  long local_70;
  byte local_65 [5];
  ID *local_60;
  ID *local_58;
  bool *local_50;
  ID local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  if (param_5 != (bool *)0x0) {
    *(undefined1 *)param_5 = 0;
  }
  if (param_6 != (ID *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (ID *)0x0) {
    *param_7 = 0;
  }
  IVar3 = local_30;
  local_60 = param_7;
  local_58 = param_6;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isFeatureAllowed_026ab0f0);
  if ((IVar3 & 1) == 0) {
    local_21 = 0;
    local_65[1] = 1;
    local_65[2] = 0;
    local_65[3] = 0;
    local_65[4] = 0;
    goto LAB_009dda90;
  }
  local_65[0] = 0;
  local_70 = 0;
  local_78 = 0;
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_wcr_parseSendCommand_isAtAll_bod_026ab0f8,local_40,local_65,&local_78);
  _objc_storeStrong(&local_70,local_78);
  if ((IVar3 & 1) == 0) {
    local_21 = 0;
    local_65[1] = 1;
    local_65[2] = 0;
    local_65[3] = 0;
    local_65[4] = 0;
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_currentGroupUserName_026ab028);
    _objc_retainAutoreleasedReturnValue();
    local_80 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_W_Jel_ST_);
      local_21 = 1;
      local_65[1] = 1;
      local_65[2] = 0;
      local_65[3] = 0;
      local_65[4] = 0;
    }
    else {
      lVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (lVar4 == 0) {
        pcVar2 = &cf_eQQ_Y;
        if ((local_65[0] & 1) == 0) {
          pcVar2 = &cf_eQQ_Y;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
        local_21 = 1;
        local_65[1] = 1;
        local_65[2] = 0;
        local_65[3] = 0;
        local_65[4] = 0;
      }
      else {
        IVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_wcr_displayContentFromInput_pref_026ab100,local_70,0,1);
        _objc_retainAutoreleasedReturnValue();
        local_88 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
        if (IVar3 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQQ_);
          local_21 = 1;
          local_65[1] = 1;
          local_65[2] = 0;
          local_65[3] = 0;
          local_65[4] = 0;
        }
        else {
          IVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_wcr_isValidReferMsg__026ab060,local_48);
          local_99 = 0;
          bVar1 = (IVar3 & 1) == 0;
          if (bVar1) {
            local_e8 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_wcr_currentReplyingMessage_026ab078);
            _objc_retainAutoreleasedReturnValue();
            local_98 = local_e8;
          }
          else {
            local_e8 = local_48;
          }
          local_99 = bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = local_e8;
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          IVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_wcr_isValidReferMsg__026ab060,local_90);
          if ((IVar3 & 1) == 0) {
            pcVar2 = &cf_HQ__u;
            if ((local_65[0] & 1) == 0) {
              pcVar2 = &cf_HQ__u;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
            local_21 = 1;
            local_65[1] = 1;
            local_65[2] = 0;
            local_65[3] = 0;
            local_65[4] = 0;
          }
          else {
            local_a8 = 0;
            if ((local_65[0] & 1) == 0) {
              IVar5 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_wcr_senderUserNameFromReferMsg__026ab108,local_90);
              _objc_retainAutoreleasedReturnValue();
              IVar3 = local_a8;
              local_a8 = IVar5;
              (*(code *)PTR__objc_release_02578630)(IVar3);
              IVar3 = local_a8;
              (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
              if (IVar3 != 0) goto LAB_009dd9bc;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS__umo_vS
                        );
            }
            else {
              _objc_storeStrong(&local_a8,&cf_notify_all);
LAB_009dd9bc:
              IVar3 = local_88;
              if (local_50 != (bool *)0x0) {
                *(undefined1 *)local_50 = 1;
              }
              if (local_58 != (ID *)0x0) {
                _objc_retainAutorelease();
                *local_58 = IVar3;
              }
              IVar3 = local_a8;
              if (local_60 != (ID *)0x0) {
                _objc_retainAutorelease();
                *local_60 = IVar3;
              }
            }
            local_21 = 1;
            local_65[1] = 1;
            local_65[2] = 0;
            local_65[3] = 0;
            local_65[4] = 0;
            _objc_storeStrong(&local_a8,0);
          }
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70,0);
LAB_009dda90:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

