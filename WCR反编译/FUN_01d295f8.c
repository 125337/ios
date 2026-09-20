// FUN_01d295f8 @ 01d295f8

void FUN_01d295f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineRootViewController_026cf520;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRootViewController_026cf520,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

