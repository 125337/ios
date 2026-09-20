// shouldSuppressCallBannerForUsername:title:body: @ 00f22bf0

/* Function Stack Size: 0x28 bytes */

bool WCRefineDoNotDisturbSupport::shouldSuppressCallBannerForUsername_title_body_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint local_94;
  ulong local_90;
  ulong local_80;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar1 = local_30;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_shouldMuteNotificationsForSessio_026a0cc8,local_80);
  IVar3 = local_20;
  if ((IVar2 & 1) == 0) {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_90 = 0;
    }
    else {
      local_90 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_shouldAutoHideIncomingCallForUse_026a0ce0,local_90);
    if ((IVar3 & 1) == 0) {
      uVar1 = local_48;
      FUN_00f2235c();
      if ((uVar1 & 1) == 0) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEffectivelyActive_0269d708);
        local_94 = 1;
        if ((IVar2 & 1) != 0) {
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_94 = (uint)puVar5 ^ 1;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        if ((local_94 & 1) == 0) {
          lVar6 = DAT_028e2c78;
          FUN_00f21dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar6);
          if (lVar7 == 0) {
            local_11 = 0;
          }
          else {
            uVar8 = local_38;
            FUN_00f22f34(local_38,local_40);
            local_11 = (byte)uVar8 & 1;
          }
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

