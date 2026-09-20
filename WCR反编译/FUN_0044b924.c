// FUN_0044b924 @ 0044b924

void FUN_0044b924(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0045c3c4();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    FUN_0045d5fc();
    if ((uVar1 & 1) == 0) {
      puVar3 = local_18;
      FUN_0043ade8();
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_48 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_70;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_0043acd4(local_40);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

