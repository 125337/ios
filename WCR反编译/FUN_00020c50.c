// FUN_00020c50 @ 00020c50

void FUN_00020c50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRAIGroupAnalysisResultHolder_026ce0b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRAIGroupAnalysisResultHolder_026ce0b8,PTR_s_new_0269d288);
  uVar1 = DAT_028c7a38;
  DAT_028c7a38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

