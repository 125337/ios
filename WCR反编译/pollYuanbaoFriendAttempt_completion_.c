// pollYuanbaoFriendAttempt:completion: @ 01cb9678

/* Function Stack Size: 0x20 bytes */

void WCRefinePrivateFriendViewController::pollYuanbaoFriendAttempt_completion_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  undefined1 auStack_50 [8];
  long_long local_48;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4,param_3,param_4,param_5);
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isYuanbaoFriend_026af098);
  if (((ulong)puVar2 & 1) == 0) {
    if ((long)local_28 < 8) {
      if (local_28 == 1) {
        puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_initWeak(auStack_40,local_18);
      dVar3 = _dispatch_time(0,400000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_01cb98d4;
      local_60 = &DAT_0258be78;
      _objc_copyWeak(auStack_50,auStack_40);
      lVar1 = local_30;
      local_48 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar1;
      _dispatch_after(dVar3,puVar2,&local_78);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_58,0);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_40);
      local_34 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQmRCQ__YSTQ);
      if (local_30 != 0) {
        (**(code **)(local_30 + 0x10))(local_30,0);
      }
      local_34 = 1;
    }
  }
  else {
    if (local_30 != 0) {
      (**(code **)(local_30 + 0x10))(local_30,1);
    }
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

