// FUN_0037e2b0 @ 0037e2b0

void FUN_0037e2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  bVar1 = (DAT_028ca0fd & 1) != 0;
  if (bVar1) {
    _CACurrentMediaTime();
    uVar2 = local_18;
    local_38 = param_1;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    DAT_028ca0fd = 0;
    DAT_028ca2d8 = 0;
    local_48 = puVar3;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

