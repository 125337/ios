// FUN_005cf2f8 @ 005cf2f8

void FUN_005cf2f8(long param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68 [3];
  int local_4c;
  long local_48;
  long local_40;
  undefined8 local_38;
  byte local_29;
  long local_28;
  
  local_38 = 0;
  local_29 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = param_1 + 0x28;
  local_40 = param_1;
  _objc_loadWeakRetained();
  local_48 = lVar1;
  if (lVar1 == 0) {
    local_4c = 1;
  }
  else {
    _objc_setAssociatedObject(lVar1,&DAT_028cb782,0,1);
    puVar4 = PTR___dispatch_main_q_02578680;
    if ((local_29 & 1) == 0) {
      dVar3 = _dispatch_time(0,500000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_48;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_005cf620;
      local_a8 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = lVar1;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = uVar2;
      _dispatch_after(dVar3,puVar4,&local_c0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_48;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_005cf5d8;
      local_78 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = lVar1;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_68[0] = uVar2;
      _dispatch_async(puVar4,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(local_68);
      _objc_storeStrong(&local_70,0);
    }
    local_4c = 0;
  }
  _objc_storeStrong(&local_48,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

