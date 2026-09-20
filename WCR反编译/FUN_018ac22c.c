// FUN_018ac22c @ 018ac22c

void FUN_018ac22c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  uint local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_28 = param_1;
  FUN_018a82b0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSetWithArray__026a4b80,
               *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_30);
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoReplyEncodedMultiContentFrom_026b7858);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

