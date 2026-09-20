// shouldMuteNotificationsForSession: @ 00f21c24

/* Function Stack Size: 0x18 bytes */

bool WCRefineDoNotDisturbSupport::shouldMuteNotificationsForSession_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEffectivelyActive_0269d708);
  if ((IVar1 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    lVar2 = local_30;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_40 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = puVar4 == (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        lVar2 = local_40;
        FUN_00f21ee4();
        local_11 = (byte)lVar2 & 1;
      }
    }
    else {
      local_11 = 0;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

