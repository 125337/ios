// FUN_0033cfbc @ 0033cfbc

void FUN_0033cfbc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [15];
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9fd8)(param_1,param_2,param_3 & 1);
  FUN_00341bdc(local_18,&cf_viewDidAppear);
  _objc_initWeak(auStack_30,local_18);
  dVar1 = _dispatch_time(0,150000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_00345d44;
  local_40 = &DAT_02578da0;
  _objc_copyWeak(auStack_38,auStack_30);
  _dispatch_after(dVar1,puVar2,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  return;
}

