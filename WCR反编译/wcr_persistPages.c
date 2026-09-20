// wcr_persistPages @ 01dc2f50

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_persistPages(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pages_026c52a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setSessionStatsBoardPages_forMod_026c52e8,IVar2,param_1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

