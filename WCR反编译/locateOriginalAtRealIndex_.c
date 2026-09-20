// locateOriginalAtRealIndex: @ 01bb4180

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageRepositoryViewController::locateOriginalAtRealIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  dispatch_time_t dVar6;
  undefined *local_180;
  undefined *local_158;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined1 auStack_d0 [8];
  cfstringStruct *local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0 [4];
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  byte local_41;
  ID local_40;
  long_long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_41 = 0;
  bVar1 = true;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  if (-1 < (long)param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_messagesArray_026c03b8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)param_1 <= (long)param_3;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (!bVar1) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messagesArray_026c03b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar2;
    puVar2 = PTR_WCRefineMessageRepositoryStore_026ce120;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeItem__0269d720,local_50)
    ;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = PTR_WCRefineMessageRepositoryStore_026ce120;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_messageItemsForItem__026ae578,
                 local_50);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_158 = local_50;
      }
      _objc_storeStrong(&local_58,local_158);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_60 = (undefined *)0x0;
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_integerValue_026ca750);
      local_60 = puVar2;
    }
    if ((long)local_60 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_e_g0Wmo__Sel_MO);
      local_6c = 1;
    }
    else {
      pcVar4 = &cf_filehelper;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = &cf_filehelper;
      local_80 = (cfstringStruct *)0x0;
      FUN_01bad5fc();
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar4;
      if (pcVar4 != (cfstringStruct *)0x0) {
        local_90 = PTR_s_GetMsg_LocalID__0269d5e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar5 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,local_90,local_78,local_60);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_80;
          local_80 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
      if (local_80 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RSmo_S_Rd);
        local_6c = 1;
      }
      else {
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 0;
        local_180 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_180 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = local_180;
        }
        local_b9 = puVar2 == (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0[0] = local_180;
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_b0[0] == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRubell0RJ_Y)
          ;
          local_6c = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = &cf_filehelper;
          puVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcrRepo_tryLocateWrap_session_pr_026c0440,local_80,
                     &cf_filehelper,local_60,local_b0[0]);
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcrRepo_openChatSession_nav__026c0450,local_c8,local_b0[0]);
            if (((ulong)puVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_Sb);
              local_6c = 1;
            }
            else {
              _objc_initWeak(auStack_d0,local_28);
              dVar6 = _dispatch_time(0,350000000);
              puVar2 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              local_118 = PTR___NSConcreteStackBlock_02578660;
              local_110 = 0xc2000000;
              local_10c = 0;
              local_108 = FUN_01bb4968;
              local_100 = &DAT_0258a308;
              _objc_copyWeak(auStack_e0,auStack_d0);
              pcVar5 = local_80;
              (*(code *)PTR__objc_retain_02578638)();
              pcVar4 = local_c8;
              local_f8 = pcVar5;
              (*(code *)PTR__objc_retain_02578638)();
              puVar3 = local_b0[0];
              local_f0 = pcVar4;
              local_d8 = local_60;
              (*(code *)PTR__objc_retain_02578638)();
              local_e8 = puVar3;
              _dispatch_after(dVar6,puVar2,&local_118);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              _objc_storeStrong(&local_e8);
              _objc_storeStrong(&local_f0,0);
              _objc_storeStrong(&local_f8,0);
              _objc_destroyWeak(auStack_e0);
              _objc_destroyWeak(auStack_d0);
              local_6c = 0;
            }
          }
          else {
            local_6c = 1;
          }
          _objc_storeStrong(&local_c8,0);
        }
        _objc_storeStrong(local_b0,0);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  return;
}

