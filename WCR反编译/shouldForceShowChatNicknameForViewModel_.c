// shouldForceShowChatNicknameForViewModel: @ 010e8bc0

/* Function Stack Size: 0x18 bytes */

bool WCRefineNameplateHelper::shouldForceShowChatNicknameForViewModel_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong local_50;
  undefined1 local_41;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar1 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar1,param_3);
  if (local_30 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    _WCRForcedChatNicknameEnabled();
    if (((ulong)puVar1 & 1) == 0) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      uVar2 = local_30;
      FUN_010e8de4(local_30,PTR_s_chatContact_0269f7a8,"m_chatContact");
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      if (uVar2 == 0) {
        local_11 = 0;
        local_34 = 1;
      }
      else {
        FUN_010e8f98();
        local_41 = (undefined1)uVar2;
        if ((uVar2 & 1) == 0) {
          local_11 = DAT_028e33e0 & 1;
          local_34 = 1;
        }
        else {
          uVar2 = local_30;
          FUN_010e91e8();
          if ((uVar2 & 1) == 0) {
            if ((DAT_028e33e1 & 1) == 0) {
              local_11 = 0;
              local_34 = 1;
            }
            else {
              uVar2 = local_30;
              FUN_010e8de4(local_30,PTR_s_contact_026a0d10,"m_contact");
              _objc_retainAutoreleasedReturnValue();
              local_50 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isSelf_0269ff30);
              if ((uVar2 & 1) == 0) {
                uVar2 = local_30;
                FUN_010e92bc();
                local_11 = (byte)uVar2;
              }
              else {
                uVar2 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isSelf_0269ff30);
                local_11 = (byte)uVar2;
              }
              local_11 = local_11 & 1;
              local_34 = 1;
              _objc_storeStrong(&local_50,0);
            }
          }
          else {
            local_11 = 1;
            local_34 = 1;
          }
        }
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

