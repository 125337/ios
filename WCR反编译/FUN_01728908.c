// FUN_01728908 @ 01728908

void FUN_01728908(long param_1)

{
  undefined8 uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_20);
  }
  else {
    dVar2 = _dispatch_time(0,450000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01728a3c;
    local_38 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    _dispatch_after(dVar2,puVar3,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

