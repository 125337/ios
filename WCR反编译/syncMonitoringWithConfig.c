// syncMonitoringWithConfig @ 00957988

/* Function Stack Size: 0x10 bytes */

void WCRClipboardHistoryStore::syncMonitoringWithConfig(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  uint local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = 0;
  uVar1 = (uint)puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    FUN_00956fd0();
    local_28 = uVar1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((local_28 & 1) == 0) ||
     (IVar4 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_observing_026aab58),
     (IVar4 & 1) != 0)) {
    if (((local_28 & 1) == 0) &&
       (IVar4 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_observing_026aab58),
       (IVar4 & 1) != 0)) {
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setObserving__026aab68,0);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setObserving__026aab68,1);
  }
  return;
}

