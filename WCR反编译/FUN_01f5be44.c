// FUN_01f5be44 @ 01f5be44

void FUN_01f5be44(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_orderedSetWithArray__026a4b80);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addObject__0269d180,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeObject__0269d678,*(undefined8 *)(param_1 + 0x20));
  }
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar1 = &cf__Sm6e;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    pcVar1 = &cf__ReQ6e;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

