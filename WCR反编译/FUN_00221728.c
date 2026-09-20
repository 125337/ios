// FUN_00221728 @ 00221728

void FUN_00221728(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uVar9;
  ulong local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  ulong local_28;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  FUN_001f3300();
  if (((uVar1 & 1) == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_58 = param_1;
      local_50 = param_2;
      local_48 = param_3;
      local_40 = param_4;
      _CGRectGetWidth(param_1,param_2);
      uVar9 = 0x3ff0000000000000;
      if (1.0 <= param_1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        local_78 = param_1;
        local_70 = uVar9;
        local_68 = param_3;
        local_60 = param_4;
        _CGRectGetHeight(param_1,uVar9,param_3,param_4);
        if (1.0 <= param_1) {
          uVar5 = local_28;
          FUN_0021ecfc();
          _objc_retainAutoreleasedReturnValue();
          local_80 = uVar5;
          if (uVar5 != 0) {
            uVar6 = uVar5;
            FUN_001f362c();
            dVar8 = param_1;
            FUN_001f3728();
            uVar7 = uVar6;
            FUN_001f37c4();
            FUN_001f38a4();
            _objc_retainAutoreleasedReturnValue();
            FUN_001ebf20(param_1,dVar8,uVar5,0,uVar6 & 0xffffffff);
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
          local_38 = (uint)(uVar5 == 0);
          _objc_storeStrong(&local_80,0);
          goto LAB_002219f4;
        }
      }
      local_38 = 1;
    }
    else {
      local_38 = 1;
    }
  }
LAB_002219f4:
  _objc_storeStrong(&local_28,0);
  return;
}

