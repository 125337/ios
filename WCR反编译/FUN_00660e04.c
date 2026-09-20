// FUN_00660e04 @ 00660e04

void FUN_00660e04(double param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  double local_88;
  double local_80;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  undefined4 local_34;
  double local_30;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  local_30 = param_1;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    local_51 = 0;
    local_61 = 0;
    local_71 = 0;
    FUN_0064cd38();
    bVar1 = false;
    if ((uVar2 & 1) == 0) {
      uVar4 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028cbc08);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      bVar1 = false;
      local_50 = uVar4;
      if (uVar4 == 0) {
        uVar4 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028cbc22);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        bVar1 = false;
        local_60 = uVar4;
        if (uVar4 == 0) {
          uVar4 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028cbc21);
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          bVar1 = uVar4 == 0;
          local_70 = uVar4;
        }
      }
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar1) {
      local_34 = 1;
    }
    else {
      _CFAbsoluteTimeGetCurrent();
      local_80 = param_1 + local_30;
      uVar4 = local_28;
      FUN_006611d8(local_80);
      if ((uVar4 & 1) == 0) {
        local_34 = 1;
      }
      else {
        dVar5 = _dispatch_time(0,(long)(local_30 * 1000000000.0));
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_28;
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_00661570;
        local_98 = &DAT_025791c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = uVar4;
        local_88 = local_80;
        _dispatch_after(dVar5,puVar6,&local_b0);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_90,0);
        local_34 = 0;
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

