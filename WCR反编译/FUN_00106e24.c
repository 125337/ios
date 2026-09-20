// FUN_00106e24 @ 00106e24

void FUN_00106e24(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsJoinedByString__0269d140,&cf_0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf_nxyQ_J,uVar1,
             &cf_SN_NN_tXTS_u,&cf_yQ,&cf_Sm,*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

