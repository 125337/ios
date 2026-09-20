// FUN_016a51a8 @ 016a51a8

/* WARNING: Type propagation algorithm not settling */

void FUN_016a51a8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_30 [3];
  ulong local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  uVar2 = local_18;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar2;
  FUN_016bcf64();
  puVar1 = PTR_WCRefineLinkMediaSender_026ce170;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_30[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineLinkMediaSender_026ce170;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_parseAndSendText_toUsr_keepOrigi_0269dba8,uVar2,puVar3,0,1,
               &PTR___NSConcreteGlobalBlock_02588150);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

