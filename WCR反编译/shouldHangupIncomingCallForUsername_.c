// shouldHangupIncomingCallForUsername: @ 00f22560

/* Function Stack Size: 0x18 bytes */

bool WCRefineDoNotDisturbSupport::shouldHangupIncomingCallForUsername_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool local_4b;
  ulong local_48;
  undefined1 *local_40;
  byte local_33;
  byte local_32;
  byte local_31;
  undefined1 *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isFeatureEnabled_026abe00);
  local_31 = (byte)IVar2;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEffectivelyActive_0269d708);
  local_32 = (byte)IVar2;
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbHangupCallsEnabled_026abe08);
  local_33 = (byte)puVar3;
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbFilterRule_026abdf0);
  uVar4 = local_28;
  local_40 = puVar3;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar4;
  FUN_00f227b0();
  uVar5 = local_48;
  FUN_00f21ee4();
  local_4b = false;
  if (((((local_31 & 1) != 0) && ((local_32 & 1) != 0)) && ((local_33 & 1) != 0)) &&
     ((uVar4 & 1) == 0)) {
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      local_4b = local_40 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
    }
    else {
      local_4b = (uVar5 & 1) != 0;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (uint)local_4b;
}

