// FUN_0155731c @ 0155731c

void FUN_0155731c(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSessionStatsViewController_026ce2c0,
             PTR_s_presentGroupJoinTimeEditorFrom_r_026b05b0,puVar1,*(undefined8 *)(param_1 + 0x20),
             &PTR___NSConcreteGlobalBlock_02586680);
  _objc_storeStrong(&local_28,0);
  return;
}

