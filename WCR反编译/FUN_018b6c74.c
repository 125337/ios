// FUN_018b6c74 @ 018b6c74

void FUN_018b6c74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar1 = PTR_WCRefineHelper_026ce000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf_Rd_NU_,&cf__RdhQ_NSSU_,
             &cf_NSb_Y,&cf_Rd,&cf_Sm);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

