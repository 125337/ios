// confirmBatchDeleteSecondStep @ 0185950c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchDeleteFriendViewController::confirmBatchDeleteSecondStep(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCandidates_026b6960);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__f_TnxRd);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_initWeak(auStack_30,local_18);
  puVar1 = local_28;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_018596c0;
  local_40 = &DAT_025810b0;
  _objc_copyWeak(auStack_38,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nxRd,puVar1,&cf_nxRd,
             &local_58,&cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

