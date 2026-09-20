// FUN_0066e298 @ 0066e298

void FUN_0066e298(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_00655fa0(local_18,PTR_s_m_cellData_026a6380);
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 == 0) {
    lVar2 = local_18;
    FUN_00655fa0(local_18,PTR_s_cellData_026a27b0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  if (local_20 == 0) {
    lVar2 = local_18;
    FUN_00655d64(local_18,"m_cellData");
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  if (local_20 == 0) {
    lVar2 = local_18;
    FUN_00655d64(local_18,"_cellData");
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  if (local_20 == 0) {
    lVar2 = local_18;
    FUN_00655d64(local_18,"m_cellDataSource");
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

