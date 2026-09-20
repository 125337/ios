// FUN_007a6518 @ 007a6518

double FUN_007a6518(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uVar3;
  double local_80;
  undefined *local_68;
  undefined4 local_5c;
  long local_58;
  double local_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  undefined8 uStack_28;
  double local_20;
  undefined8 uStack_18;
  
  local_58 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  _objc_storeStrong(&local_58,param_5);
  if (local_58 == 0) {
    uStack_28 = uStack_48;
    local_30 = local_50;
    uStack_18 = uStack_38;
    local_20 = local_40;
    local_5c = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_globalCornerMargin_026a1fe0);
    local_80 = (double)(long)puVar1;
    if (local_80 <= 0.0) {
      local_80 = 8.0;
    }
    uVar3 = 0x4059000000000000;
    if (100.0 < local_80) {
      local_80 = 100.0;
    }
    dVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar2,uVar3,param_3,param_4);
    dVar2 = dVar2 - local_80 * 2.0;
    if (0.0 < dVar2) {
      local_50 = local_80;
      local_40 = dVar2;
    }
    uStack_28 = uStack_48;
    local_30 = local_50;
    uStack_18 = uStack_38;
    local_20 = local_40;
    local_5c = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58,0);
  return local_30;
}

