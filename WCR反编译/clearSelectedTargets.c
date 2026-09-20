// clearSelectedTargets @ 01d3cbc4

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::clearSelectedTargets(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [31];
  undefined1 local_29;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isAutoClearChatTask_026c45a0);
  puVar4 = PTR_WCRefineHelper_026ce000;
  local_29 = (undefined1)IVar3;
  pcVar1 = &cf_nzz_O;
  if ((IVar3 & 1) == 0) {
    pcVar1 = &cf_nzz_vh;
  }
  pcVar2 = &cf_nx_ydhQRntOT;
  if ((IVar3 & 1) == 0) {
    pcVar2 = &cf_nx_nzzS_MRNRvhQSvhT;
  }
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01d3cd50;
  local_50 = &DAT_025810b0;
  _objc_copyWeak(auStack_48,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,pcVar1,pcVar2,&cf_nzz,&local_68,
             &cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}

