// FUN_006012bc @ 006012bc

/* WARNING: Removing unreachable block (ram,0x00601368) */

void FUN_006012bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong local_a8;
  char *local_a0;
  char *local_98;
  ulong local_90;
  undefined *local_88;
  ulong local_80;
  undefined4 local_74;
  ulong local_70 [2];
  undefined1 *local_60;
  undefined1 *local_58 [3];
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_026ce280;
  _objc_alloc_init();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_selectionChanged_0269e718);
  _objc_storeStrong(&local_40,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = (undefined1 *)0x0;
  local_58[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationTapAction_026a5f88);
  local_60 = puVar1;
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentSelfContact_026a5dd8);
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = uVar4;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jumpToUserTimeline__026a5df8,uVar4);
    }
    local_74 = 1;
    _objc_storeStrong(local_70,0);
  }
  else if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentSelfContact_026a5dd8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar4;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                 PTR_s_presentProfileCardForContact__0269e298,uVar4);
    }
    local_74 = 1;
    _objc_storeStrong(&local_80,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_triggerVisibleMessageAvatarClick_026a5de8,local_88,1);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentSelfContact_026a5dd8);
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar4;
      if (uVar4 == 0) {
        local_74 = 1;
      }
      else {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_openOfficialContactInfoForContac_026a5df0,uVar4,0,0);
        if ((uVar5 & 1) == 0) {
          pcVar6 = "ContactInfoViewController";
          _objc_getClass();
          local_98 = pcVar6;
          if (pcVar6 != (char *)0x0) {
            _objc_alloc_init();
            local_a0 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_setValue_forKey__0269d300,local_90,&cf_m_contact);
            uVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_performSelector__026ca7b8,
                       PTR_s_currentNavigationController_026a5e00);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = uVar4;
            if (uVar4 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_PushViewController_animated__0269cd40,local_a0,1);
            }
            _objc_storeStrong(&local_a8);
            _objc_storeStrong(&local_a0,0);
          }
          local_74 = 0;
        }
        else {
          local_74 = 1;
        }
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      local_74 = 1;
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  return;
}

