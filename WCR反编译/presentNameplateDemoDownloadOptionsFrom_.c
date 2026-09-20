// presentNameplateDemoDownloadOptionsFrom: @ 00fc0720

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::presentNameplateDemoDownloadOptionsFrom_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  ID IVar5;
  ID local_60;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  byte local_39;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_39 = 0;
  bVar1 = local_28 == 0;
  if (bVar1) {
    local_60 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  else {
    local_60 = local_28;
  }
  local_39 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,&cf_el9_Qb);
    local_40 = 1;
  }
  else {
    pcVar3 = "WCActionSheet";
    _objc_getClass();
    local_48 = pcVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
    ppuVar4 = &PTR___NSConcreteGlobalBlock_02583b70;
    local_50 = pcVar3;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,&cf_8YKQQ_vN_);
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    pcVar3 = local_50;
    puVar2 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
    ppuVar4 = &PTR___NSConcreteGlobalBlock_02583b90;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,&cf__v_Q_vN_);
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,
               PTR_s_setCancelButtonTitle_eventAction_026a0f68);
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_Sm,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setCancelButtonTitle_eventAction_026a0f68,&cf_Sm,0);
    }
    pcVar3 = local_50;
    puVar2 = PTR_s_showInView__0269d310;
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_50,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

