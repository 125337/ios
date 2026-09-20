// wcr_handleChatSearchRelayDidAppear: @ 015599d0

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_handleChatSearchRelayDidAppear_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  undefined *local_40;
  undefined8 local_38;
  uint local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((DAT_028e39a0 & 1) == 0) || (local_28 == 0)) {
    local_2c = 1;
  }
  else {
    DAT_028e39a0 = 0;
    _objc_storeWeak(&DAT_028e38c8,local_28);
    local_38 = DAT_028e39a8;
    local_40 = PTR_s_onEditAndSearch_026b05b8;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onEditAndSearch_026b05b8);
    if ((uVar2 & 1) == 0) {
      FUN_01559c44(local_28);
      FUN_01559d40();
      local_2c = 1;
    }
    else {
      DAT_028e39b0 = DAT_028e38b8 != 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_40);
      dVar3 = _dispatch_time(0,350000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_01559ddc;
      local_50 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar2;
      _dispatch_after(dVar3,puVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      bVar1 = (DAT_028e39b0 & 1) != 0;
      if (bVar1) {
        dVar3 = _dispatch_time(0,1000000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc0000000;
        local_84 = 0;
        local_80 = FUN_01559f2c;
        local_78 = &DAT_02578c00;
        local_70 = local_38;
        _dispatch_after(dVar3,puVar4,&local_90);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_2c = (uint)!bVar1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

