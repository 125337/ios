// _WCRSuperFloatQuickChatRead @ 016399ac

void _WCRSuperFloatQuickChatRead(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  undefined **local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  lVar1 = local_18;
  if (lVar2 == 0) {
    local_1c = 1;
  }
  else {
    ppuVar3 = &local_50;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01639b08;
    local_38 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar1;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_28 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar5 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      (*(code *)local_28[2])();
    }
    _objc_storeStrong(&local_28);
    _objc_storeStrong(&local_30,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

