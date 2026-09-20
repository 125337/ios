// FUN_00062c70 @ 00062c70

void FUN_00062c70(long param_1)

{
  long lVar1;
  undefined *local_58;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_58 = PTR_WCRefineLinkMediaSender_026ce170;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_58;
  }
  else {
    local_58 = *(undefined **)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_parseAndSendLinkCardFromText_toU_0269dc20,
             *(undefined8 *)(param_1 + 0x28),local_28,0,0);
  _objc_storeStrong(&local_28,0);
  return;
}

