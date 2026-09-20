// FUN_006b50a0 @ 006b50a0

void FUN_006b50a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_20 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (((puVar1 == (undefined *)0x0) ||
      (puVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__chatroom),
      ((ulong)puVar1 & 1) != 0)) ||
     (puVar1 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_20
               ), ((ulong)puVar1 & 1) != 0)) {
    local_24 = 1;
  }
  else {
    dVar3 = _dispatch_time(0,1400000000);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_006b527c;
    local_38 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = puVar2;
    _dispatch_after(dVar3,puVar1,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

