// FUN_000648e4 @ 000648e4

void FUN_000648e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_hKm0Rcck_Wg_);
  puVar1 = PTR_WCRefineLinkMediaSender_026ce170;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_00064a20;
  local_30 = &DAT_02579940;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_parseAndSendText_toUsr_keepOrigi_0269dc40,uVar3,uVar4,0,0,1,&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

