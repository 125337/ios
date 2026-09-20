// executeItem:chatName:invitee: @ 01135598

/* Function Stack Size: 0x28 bytes */

bool WCRefineQuickReplyStore::executeItem_chatName_invitee_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong local_68;
  undefined4 local_5c;
  long local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar3 = local_38;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_48;
  local_58 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_11 = 0;
    local_5c = 1;
  }
  else {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_text);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_repository)
      ;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_invite);
        if ((uVar1 & 1) == 0) {
          local_11 = 0;
          local_5c = 1;
        }
        else {
          uVar1 = local_40;
          FUN_01130f58();
          _objc_retainAutoreleasedReturnValue();
          local_68 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            _objc_storeStrong(&local_68,local_58);
          }
          uVar1 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
          if ((uVar1 == 0) ||
             (uVar1 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasSuffix__0269d018,&cf__chatroom)
             , (uVar1 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__WyJ_N_O_u_J)
            ;
            local_11 = 0;
          }
          else {
            uVar1 = local_50;
            FUN_01135a40(local_50,local_68);
            if ((uVar1 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__J1Y_);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__S_J);
            }
            local_11 = (byte)uVar1 & 1;
          }
          local_5c = 1;
          _objc_storeStrong(&local_68,0);
        }
      }
      else {
        lVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (lVar3 == 0) {
          local_11 = 0;
          local_5c = 1;
        }
        else {
          puVar4 = PTR_WCRefineVoicePackSender_026ce128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoicePackSender_026ce128,
                     PTR_s_sendRepositoryCode_toChatName__0269efa8,local_50,local_58);
          local_11 = (byte)puVar4 & 1;
          local_5c = 1;
        }
      }
    }
    else {
      lVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (lVar3 == 0) {
        local_11 = 0;
        local_5c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_50,
                   local_58);
        local_11 = 1;
        local_5c = 1;
      }
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

