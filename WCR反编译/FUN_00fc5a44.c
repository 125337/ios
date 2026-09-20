// FUN_00fc5a44 @ 00fc5a44

void FUN_00fc5a44(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = param_3;
  local_20 = param_2;
  if (DAT_028e2fd8 != (code *)0x0) {
    (*DAT_028e2fd8)(local_18,param_2,param_3 & 1);
  }
  _objc_storeWeak(&DAT_028e2ee8,local_18);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_00fc7384;
  local_38 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  _dispatch_async(puVar2,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

