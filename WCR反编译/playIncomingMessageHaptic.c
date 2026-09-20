// playIncomingMessageHaptic @ 0111de7c

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::playIncomingMessageHaptic(ID param_1,SEL param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  undefined **local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((param_1 & 1) == 0) {
    ppuVar1 = &local_50;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc0000000;
    local_44 = 0;
    local_40 = FUN_0111df70;
    local_38 = &DAT_02578c00;
    local_30 = local_18;
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_28 = ppuVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)local_28[2])();
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

