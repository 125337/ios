// FUN_01dcda48 @ 01dcda48

void FUN_01dcda48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineMessageBlockSupport_026ce0f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_20);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_WCRefineSessionStatsViewController_026ce2c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      param_1 = param_1 + 0x20;
      local_40 = puVar2;
      _objc_loadWeakRetained();
      FUN_01dc977c();
      (*(code *)PTR__objc_release_02578630)(param_1);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_f_YSO);
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

