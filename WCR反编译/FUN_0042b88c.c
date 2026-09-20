// FUN_0042b88c @ 0042b88c

/* WARNING: Type propagation algorithm not settling */

void FUN_0042b88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28 [3];
  
  local_28[2] = 0;
  _objc_storeStrong(local_28 + 2,param_1);
  local_28[1] = 0;
  _objc_storeStrong(local_28 + 1,param_2);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  if ((local_28[2] == 0) ||
     (lVar2 = local_28[0], (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_length_0269cca0),
     puVar3 = PTR___dispatch_main_q_02578680, lVar2 == 0)) {
    local_38 = 1;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28[2];
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0042ca88;
    local_50 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_28[0];
    local_48 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar2;
    _dispatch_async(puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_48,0);
    local_38 = 0;
  }
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  _objc_storeStrong(local_28 + 2,0);
  return;
}

