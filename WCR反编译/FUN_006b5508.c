// FUN_006b5508 @ 006b5508

void FUN_006b5508(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  dispatch_time_t dVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined4 local_44;
  undefined *local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldHangupUsername__026a6878,local_40
            );
  puVar2 = local_40;
  if (((ulong)puVar3 & 1) == 0) {
    local_44 = 1;
  }
  else {
    ppuVar4 = &local_80;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_006b578c;
    local_68 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_30;
    local_60 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar1;
    _objc_retainBlock();
    puVar2 = PTR___dispatch_main_q_02578680;
    local_50 = ppuVar4;
    if (0.0 < local_38) {
      dVar5 = _dispatch_time(0,(long)(local_38 * 1000000000.0));
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar5,puVar2,local_50);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_60,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

