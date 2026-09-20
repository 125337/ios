// FUN_005c0adc @ 005c0adc

void FUN_005c0adc(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  char *local_90;
  int local_88;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_51 = 0;
    local_61 = 0;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    bVar1 = false;
    if (puVar2 != (undefined *)0x0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsFromUsr__0269d408);
      bVar1 = false;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_28;
        FUN_0059d260(local_28,&cf_m_nsFromUsr);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = uVar4;
        FUN_005a0828();
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar4 == 0;
      }
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setM_nsFromUsr__0269d408,local_38);
    }
    local_71 = 0;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiStatus__0269d418);
    bVar1 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_28;
      FUN_0059d260(local_28,&cf_m_uiStatus);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar4 == 0;
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setM_uiStatus__0269d418,1);
    }
    local_81 = 0;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiCreateTime__0269d428);
    bVar1 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_28;
      FUN_0059d260(local_28,&cf_m_uiCreateTime);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = (int)uVar4 == 0;
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar1) {
      local_88 = 0;
      pcVar5 = "MMNewSessionMgr";
      _objc_getClass();
      FUN_005a5ba4();
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTime_0269d420);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar5 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_GenSendMsgTime_0269d420);
        local_88 = (int)pcVar5;
      }
      if (local_88 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_88 = (int)param_1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setM_uiCreateTime__0269d428,local_88);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

