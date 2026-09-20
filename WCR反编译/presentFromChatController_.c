// presentFromChatController: @ 01dc9958

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsViewController::presentFromChatController_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_e8;
  undefined *local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  byte local_71;
  ulong local_68 [4];
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_3c = 1;
    goto LAB_01dc9ed4;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_T_uO_);
    local_3c = 1;
    goto LAB_01dc9ed4;
  }
  local_48 = 0;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
  if ((uVar2 & 1) != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_GetContact_0269d2c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (local_48 == 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_68[0] = 0;
  uVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_68[0];
  local_68[0] = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar4 = local_68[0];
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_68[0];
  local_68[0] = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_68[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS_MRO);
    local_3c = 1;
  }
  else {
    puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_68[0]);
    local_71 = (byte)puVar1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
                 local_68[0]);
      if (((ulong)puVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elgwO_);
        local_3c = 1;
        goto LAB_01dc9eb4;
      }
    }
    local_89 = 0;
    local_99 = 0;
    local_e8 = local_48;
    if ((local_71 & 1) == 0) {
      FUN_01dc9394(local_48,local_68[0]);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_e8;
    }
    else {
      FUN_01dc9044(local_48,local_68[0]);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_e8;
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    puVar1 = PTR_WCRefineSessionStatsViewController_026ce2c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = puVar1;
    FUN_01dc977c(local_38,puVar1);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_80,0);
    local_3c = 0;
  }
LAB_01dc9eb4:
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_48,0);
LAB_01dc9ed4:
  _objc_storeStrong(&local_38,0);
  return;
}

