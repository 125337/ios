// FUN_0059de98 @ 0059de98

byte FUN_0059de98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_f0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if ((((local_30 == (undefined *)0x0) || (local_38 == 0)) || (local_40 == 0)) ||
     (uVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_onTouchUpInside_026a58b8),
     (uVar2 & 1) == 0)) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    puVar3 = PTR_WCRefineQuickPostOfficialNoteRequest_026ce7b0;
    _objc_alloc_init();
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setMessageWrap__026a58c0,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHostViewController__026a58c8,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setMessageCell__026a58d0,local_40);
    puVar3 = local_30;
    FUN_005b91f8();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_79 = 0;
    local_f0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_f0 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_f0;
    }
    local_79 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setMessageKey__026a58d8,local_f0);
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFavItem__026a55c0,local_48);
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_60,PTR_s_setCreatedAt__026a58e0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&DAT_028cb640,local_60);
    _objc_storeStrong(&DAT_028cb648,0);
    DAT_028cb730 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_onTouchUpInside_026a58b8);
    FUN_005b9690(0x3fe6666666666666,local_60);
    FUN_005b9690(0x3ff6666666666666,local_60);
    FUN_005b9690(0x4004000000000000,local_60);
    dVar4 = _dispatch_time(0,20000000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_005b97a8;
    local_90 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = puVar1;
    _dispatch_after(dVar4,puVar3,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_21 = 1;
    local_58 = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

