// FUN_002c3da8 @ 002c3da8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c3da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double local_180;
  uint local_114;
  undefined *local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  long local_68;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  byte local_49;
  long local_48;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_49 = 0;
  local_59 = 0;
  local_114 = 1;
  if (local_28 != 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_114 = 1;
    local_48 = lVar1;
    if (lVar1 != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_114 = (uint)puVar2 ^ 1;
    }
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_114 & 1) == 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = 0.0;
    local_90 = 0.0;
    local_68 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_bounds_026ca548);
    local_b8 = dVar4;
    local_b0 = param_2;
    local_a8 = param_3;
    local_a0 = param_4;
    _CGRectGetHeight(dVar4,param_2);
    local_d8 = dVar4 - 170.0;
    local_180 = local_d8;
    if (local_d8 <= local_90) {
      local_180 = local_90;
    }
    local_c0 = local_180;
    dVar4 = local_180;
    local_98 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
    local_e0 = dVar4;
    local_d0 = param_3;
    local_c8 = param_4;
    _CGRectGetWidth(dVar4,local_d8,param_3,param_4);
    dVar4 = dVar4 + 160.0;
    uVar5 = 0xc054000000000000;
    uVar3 = 0x4067c00000000000;
    FUN_002adf88();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_88 = uVar5;
    dStack_80 = local_180;
    local_78 = dVar4;
    uStack_70 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_68;
    local_e8 = puVar2;
    FUN_002c93b8();
    FUN_002c963c(local_88,dStack_80,local_78,uStack_70,local_68,local_68,(uint)lVar1 & 1,local_e8,0)
    ;
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
    _objc_storeStrong(puVar2,&local_e8);
    _objc_storeStrong(&local_68,0);
    local_60 = 0;
  }
  else {
    local_60 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

