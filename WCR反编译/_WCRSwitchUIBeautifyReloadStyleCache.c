// _WCRSwitchUIBeautifyReloadStyleCache @ 0170abb4

void _WCRSwitchUIBeautifyReloadStyleCache(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  DAT_028c6218 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

