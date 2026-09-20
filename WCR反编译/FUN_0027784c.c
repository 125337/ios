// FUN_0027784c @ 0027784c

void FUN_0027784c(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined **local_90 [3];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_58 = &local_48;
  local_48 = 0;
  local_38 = 0x20000000;
  local_34 = 0x20;
  local_30 = 0;
  ppuVar1 = &local_78;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_002779fc;
  local_60 = &DAT_0257b268;
  local_40 = local_58;
  local_28 = param_3;
  local_20 = param_2;
  local_14 = param_1;
  _objc_retainBlock();
  local_50 = ppuVar1;
  (*(code *)ppuVar1[2])(ppuVar1,&cf_ctor);
  dVar2 = _dispatch_time(0,1000000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = local_50;
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_00277df0;
  local_98 = &DAT_02579910;
  (*(code *)PTR__objc_retain_02578638)();
  local_90[0] = ppuVar1;
  _dispatch_after(dVar2,puVar3,&local_b0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(local_90);
  _objc_storeStrong(&local_50,0);
  __Block_object_dispose(&local_48,8);
  return;
}

