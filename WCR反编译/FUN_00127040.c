// FUN_00127040 @ 00127040

void FUN_00127040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  dispatch_time_t dVar5;
  undefined *local_108;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = local_28;
  local_40 = param_4;
  FUN_00127840();
  puVar3 = local_28;
  local_48 = puVar2;
  FUN_00127d14();
  puVar2 = local_48;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = local_48;
    if (local_48 != (undefined *)0x0) {
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      puVar1 = local_48;
      puVar3 = puVar2 + -(long)(lVar4 + 1U);
      if ((undefined *)(lVar4 + 1U) <= puVar2 && puVar3 != (undefined *)0x0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
        puVar3 = puVar2 + (long)puVar1 * -2;
        if (puVar2 < (undefined *)((long)puVar1 * 2) || puVar3 == (undefined *)0x0) {
          local_58 = 1;
          goto LAB_001273d0;
        }
      }
    }
    puVar2 = local_28;
    FUN_001280c8(puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_58 = 1;
    }
    else {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      local_69 = 0;
      local_108 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_108 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_108;
      }
      local_69 = puVar2 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_108;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      dVar5 = _dispatch_time(0,1200000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_28;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_001282c0;
      local_88 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_60;
      local_80 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = puVar3;
      _dispatch_after(dVar5,puVar2,&local_a0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_60,0);
      local_58 = 0;
    }
  }
  else {
    local_58 = 1;
  }
LAB_001273d0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

