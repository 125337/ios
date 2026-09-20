// FUN_0023ed60 @ 0023ed60

void FUN_0023ed60(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_120;
  ulong local_c0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028c9300)(param_1,param_2);
  local_38 = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_info_026a0d00);
  if ((uVar1 & 1) == 0) {
    uVar2 = local_28;
    FUN_00240240(local_28,&cf_info);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_info_026a0d00);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_38;
  FUN_00240420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  local_50[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = local_50[0];
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_shouldHangupIncomingCallForUsern_026a0cd8,local_c0);
  puVar4 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  if (((ulong)puVar3 & 1) == 0) {
    uVar1 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_120 = 0;
    }
    else {
      local_120 = local_50[0];
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_shouldAutoHideIncomingCallForUse_026a0ce0,local_120);
    uVar1 = local_50[0];
    if (((ulong)puVar4 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      FUN_00240bc0(0,uVar1,&cf_invite_load);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  else {
    uVar1 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_copy_0269d150);
    puVar3 = PTR___dispatch_main_q_02578680;
    local_58 = uVar1;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_58;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00240fc8;
    local_70 = &DAT_02579ee0;
    local_60 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar1;
    _dispatch_async(puVar3,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

