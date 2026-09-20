// persistSelection: @ 0151a840

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingStore::persistSelection_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionSavePending_026b0200);
  if (((ulong)pcVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectionSavePending__026b01f8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
               local_18,PTR_s_persistSelection__026b0150,0);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homeTelegramGroupingRememberSele_026b01b0);
    if (((ulong)puVar2 & 1) != 0) {
      pcVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTab_026a2a78);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_50 = &cf_all;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setHomeTelegramGroupingSelectedT_026b01e8,local_50);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

