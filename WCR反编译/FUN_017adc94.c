// FUN_017adc94 @ 017adc94

void FUN_017adc94(long param_1)

{
  undefined *puVar1;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_017add80;
  local_30 = &DAT_02588d80;
  local_20 = param_1;
  local_18 = param_1;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,&cf_cNKm_N,&cf_nx_,
             &local_48);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  _objc_destroyWeak(auStack_28);
  return;
}

