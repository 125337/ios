// audioSessionMayHaveChanged: @ 00eb8c94

/* Function Stack Size: 0x18 bytes */

void WCRefineBackgroundKeepAlive::audioSessionMayHaveChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  ulong local_40;
  ulong local_38;
  byte local_2d;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEnabled_026a0ef0);
  if (((IVar1 & 1) == 0) ||
     (IVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isInBackground_026ab300), (IVar1 & 1) == 0
     )) {
    local_2c = 1;
  }
  else {
    FUN_00eb6ed8();
    if ((IVar1 & 1) == 0) {
      local_2d = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar2 & 1) == 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = uVar2 & 0xffffffff;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_2d = uVar3 == 1;
          local_40 = uVar3;
        }
      }
      else {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_2d = uVar3 == 1;
        local_38 = uVar3;
      }
      if (((local_2d & 1) == 0) && (FUN_00eb7158(), (uVar3 & 1) == 0)) {
        _objc_initWeak(auStack_48,local_18);
        dVar5 = _dispatch_time(0,400000000);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_00eb90d0;
        local_58 = &DAT_0257be28;
        _objc_copyWeak(auStack_50,auStack_48);
        _dispatch_after(dVar5,puVar6,&local_70);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
        local_2c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stopAudio_026ab338);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setYieldedForOtherAudio__026ab3f0,1);
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stopAudio_026ab338);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setYieldedForHostCall__026ab330,1);
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

