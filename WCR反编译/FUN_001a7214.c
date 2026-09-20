// FUN_001a7214 @ 001a7214

void FUN_001a7214(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  ulong uVar4;
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
  uVar4 = local_18;
  if (lVar1 == 1) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar4,&DAT_028c8a90,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dVar3 = _dispatch_time(0,350000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc0000000;
    local_54 = 0;
    local_50 = FUN_001afd88;
    local_48 = &DAT_025797b0;
    local_40 = local_18;
    _dispatch_after(dVar3,puVar2,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_WCRefine_openPluginSearchSetting_0269e958);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefine_openPluginSearchSetting_0269e958);
    }
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

