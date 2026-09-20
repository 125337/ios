// openProfileForHistoryItem:triggerAddFriend: @ 0185126c

/* Function Stack Size: 0x1c bytes */

void WCRefineBatchDeleteFriendHistoryViewController::openProfileForHistoryItem_triggerAddFriend_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  dispatch_time_t dVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  ID local_78 [4];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_40;
  byte local_39;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  local_39 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SSU_eHe);
    local_40 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contactForHistoryItem__026b6928,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elST_N_S);
      local_40 = 1;
    }
    else {
      pcVar4 = &cf_ContactInfoViewController;
      _NSClassFromString();
      local_50 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
        local_40 = 1;
      }
      else {
        _objc_alloc_init();
        local_58 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_DeuRYS1Y_);
          local_40 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,local_48,&cf_m_contact);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setValue_forKey__0269d300,local_48,&cf_m_chatContact);
          pcVar4 = local_58;
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,puVar1,&cf_m_uiFromScene);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          local_78[0] = IVar3;
          if (IVar3 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
            local_40 = 1;
          }
          else {
            pcVar4 = &cf_PushViewController_animated_;
            _NSSelectorFromString();
            IVar3 = local_78[0];
            local_80 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78[0],PTR_s_respondsToSelector__026ca818,pcVar4);
            if ((IVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78[0],PTR_s_pushViewController_animated__0269d590,local_58,1);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_78[0],local_80,local_58,1);
            }
            if ((local_39 & 1) == 0) {
              local_40 = 1;
            }
            else {
              dVar5 = _dispatch_time(0,450000000);
              puVar1 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = local_58;
              local_a8 = PTR___NSConcreteStackBlock_02578660;
              local_a0 = 0xc2000000;
              local_9c = 0;
              local_98 = FUN_01851788;
              local_90 = &DAT_0257a800;
              (*(code *)PTR__objc_retain_02578638)();
              local_88 = pcVar4;
              _dispatch_after(dVar5,puVar1,&local_a8);
              (*(code *)PTR__objc_release_02578630)(puVar1);
              _objc_storeStrong(&local_88,0);
              local_40 = 0;
            }
          }
          _objc_storeStrong(local_78,0);
        }
        _objc_storeStrong(&local_58,0);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

