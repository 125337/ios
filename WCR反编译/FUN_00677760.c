// FUN_00677760 @ 00677760

byte FUN_00677760(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  uint local_44;
  long local_20;
  byte local_11;
  
  plVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  local_44 = 1;
  if (local_20 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    uVar1 = (uint)puVar3;
    _objc_retainAutoreleasedReturnValue();
    local_44 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = local_44 ^ 1;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_44 & 1) == 0) {
    FUN_00677d38();
    if ((uVar1 & 1) == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

