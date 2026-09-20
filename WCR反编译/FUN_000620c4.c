// FUN_000620c4 @ 000620c4

void FUN_000620c4(long param_1)

{
  long lVar1;
  undefined *local_68;
  undefined *local_48;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(param_1 + 0x20);
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_68 = PTR_WCRefineLinkMediaSender_026ce170;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_68;
  }
  else {
    local_68 = *(undefined **)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_parseAndSendLinkCardFromText_toU_0269dc20,
             *(undefined8 *)(param_1 + 0x28),local_30,0,0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

