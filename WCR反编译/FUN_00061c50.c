// FUN_00061c50 @ 00061c50

void FUN_00061c50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_60 = PTR_WCRefineLinkMediaSender_026ce170;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  else {
    local_60 = *(undefined **)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elnx_J_Y_a);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_parseAndSendText_toUsr_keepOrigi_0269dbf8,
               *(undefined8 *)(param_1 + 0x28),local_30,0,local_20,0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

