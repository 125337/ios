// noteIncomingMessageForUsername: @ 016006ec

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatRuntime::noteIncomingMessageForUsername_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ID local_100;
  ulong local_f8;
  undefined *local_f0;
  ulong local_e8;
  byte local_e0;
  byte local_df;
  byte local_de;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  ID local_b8;
  byte local_a9;
  ulong local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  byte local_73;
  byte local_72;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_3c = 1;
    goto LAB_01600dc4;
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_temporarilyHiddenUsernames_026b1630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  uVar2 = local_38;
  FUN_015fdda8();
  puVar4 = PTR___dispatch_main_q_02578680;
  if ((uVar2 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_01600de0;
    local_50 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = IVar3;
    _dispatch_async(puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
    goto LAB_01600dc4;
  }
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_quickChatEnabled_026b1660);
  if (((ulong)puVar4 & 1) == 0) {
    local_3c = 1;
  }
  else {
    puVar4 = PTR_WCRQuickChatRuntime_026ce698;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRQuickChatRuntime_026ce698,PTR_s_runtimeCloudAllowed_026ae210);
    if (((ulong)puVar4 & 1) == 0) {
      local_3c = 1;
    }
    else {
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_quickChatLinkSuperFloat_026b1668);
      local_71 = (byte)puVar4;
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_quickChatBallFollowUnreadAvatar_026b1468)
      ;
      puVar4 = PTR___dispatch_main_q_02578680;
      local_72 = (byte)puVar5;
      bVar1 = 0;
      if (((ulong)puVar5 & 1) != 0) {
        bVar1 = local_71 ^ 1;
      }
      local_73 = bVar1 & 1;
      if (((bVar1 & 1) == 0) && ((local_71 & 1) == 0)) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_28;
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_01600e20;
        local_88 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = IVar3;
        _dispatch_async(puVar4,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_3c = 1;
        _objc_storeStrong(&local_80,0);
      }
      else {
        uVar2 = local_38;
        FUN_015fab58();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = local_38;
        local_a8 = uVar2;
        FUN_01600e60(local_38,uVar2,local_70);
        if ((uVar6 & 1) == 0) {
          local_3c = 1;
        }
        else {
          uVar2 = local_a8;
          FUN_015fac64();
          local_a9 = (byte)uVar2;
          puVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_quickChatIncludeMuted_026b17c0);
          if ((((ulong)puVar4 & 1) == 0) && ((local_a9 & 1) != 0)) {
            local_3c = 1;
          }
          else {
            puVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_quickChatIncludeFoldedGroups_026b17c8);
            if (((ulong)puVar4 & 1) == 0) {
              uVar2 = local_38;
              FUN_015fe0c0(local_38,local_a8);
              if ((uVar2 & 1) != 0) {
                local_3c = 1;
                goto LAB_01600da4;
              }
            }
            puVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_quickChatIncludePublicAccounts_026b17d0);
            if (((ulong)puVar4 & 1) == 0) {
              uVar2 = local_38;
              FUN_01601090(local_38,local_a8);
              if ((uVar2 & 1) != 0) {
                local_3c = 1;
                goto LAB_01600da4;
              }
            }
            puVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_quickChatIncludeServiceAccounts_026b17d8);
            if (((ulong)puVar4 & 1) == 0) {
              uVar2 = local_38;
              FUN_016011dc(local_38,local_a8);
              if ((uVar2 & 1) != 0) {
                local_3c = 1;
                goto LAB_01600da4;
              }
            }
            if ((local_a9 & 1) != 0) {
              puVar5 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_quickChatAlertMutedMessages_026b17e0);
              puVar4 = PTR___dispatch_main_q_02578680;
              if (((ulong)puVar5 & 1) == 0) {
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                IVar3 = local_28;
                local_d8 = PTR___NSConcreteStackBlock_02578660;
                local_d0 = 0xc2000000;
                local_cc = 0;
                local_c8 = FUN_01601784;
                local_c0 = &DAT_0257a800;
                (*(code *)PTR__objc_retain_02578638)();
                local_b8 = IVar3;
                _dispatch_async(puVar4,&local_d8);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                local_3c = 1;
                _objc_storeStrong(&local_b8,0);
                goto LAB_01600da4;
              }
            }
            puVar4 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            IVar3 = local_28;
            local_120 = PTR___NSConcreteStackBlock_02578660;
            local_118 = 0xc2000000;
            local_114 = 0;
            local_110 = FUN_016017c4;
            local_108 = &DAT_02586b90;
            local_e0 = local_73 & 1;
            (*(code *)PTR__objc_retain_02578638)();
            uVar2 = local_38;
            local_100 = IVar3;
            (*(code *)PTR__objc_retain_02578638)();
            puVar5 = local_70;
            local_f8 = uVar2;
            local_df = local_71 & 1;
            local_de = local_72 & 1;
            (*(code *)PTR__objc_retain_02578638)();
            uVar2 = local_a8;
            local_f0 = puVar5;
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = uVar2;
            _dispatch_async(puVar4,&local_120);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_storeStrong(&local_e8);
            _objc_storeStrong(&local_f0,0);
            _objc_storeStrong(&local_f8,0);
            _objc_storeStrong(&local_100,0);
            local_3c = 0;
          }
        }
LAB_01600da4:
        _objc_storeStrong(&local_a8,0);
      }
    }
  }
  _objc_storeStrong(&local_70,0);
LAB_01600dc4:
  _objc_storeStrong(&local_38,0);
  return;
}

