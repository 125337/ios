// shouldAutoReplyForSession: @ 00f220e4

/* Function Stack Size: 0x18 bytes */

bool WCRefineDoNotDisturbSupport::shouldAutoReplyForSession_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint local_44;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEffectivelyActive_0269d708);
  local_44 = 1;
  if ((IVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (uint)puVar3 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_44 & 1) == 0) {
    uVar4 = local_30;
    FUN_00f222d0();
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                 local_30);
      if (((ulong)puVar2 & 1) == 0) {
        uVar4 = local_30;
        FUN_00f2235c();
        if ((uVar4 & 1) == 0) {
          uVar4 = local_30;
          FUN_00f21ee4();
          local_11 = (byte)uVar4 & 1;
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

