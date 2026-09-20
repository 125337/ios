// FUN_005bd74c @ 005bd74c

byte FUN_005bd74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  dispatch_time_t dVar6;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ulong local_d0;
  undefined *local_c8 [2];
  undefined *local_b8;
  char *local_b0;
  char *local_a8;
  undefined1 local_99;
  char *local_90;
  undefined *local_88;
  char *local_80;
  byte local_71;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  uint local_58;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_30;
  FUN_005b91f8();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    FUN_005bed60();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,local_48)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setMessageWrap__026a58c0,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setHostViewController__026a58c8,local_38)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setCaption__026a5958,local_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrN__N_bTReQgSW);
      local_21 = 1;
    }
    local_58 = (uint)(uVar3 != 0);
    _objc_storeStrong(&local_68,0);
    if (local_58 == 0) {
      local_58 = 0;
    }
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_58 == 0) {
      puVar4 = PTR_WCRefineQuickPostImagePendingRequest_026ce7b8;
      _objc_alloc_init();
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setMessageWrap__026a58c0,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHostViewController__026a58c8,local_38)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setCaption__026a5958,local_40);
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_70,PTR_s_setCreatedAt__026a58e0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_60;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,local_48);
      _objc_sync_exit(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_71 = 0;
      pcVar5 = "MsgDataDownloadLogic";
      _objc_getClass();
      local_88 = PTR_s_startDownloadMsgImg_HD__0269da88;
      local_80 = pcVar5;
      if ((pcVar5 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_instancesRespondToSelector__0269da90,
                     PTR_s_startDownloadMsgImg_HD__0269da88), ((ulong)pcVar5 & 1) != 0)) {
        pcVar5 = local_80;
        _objc_alloc_init();
        local_90 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDownloadLogic__026a5960,pcVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_90,local_88,local_30,1);
        local_71 = 1;
        _objc_storeStrong(&local_90,0);
      }
      if ((local_71 & 1) == 0) {
        uVar2 = local_30;
        FUN_0059d260(local_30,&cf_m_isEnterpriseMsg);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_99 = (undefined1)uVar3;
        pcVar5 = "EnterpriseMsgMgr";
        if ((uVar3 & 1) == 0) {
          pcVar5 = "CMessageMgr";
        }
        _objc_getClass();
        local_a8 = pcVar5;
        FUN_005a5ba4();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = PTR_s_StartDownloadImage_HD_AutoDownlo_0269da80;
        local_b0 = pcVar5;
        if ((pcVar5 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,
                       PTR_s_StartDownloadImage_HD_AutoDownlo_0269da80), ((ulong)pcVar5 & 1) != 0))
        {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_b8,local_30,1,0);
          local_71 = 1;
        }
        _objc_storeStrong(&local_b0,0);
      }
      uVar2 = local_60;
      if ((local_71 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObjectForKey__0269d700,local_48);
        _objc_sync_exit(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_21 = 0;
        local_58 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrN__N_bTReQgSW)
        ;
        dVar6 = _dispatch_time(0,60000000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_f0 = PTR___NSConcreteStackBlock_02578660;
        local_e8 = 0xc2000000;
        local_e4 = 0;
        local_e0 = FUN_005bedd4;
        local_d8 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        puVar1 = local_70;
        local_d0 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8[0] = puVar1;
        _dispatch_after(dVar6,puVar4,&local_f0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_21 = 1;
        local_58 = 1;
        _objc_storeStrong(local_c8);
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

