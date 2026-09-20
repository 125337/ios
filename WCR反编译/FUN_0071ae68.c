// FUN_0071ae68 @ 0071ae68

void FUN_0071ae68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  byte local_38;
  byte local_21;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  FUN_00718d90();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_21 = (byte)lVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_0071af98;
  local_48 = &DAT_0257f468;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  local_38 = local_21 & 1;
  _dispatch_async(puVar3,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_40);
  return;
}

