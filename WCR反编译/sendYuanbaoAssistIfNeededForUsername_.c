// sendYuanbaoAssistIfNeededForUsername: @ 01120318

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::sendYuanbaoAssistIfNeededForUsername_
               (ID param_1,SEL param_2,ID param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  ID local_48;
  undefined **local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  plVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(plVar1,param_3);
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if (((ulong)plVar1 & 1) == 0) {
    lVar2 = local_28;
    FUN_0110d24c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    lVar2 = local_38;
    if (lVar3 == 0) {
      local_2c = 1;
    }
    else {
      ppuVar4 = &local_70;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_011204f0;
      local_58 = &DAT_0257cc98;
      local_48 = local_18;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = lVar2;
      _objc_retainBlock();
      puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      local_40 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      puVar6 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar5 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        (*(code *)local_40[2])();
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_50,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

