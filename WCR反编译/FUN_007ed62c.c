// FUN_007ed62c @ 007ed62c

void FUN_007ed62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    local_48 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_007eefb0;
      local_68 = &DAT_02578f80;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_30;
      local_60 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_38;
      local_58 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
      _dispatch_async(puVar3,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_48 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_60,0);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968,
                 PTR_s_currentNotificationCenter_026a8548);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_007eefec;
      local_b0 = &DAT_02580270;
      local_88 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_28;
      local_a8 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_30;
      local_a0 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_38;
      local_98 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_getNotificationSettingsWithCompl_026a8558,&local_c8);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_88,0);
      local_48 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

