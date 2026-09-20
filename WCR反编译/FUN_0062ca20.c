// FUN_0062ca20 @ 0062ca20

/* WARNING: Removing unreachable block (ram,0x0062cb0c) */

void FUN_0062ca20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_90;
  char *local_88;
  char *local_80;
  undefined4 local_74;
  char *local_70;
  undefined1 *local_60;
  undefined1 *local_58 [3];
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,0);
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_40,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = (undefined1 *)0x0;
  local_58[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationTapAction_026a5f88);
  local_60 = puVar1;
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    pcVar2 = "MMServiceCenter";
    _objc_getClass(0);
    local_70 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_74 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_getService__0269d170;
      local_80 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_74 = 1;
      }
      else {
        pcVar3 = "CContactMgr";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_performSelector_withObject__026ca7c0,puVar1,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_74 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar2;
          if (pcVar2 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_performSelector_withObject__026ca7c0,
                       PTR_s_jumpToUserTimeline__026a5df8,pcVar2);
          }
          local_74 = 1;
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_80,0);
    }
  }
  else if (puVar1 + -2 == (undefined1 *)0x0) {
    pcVar2 = "MMServiceCenter";
    _objc_getClass(0);
    local_a0 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_74 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_getService__0269d170;
      local_a8 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_74 = 1;
      }
      else {
        pcVar3 = "CContactMgr";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_performSelector_withObject__026ca7c0,puVar1,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_74 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = pcVar2;
          if (pcVar2 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                       PTR_s_presentProfileCardForContact__0269e298,pcVar2);
          }
          local_74 = 1;
          _objc_storeStrong(&local_b8,0);
        }
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8,0);
    }
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass(puVar1 + -2);
    local_c0 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_74 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_getService__0269d170;
      local_c8 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_74 = 1;
      }
      else {
        pcVar3 = "CContactMgr";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_performSelector_withObject__026ca7c0,puVar1,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_74 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = pcVar2;
          if (pcVar2 == (char *)0x0) {
            local_74 = 1;
          }
          else {
            pcVar2 = "ContactInfoViewController";
            _objc_getClass();
            local_e0 = pcVar2;
            if (pcVar2 != (char *)0x0) {
              _objc_alloc_init();
              local_e8 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_setValue_forKey__0269d300,local_d8,&cf_m_contact);
              lVar4 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_performSelector__026ca7b8,
                         PTR_s_currentNavigationController_026a5e00);
              _objc_retainAutoreleasedReturnValue();
              local_f0 = lVar4;
              if (lVar4 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (lVar4,PTR_s_PushViewController_animated__0269cd40,local_e8,1);
              }
              _objc_storeStrong(&local_f0);
              _objc_storeStrong(&local_e8,0);
            }
            local_74 = 0;
          }
          _objc_storeStrong(&local_d8,0);
        }
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_c8,0);
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  return;
}

