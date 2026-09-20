// FUN_0007bc8c @ 0007bc8c

void FUN_0007bc8c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) ||
     (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isViewLoaded_0269cde0),
     (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    _objc_initWeak(auStack_30,local_18);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_0007fc38;
    local_40 = &DAT_02578da0;
    _objc_copyWeak(auStack_38,auStack_30);
    _dispatch_async(puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_30);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

