// wcr_titleAlign @ 01d985e0

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsBoardView::wcr_titleAlign(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boardMode_026c4e58);
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_sessionStatsTitleAlignForMode__026c4e60,param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return (long_long)puVar2;
}

