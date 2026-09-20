// FUN_001b682c @ 001b682c

void FUN_001b682c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_no_contact;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_001b6c90();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_empty_username;
    }
    else {
      uVar1 = local_40;
      FUN_001b7090();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40;
        FUN_001b7218();
        if ((uVar1 & 1) == 0) {
          uVar1 = local_30;
          FUN_001b4a3c(local_30,PTR_s_isSelf_0269ff30);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_30;
            FUN_001b4a3c(local_30,PTR_s_isYuanBao_0269ff38);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_30;
              FUN_001b4a3c(local_30,PTR_s_isAIAssistant_0269ff40);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_30;
                FUN_001b4a3c(local_30,PTR_s_isWeClawBot_0269ff48);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_30;
                  FUN_001b4a3c(local_30,PTR_s_isChatroom_0269e248);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = local_30;
                    FUN_001b4a3c(local_30,PTR_s_isBrandContact_0269d9c8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = local_30;
                      FUN_001b4a3c(local_30,PTR_s_isWeixinTeamContact_0269ff50);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_30;
                        FUN_001b4a3c(local_30,PTR_s_isPluginPresentedContact_0269ff58);
                        if ((uVar1 & 1) == 0) {
                          local_28 = (cfstringStruct *)0x0;
                        }
                        else {
                          (*(code *)PTR__objc_retain_02578638)();
                          local_28 = &cf_isPluginPresentedContact;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_28 = &cf_isWeixinTeamContact;
                      }
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_28 = &cf_isBrandContact;
                    }
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_isChatroom;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf_isWeClawBot;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf_isAIAssistant;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf_isYuanBao;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_isSelf;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_chatroom_username;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_system_username;
      }
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

