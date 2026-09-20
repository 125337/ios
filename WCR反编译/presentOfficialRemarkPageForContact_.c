// presentOfficialRemarkPageForContact: @ 0112d0b0

/* Function Stack Size: 0x18 bytes */

bool WCRefineQuickRemarkEditor::presentOfficialRemarkPageForContact_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *local_170;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  char *local_b0;
  undefined *local_a8;
  char *local_a0;
  char *local_98;
  cfstringStruct *local_90 [7];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_canEditRemarkForContact__026af258,local_40);
  if ((IVar1 & 1) == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    pcVar2 = &cf_NewRemarkViewController;
    _NSClassFromString();
    local_50 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
      local_21 = 0;
      local_44 = 1;
    }
    else {
      _objc_alloc_init();
      local_58 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
        local_21 = 0;
        local_44 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setM_contact__0269fff0);
        if (((ulong)pcVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setValue_forKey__0269d300,local_40,&cf_m_contact);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_contact__0269fff0,local_40);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedEditState__0269ffe8);
        pcVar2 = local_58;
        if (((ulong)pcVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_setValue_forKey__0269d300,puVar4,&cf_needEditState);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setNeedEditState__0269ffe8,1);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setContactInfoViewSource__026af260);
        pcVar2 = local_58;
        if (((ulong)pcVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_setValue_forKey__0269d300,puVar4,&cf_contactInfoViewSource);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setContactInfoViewSource__026af260,0)
          ;
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setFirstShowSection__026af268);
        pcVar2 = local_58;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_setValue_forKey__0269d300,pcVar3,&cf_firstShowSection);
          (*(code *)PTR__objc_release_02578630)();
        }
        else {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFirstShowSection__026af268,0);
        }
        FUN_0112d9e8();
        _objc_retainAutoreleasedReturnValue();
        local_90[0] = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
          local_21 = 0;
          local_44 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineQuickRemarkEditor_026ce820,
                     PTR_s_markOwnedOfficialController__026af270,local_58);
          local_170 = "MMUINavigationController";
          _objc_getClass();
          if (local_170 == (char *)0x0) {
            local_170 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          }
          local_98 = local_170;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_a0 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_setModalPresentationStyle__0269d2a8,1);
          FUN_0112db74(local_a0);
          puVar4 = PTR_WCRQuickRemarkOfficialPresentationProxy_026cecf8;
          _objc_alloc_init();
          local_a8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setController__0269d2d8,local_58);
          pcVar5 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_presentationController_026af278);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = pcVar5;
          if (pcVar5 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_setDelegate__026ca910,local_a8);
          }
          _objc_setAssociatedObject(local_a0,&DAT_028e3578,local_a8,1);
          pcVar2 = local_90[0];
          pcVar5 = local_a0;
          local_e8 = PTR___NSConcreteStackBlock_02578660;
          local_e0 = 0xc2000000;
          local_dc = 0;
          local_d8 = FUN_0112e094;
          local_d0 = &DAT_025839b0;
          (*(code *)PTR__objc_retain_02578638)();
          puVar4 = local_a8;
          local_c8 = pcVar5;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar3 = local_58;
          local_c0 = puVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_presentViewController_animated_c_0269d2b0,pcVar5,1,&local_e8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineQuickRemarkEditor_026ce820,
                     PTR_s_focusOwnedOfficialControllerIfNe_026a68f8,local_58);
          local_21 = 1;
          local_44 = 1;
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_c8,0);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(local_90,0);
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

