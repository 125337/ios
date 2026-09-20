// FUN_004fb95c @ 004fb95c

void FUN_004fb95c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  int local_40;
  ulong local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (((local_28 == (undefined *)0x0) ||
      (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      uVar1 == 0)) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar1 & 1) != 0)) {
    local_40 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    local_48 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_40 = 1;
      }
      else {
        pcVar2 = "CContactMgr";
        _objc_getClass();
        local_58 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_40 = 1;
        }
        else {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                     pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar3;
          if (pcVar3 == (char *)0x0) {
            local_40 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_performSelector_withObject__026ca7c0,
                       PTR_s_getContactByName__0269d178,local_30);
            _objc_retainAutoreleasedReturnValue();
            local_68 = pcVar3;
            if (pcVar3 == (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                         &cf__g_b0R_u7bDe);
              local_40 = 1;
            }
            else {
              puVar4 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                         PTR_s_openOfficialProfileForContact__0269efc0,pcVar3);
              if (((ulong)puVar4 & 1) == 0) {
                pcVar2 = "ContactInfoViewController";
                _objc_getClass();
                local_70 = pcVar2;
                if (pcVar2 == (char *)0x0) {
                  local_40 = 1;
                }
                else {
                  _objc_alloc_init();
                  local_78 = pcVar2;
                  if (pcVar2 == (char *)0x0) {
                    local_40 = 1;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar2,PTR_s_setValue_forKey__0269d300,local_68,&cf_m_contact);
                    local_80 = (undefined *)0x0;
                    pcVar5 = &cf_currentNavigationController;
                    _NSSelectorFromString();
                    puVar4 = local_28;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_28,PTR_s_respondsToSelector__026ca818,pcVar5);
                    if (((ulong)puVar4 & 1) != 0) {
                      puVar6 = local_28;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_28,PTR_s_performSelector__026ca7b8,pcVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = local_80;
                      local_80 = puVar6;
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                    }
                    if (local_80 == (undefined *)0x0) {
                      puVar6 = local_28;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_28,PTR_s_navigationController_0269d458);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = local_80;
                      local_80 = puVar6;
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                    }
                    if (local_80 == (undefined *)0x0) {
                      puVar6 = PTR_WCRefineHelper_026ce000;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = local_80;
                      local_80 = puVar6;
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                    }
                    puVar4 = local_80;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_80,PTR_s_respondsToSelector__026ca818,
                               PTR_s_PushViewController_animated__0269cd40);
                    if (((ulong)puVar4 & 1) == 0) {
                      puVar4 = local_80;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_80,PTR_s_respondsToSelector__026ca818,
                                 PTR_s_pushViewController_animated__0269d590);
                      if (((ulong)puVar4 & 1) != 0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_80,PTR_s_pushViewController_animated__0269d590,local_78,1);
                      }
                      local_40 = 0;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_80,PTR_s_PushViewController_animated__0269cd40,local_78,1);
                      local_40 = 1;
                    }
                    _objc_storeStrong(&local_80,0);
                  }
                  _objc_storeStrong(&local_78,0);
                }
              }
              else {
                local_40 = 1;
              }
            }
            _objc_storeStrong(&local_68,0);
          }
          _objc_storeStrong(&local_60,0);
        }
      }
      _objc_storeStrong(&local_50,0);
      if (local_40 == 0) {
        local_40 = 0;
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

