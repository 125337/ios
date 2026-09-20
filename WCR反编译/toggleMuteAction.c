// toggleMuteAction @ 01ced274

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardFunctionPageViewController::toggleMuteAction(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_01ced144();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0), (param_1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ecMQSbpbRbc);
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_currentStateForActionID__026c3a58,_WCRefineProfileCardActionIDMute);
    IVar5 = local_28;
    puVar4 = PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0;
    bVar2 = ((byte)IVar3 ^ 1) & 1;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,puVar4,IVar3,bVar2 ^ 1,1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,bVar2);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionStateOverrides_026c3a48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    pcVar1 = &::cf__;
    if (bVar2 == 0) {
      pcVar1 = &cf__sQMQSbpb;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

