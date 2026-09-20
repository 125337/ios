// FUN_003b87ac @ 003b87ac

void FUN_003b87ac(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long local_30;
  char *local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar5 = "CContactMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = local_20;
  local_28 = pcVar5;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0;
  local_30 = lVar6;
  if (((local_28 == (char *)0x0) || (lVar6 == 0)) ||
     (pcVar5 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,
                PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0), ((ulong)pcVar5 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ecMQSbpbRbc);
  }
  else {
    lVar6 = local_20;
    FUN_003b7ba0();
    bVar2 = ((byte)lVar6 ^ 1) & 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar3,local_30,bVar2 ^ 1,1);
    uVar4 = local_18;
    lVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    FUN_003b7208(uVar4,lVar6);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    (*(code *)PTR__objc_release_02578630)(lVar6);
    FUN_00368c14(local_18,&cf_homeLongPressMute);
    pcVar1 = &cf__;
    if (bVar2 == 0) {
      pcVar1 = &cf__sQMQSbpb;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

