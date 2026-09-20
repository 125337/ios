// wcr_reuseSelection @ 01699694

/* Function Stack Size: 0x10 bytes */

void WCRWordSegPickerController::wcr_reuseSelection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  ID local_50;
  undefined4 local_48;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_selectedText_026b2a38);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQpbnR);
    local_48 = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatViewController_026b2a78);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_clickEditRevokeContent_;
    local_50 = IVar2;
    _NSSelectorFromString();
    local_58 = pcVar3;
    if ((local_50 == 0) ||
       (IVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3),
       (IVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRubelY_umo_);
      local_48 = 1;
    }
    else {
      puVar4 = PTR_WCRQuickReusePayload_026ceeb8;
      _objc_alloc_init();
      local_60 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setReEditStringContent__026a4258,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setCanReEdit__026a4268,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setReEditReferMsgSvrId__026a4278,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setReEditAtUserList__026a4288,&::cf___);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_dismiss_026b2978);
      dVar5 = _dispatch_time(0,280000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_50;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01699a54;
      local_80 = &DAT_025796f0;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_60;
      local_78 = IVar2;
      local_68 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = puVar1;
      _dispatch_after(dVar5,puVar4,&local_98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

