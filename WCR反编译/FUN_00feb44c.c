// FUN_00feb44c @ 00feb44c

void FUN_00feb44c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_triggerHapticFeedbackWithIndex__0269f248,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

