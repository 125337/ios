// FUN_0071e0f4 @ 0071e0f4

void FUN_0071e0f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  byte local_28;
  byte local_21;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  FUN_0071c770();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_21 = (byte)lVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_0071e1f8;
  local_38 = &DAT_0257f4b8;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  local_28 = local_21 & 1;
  _dispatch_async(puVar3,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_30);
  return;
}

