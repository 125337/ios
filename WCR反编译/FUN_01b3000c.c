// FUN_01b3000c @ 01b3000c

void FUN_01b3000c(undefined *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  FUN_01b31da8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_visibleViewController_0269d460);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  bVar2 = false;
  uVar1 = param_1 != (undefined *)0x0;
  local_28 = param_1;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = param_1 != (undefined *)0x0;
    local_31 = uVar1;
    local_30 = param_1;
    (*(code *)PTR__objc_release_02578630)(param_1);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  puVar3 = local_28;
  if (bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_38 = 1;
  }
  else {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      local_60 = (undefined *)0x0;
    }
    else {
      local_60 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

