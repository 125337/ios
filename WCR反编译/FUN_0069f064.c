// FUN_0069f064 @ 0069f064

void FUN_0069f064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = param_3;
  _CFAbsoluteTimeGetCurrent();
  local_28 = param_1;
  if (DAT_028cbd98 != (code *)0x0) {
    (*DAT_028cbd98)(local_18,local_20);
  }
  uVar1 = local_18;
  FUN_00699d70();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_0069841c(local_18);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_0069f1d0;
  local_40 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  _dispatch_async(puVar2,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_18,0);
  return;
}

