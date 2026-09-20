// FUN_01687664 @ 01687664

void FUN_01687664(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  byte local_28;
  byte local_27;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  FUN_0168773c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  dVar1 = _dispatch_time(0,120000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc0000000;
  local_3c = 0;
  local_38 = FUN_01687d5c;
  local_30 = &DAT_0257c9a8;
  local_28 = *(byte *)(param_1 + 0x20) & 1;
  local_27 = *(byte *)(param_1 + 0x21) & 1;
  _dispatch_after(dVar1,puVar2,&local_48);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

