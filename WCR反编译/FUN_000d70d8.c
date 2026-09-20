// FUN_000d70d8 @ 000d70d8

void FUN_000d70d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  uVar5 = local_18;
  if (lVar1 == 1) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar5,&DAT_028c83a8,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dVar3 = _dispatch_time(0,350000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc0000000;
    local_54 = 0;
    local_50 = FUN_000ec158;
    local_48 = &DAT_025797b0;
    local_40 = local_18;
    _dispatch_after(dVar3,puVar2,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      uVar5 = local_18;
      FUN_000ebecc(0);
      if ((uVar5 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_YU_g_b_u1Y_);
      }
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefine_openPluginSearchSetting_0269e958);
      local_38 = 0;
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

