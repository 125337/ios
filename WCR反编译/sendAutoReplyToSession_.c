// sendAutoReplyToSession: @ 00f23ccc

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineDoNotDisturbSupport::sendAutoReplyToSession_
          (WCRefineDoNotDisturbSupport *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 in_d0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  undefined *local_58;
  undefined **local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (((uVar1 == 0) || (uVar1 = local_30, FUN_00f222d0(), (uVar1 & 1) != 0)) ||
     (puVar2 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_30
               ), ((ulong)puVar2 & 1) != 0)) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_doNotDisturbAutoReplyCountMode_026abe30);
    puVar2 = local_40;
    ppuVar4 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00f23ee4;
    local_70 = &DAT_0257a740;
    local_58 = puVar3;
    local_48 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_30;
    local_68 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar1;
    _objc_retainBlock();
    local_50 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doNotDisturbAutoReplyDelaySecond_026abe58);
    FUN_00f24454(in_d0,local_50);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

