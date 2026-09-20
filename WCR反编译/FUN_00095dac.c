// FUN_00095dac @ 00095dac

void FUN_00095dac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  long local_40;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  FUN_00094328();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_28 = lVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_00095ed8;
  local_50 = &DAT_02579bb0;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  local_40 = local_28;
  _dispatch_async(puVar3,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_48);
  return;
}

