// FUN_0033a85c @ 0033a85c

void FUN_0033a85c(long param_1)

{
  long lVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58 [4];
  undefined4 local_34;
  ulong local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  uVar2 = param_1 + 0x28;
  local_28 = lVar1;
  _objc_loadWeakRetained();
  local_30 = uVar2;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_dismissWithClickedButtonIndex_an_026a2160);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_dismissWithClickedButtonIndex_an_026a2160,0xffffffffffffffff,1);
    }
    dVar3 = _dispatch_time(0,200000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_0033aa88;
    local_60 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = lVar1;
    _dispatch_after(dVar3,puVar4,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(local_58,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

