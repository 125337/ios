// FUN_0075a2dc @ 0075a2dc

void FUN_0075a2dc(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  dispatch_time_t dVar6;
  ulong local_148;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined *local_68;
  char *local_60;
  char *local_58;
  undefined *local_50;
  ulong local_48;
  uint local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (uVar2 = local_30, FUN_00744988(), (uVar2 & 1) != 0)) {
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_0074e2f8();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      local_40 = 1;
    }
    else {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRubell0RJ_Y);
        local_40 = 1;
      }
      else {
        pcVar5 = "MMMsgLogicManager";
        _objc_getClass();
        local_58 = pcVar5;
        FUN_00744160();
        _objc_retainAutoreleasedReturnValue();
        local_68 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
        local_60 = pcVar5;
        if ((pcVar5 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,
                       PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar5 & 1) == 0))
        {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
          local_40 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68,local_48,local_50,1);
          uVar2 = local_28;
          FUN_0075ac38();
          _objc_retainAutoreleasedReturnValue();
          local_81 = 0;
          uVar3 = local_28;
          local_70 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if ((uVar2 & 1) == 0) {
            local_148 = 0;
          }
          else {
            local_148 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
            _objc_retainAutoreleasedReturnValue();
            local_81 = 1;
            local_80 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          if ((local_81 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_80);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_78 = local_148;
          bVar1 = local_70 != 0;
          if (bVar1) {
            dVar6 = _dispatch_time(0,550000000);
            puVar4 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_70;
            local_c0 = PTR___NSConcreteStackBlock_02578660;
            local_b8 = 0xc2000000;
            local_b4 = 0;
            local_b0 = FUN_0075b0d4;
            local_a8 = &DAT_025796f0;
            (*(code *)PTR__objc_retain_02578638)();
            uVar3 = local_30;
            local_a0 = uVar2;
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = uVar3;
            local_90 = local_78;
            _dispatch_after(dVar6,puVar4,&local_c0);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_storeStrong(&local_98);
            _objc_storeStrong(&local_a0,0);
          }
          local_40 = (uint)!bVar1;
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

