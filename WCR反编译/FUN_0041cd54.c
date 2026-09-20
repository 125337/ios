// FUN_0041cd54 @ 0041cd54

void FUN_0041cd54(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long local_50;
  undefined1 local_41;
  undefined *local_40;
  uint local_38;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_messageDanmakuEnabled_026a36f8);
  if (((ulong)puVar2 & 1) != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
    FUN_00419f54();
    if ((uVar1 & 1) == 0) {
      uVar1 = (uint)*(undefined8 *)(param_1 + 0x28);
      FUN_0041d1a8();
      if ((uVar1 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x30);
        FUN_0041a2fc(uVar3,local_28);
        if ((uVar3 & 1) != 0) {
          puVar2 = PTR_WCRQuickChatRuntime_026ce698;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_40 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_isCurrentConversationUsername__026a3708,
                     *(undefined8 *)(param_1 + 0x30));
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isUsernameInFoldedChatBox__026a3710,
                       *(undefined8 *)(param_1 + 0x30));
            local_41 = SUB81(puVar2,0);
            if (((ulong)puVar2 & 1) == 0) {
              puVar2 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isUsernameMuted__026a3720,*(undefined8 *)(param_1 + 0x30));
              if ((((ulong)puVar2 & 1) == 0) ||
                 (puVar2 = local_28,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_28,PTR_s_messageDanmakuIncludeMutedEnable_026a3728),
                 ((ulong)puVar2 & 1) != 0)) goto LAB_0041cfbc;
              local_38 = 1;
            }
            else {
              puVar2 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_messageDanmakuIncludeFoldedChats_026a3718);
              if (((ulong)puVar2 & 1) == 0) {
                local_38 = 1;
              }
              else {
LAB_0041cfbc:
                puVar2 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_messageDanmakuQuickChatOnlyEnabl_026a3730);
                if ((((ulong)puVar2 & 1) == 0) ||
                   (puVar2 = local_40,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_40,PTR_s_isUsernameInSidebarList__026a3738,
                              *(undefined8 *)(param_1 + 0x30)), ((ulong)puVar2 & 1) != 0)) {
                  uVar1 = (uint)*(undefined8 *)(param_1 + 0x38);
                  FUN_0041d3f0();
                  if ((uVar1 & 1) == 0) {
                    lVar4 = *(long *)(param_1 + 0x28);
                    FUN_0041d784();
                    _objc_retainAutoreleasedReturnValue();
                    local_50 = lVar4;
                    if (lVar4 != 0) {
                      puVar2 = PTR_WCRefineKeywordAlertDanmakuPresenter_026ce6a0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineKeywordAlertDanmakuPresenter_026ce6a0,
                                 PTR_s_sharedPresenter_026a3740);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(puVar2);
                    }
                    local_38 = (uint)(lVar4 == 0);
                    _objc_storeStrong(&local_50,0);
                  }
                  else {
                    local_38 = 1;
                  }
                }
                else {
                  local_38 = 1;
                }
              }
            }
          }
          else {
            local_38 = 1;
          }
          _objc_storeStrong(&local_40,0);
          goto LAB_0041d124;
        }
      }
    }
  }
  local_38 = 1;
LAB_0041d124:
  _objc_storeStrong(&local_28,0);
  return;
}

