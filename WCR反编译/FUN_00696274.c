// FUN_00696274 @ 00696274

void FUN_00696274(long param_1)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40 [3];
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_00695d60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  dVar3 = _dispatch_time(0,350000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_00696424;
  local_48 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = lVar1;
  _dispatch_after(dVar3,puVar4,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

