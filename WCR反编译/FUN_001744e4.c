// FUN_001744e4 @ 001744e4

void FUN_001744e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  FUN_001749c8(local_28,0,&cf_ck_Wb_YMn__);
  _objc_initWeak(auStack_50,local_28);
  pdVar2 = _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_00175d84;
  local_68 = &DAT_02579c60;
  _objc_copyWeak(auStack_58,auStack_50);
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar1;
  _dispatch_async(pdVar2,&local_80);
  (*(code *)PTR__objc_release_02578630)(pdVar2);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

