// FUN_0157b998 @ 0157b998

void FUN_0157b998(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  FUN_01562e38();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  FUN_0157bd44();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_2c = 1;
    local_18 = param_1;
    goto LAB_0157bc48;
  }
  FUN_01563370();
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  puVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (((ulong)puVar2 & 1) == 0) {
LAB_0157bb1c:
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_0157bf04();
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    local_2c = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_0157bf04();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_28;
    if (local_28 == (undefined *)0x0) goto LAB_0157bb1c;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_0157bc48:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

