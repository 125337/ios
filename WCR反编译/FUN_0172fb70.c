// FUN_0172fb70 @ 0172fb70

void FUN_0172fb70(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcr_tryForwardLinkedMessageRepoF_026b3c80,*(undefined8 *)(param_1 + 0x38)
               ,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

