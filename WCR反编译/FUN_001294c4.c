// FUN_001294c4 @ 001294c4

void FUN_001294c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *local_c0 [2];
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  char *local_98 [3];
  long local_80;
  char *local_78;
  char *local_70;
  long local_68;
  ulong local_60;
  int local_58;
  long local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  if (((local_38 == (undefined *)0x0) ||
      (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
      uVar1 == 0)) ||
     (uVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar1 & 1) != 0)) {
    local_58 = 1;
  }
  else {
    uVar1 = local_40;
    FUN_0012a068();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar1;
    if (uVar1 == 0) {
      lVar2 = local_48;
      FUN_001181e8(local_48,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40;
      local_68 = lVar2;
      FUN_0012a4cc(local_40,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_60;
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(&local_68,0);
    }
    if (local_60 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R_u7bDe);
      local_58 = 1;
    }
    else {
      puVar4 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                 PTR_s_openOfficialProfileForContact__0269efc0,local_60);
      if (((ulong)puVar4 & 1) == 0) {
        pcVar5 = "ContactInfoViewController";
        _objc_getClass();
        local_70 = pcVar5;
        if (pcVar5 == (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
          local_58 = 1;
        }
        else {
          _objc_alloc_init();
          local_78 = pcVar5;
          if (pcVar5 == (char *)0x0) {
            local_58 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_setValue_forKey__0269d300,local_60,&cf_m_contact);
            lVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
            if (lVar2 != 0) {
              lVar6 = local_48;
              FUN_0012a068(lVar2);
              _objc_retainAutoreleasedReturnValue();
              local_80 = lVar6;
              if (lVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_setValue_forKey__0269d300,lVar6,&cf_m_chatContact);
              }
              _objc_storeStrong(&local_80,0);
            }
            pcVar5 = local_78;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_uiFromScene);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            pcVar5 = "CContactMgr";
            _objc_getClass();
            FUN_0010f1e0();
            _objc_retainAutoreleasedReturnValue();
            local_98[0] = pcVar5;
            if (pcVar5 != (char *)0x0) {
              pcVar7 = &cf_getContactsFromServer_;
              _NSSelectorFromString();
              pcVar8 = local_98[0];
              local_a0 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_98[0],PTR_s_respondsToSelector__026ca818,pcVar7);
              pcVar5 = local_98[0];
              pcVar7 = local_a0;
              if (((ulong)pcVar8 & 1) != 0) {
                local_30 = local_40;
                puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_30,1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar7);
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
              pcVar7 = &cf_updateContactFromServer;
              _NSSelectorFromString();
              pcVar5 = local_78;
              local_b0 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78,PTR_s_respondsToSelector__026ca818,pcVar7);
              if (((ulong)pcVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_78,local_b0);
              }
            }
            local_c0[0] = (undefined *)0x0;
            pcVar7 = &cf_currentNavigationController;
            _NSSelectorFromString();
            puVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_respondsToSelector__026ca818,pcVar7);
            if (((ulong)puVar4 & 1) != 0) {
              puVar9 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_c0[0];
              local_c0[0] = puVar9;
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            if ((local_c0[0] == (undefined *)0x0) &&
               (puVar4 = local_38,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_38,PTR_s_respondsToSelector__026ca818,
                          PTR_s_navigationController_0269d458), ((ulong)puVar4 & 1) != 0)) {
              puVar9 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_c0[0];
              local_c0[0] = puVar9;
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            if (local_c0[0] == (undefined *)0x0) {
              puVar9 = PTR_WCRefineHelper_026ce000;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_c0[0];
              local_c0[0] = puVar9;
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            if (local_c0[0] == (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
              local_58 = 1;
            }
            else {
              puVar4 = local_c0[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0[0],PTR_s_respondsToSelector__026ca818,
                         PTR_s_PushViewController_animated__0269cd40);
              if (((ulong)puVar4 & 1) == 0) {
                puVar4 = local_c0[0];
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0[0],PTR_s_respondsToSelector__026ca818,
                           PTR_s_pushViewController_animated__0269d590);
                if (((ulong)puVar4 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c0[0],PTR_s_pushViewController_animated__0269d590,local_78,1);
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0[0],PTR_s_PushViewController_animated__0269cd40,local_78,1);
              }
              local_58 = 0;
            }
            _objc_storeStrong(local_c0);
            _objc_storeStrong(local_98,0);
          }
          _objc_storeStrong(&local_78,0);
        }
      }
      else {
        local_58 = 1;
      }
    }
    _objc_storeStrong(&local_60,0);
    if (local_58 == 0) {
      local_58 = 0;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

