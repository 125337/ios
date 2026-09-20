// clampedMomentsSpecialFollowHistoryCount @ 01c1b5ac

/* Function Stack Size: 0x10 bytes */

long_long WCRefineMomentsViewController::clampedMomentsSpecialFollowHistoryCount
                    (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  iVar3 = 10;
  if (puVar2 != (undefined *)0x0) {
    iVar3 = 0x32;
  }
  if ((long)local_28 < 1) {
    local_28 = (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  if ((long)iVar3 < (long)local_28) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_28 = (undefined *)(long)iVar3;
  }
  return (long_long)local_28;
}

