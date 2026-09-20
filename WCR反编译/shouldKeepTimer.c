// shouldKeepTimer @ 00f5eb74

/* Function Stack Size: 0x10 bytes */

bool WCRefineFakeLocationEngine::shouldKeepTimer(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  byte local_74;
  undefined *local_48 [3];
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_featureActive_026ac678);
  IVar4 = local_20;
  if ((param_1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_30 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar4);
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_managers_026ac768);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_sync_exit(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fakeLocationMoveRunning_026ac668);
    local_74 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasRoute_026ac648);
      local_74 = (byte)IVar4;
    }
    local_11 = 1;
    if (local_30 == 0) {
      local_11 = local_74 & 1;
    }
    _objc_storeStrong(local_48,0);
  }
  return local_11 & 1;
}

