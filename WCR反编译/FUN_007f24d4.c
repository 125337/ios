// FUN_007f24d4 @ 007f24d4

void FUN_007f24d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      FUN_00800738(0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_18;
      local_28 = puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        local_50 = PTR___NSConcreteStackBlock_02578660;
        local_48 = 0xc2000000;
        local_44 = 0;
        local_40 = FUN_008012c8;
        local_38 = &DAT_02580380;
        (*(code *)PTR__objc_retain_02578638)();
        local_30 = uVar1;
        FUN_007f3908(puVar4,&local_50);
        _objc_storeStrong(&local_30,0);
      }
      local_1c = (uint)(puVar4 == (undefined1 *)0x0);
      _objc_storeStrong(&local_28,0);
    }
    else {
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

