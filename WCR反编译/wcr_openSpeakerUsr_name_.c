// wcr_openSpeakerUsr:name: @ 01dd4128

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsViewController::wcr_openSpeakerUsr_name_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  long local_80;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_28;
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineMessageBlockSupport_026ce0f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_38);
    if (((ulong)puVar3 & 1) == 0) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_usrIsFriend__026c5640,local_38);
      local_3d = (undefined1)IVar4;
      local_49 = 0;
      bVar1 = true;
      if ((IVar4 & 1) != 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_48 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar3 != (undefined *)0x0;
      }
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      local_3e = bVar1;
      if (bVar1) {
        puVar3 = PTR_WCRefineFindUserSupport_026ceb40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineFindUserSupport_026ceb40,PTR_s_openProfileOnlyForQuery__026bb618,
                   local_38);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
        }
        local_3c = 1;
      }
      else {
        puVar3 = PTR_WCRefineSessionStatsViewController_026ce2c0;
        _objc_alloc();
        lVar2 = local_38;
        lVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        if (lVar5 == 0) {
          local_80 = local_38;
        }
        else {
          local_80 = local_30;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithChatUsr_isGroup_displayN_026c53a0,lVar2,0,local_80);
        local_58 = puVar3;
        FUN_01dc977c(local_18,puVar3);
        _objc_storeStrong(&local_58,0);
        local_3c = 0;
      }
    }
    else {
      puVar3 = PTR_WCRefineFindUserSupport_026ceb40;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFindUserSupport_026ceb40,PTR_s_openProfileOnlyForQuery__026bb618,
                 local_38);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      }
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

