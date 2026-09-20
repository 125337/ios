// showWithTotalCount: @ 011272d0

/* Function Stack Size: 0x18 bytes */

void WCRefineProgressToast::showWithTotalCount_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long_long local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined **local_48;
  long_long local_40;
  undefined4 local_34;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_34 = 1;
  local_78 = param_3;
  if ((long)param_3 < 1) {
    local_78 = 1;
  }
  local_40 = local_78;
  local_30 = param_3;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTotalCount__026a30f8,local_78);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInvalidated__026a6d70,0);
  IVar1 = local_18;
  ppuVar2 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01127468;
  local_58 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = IVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_48 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    (*(code *)local_48[2])();
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  return;
}

