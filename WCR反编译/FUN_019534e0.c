// FUN_019534e0 @ 019534e0

void FUN_019534e0(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  pcVar1 = &cf__f6eynx_Rd;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    pcVar1 = &cf_nx_RdU_;
  }
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01953608;
  local_38 = &DAT_0258a238;
  local_28 = *(undefined8 *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_RdU_,pcVar1,&cf_Rd,&local_50
             ,&cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  _objc_destroyWeak(auStack_30);
  return;
}

