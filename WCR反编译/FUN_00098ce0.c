// FUN_00098ce0 @ 00098ce0

void FUN_00098ce0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  FUN_00097738();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_28 = lVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_00098de0;
  local_40 = &DAT_025799c0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  local_30 = local_28;
  _dispatch_async(puVar3,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_38);
  return;
}

