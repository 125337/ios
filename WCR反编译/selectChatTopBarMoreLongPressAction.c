// selectChatTopBarMoreLongPressAction @ 01a44dc8

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::selectChatTopBarMoreLongPressAction
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIActionSheet";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_RbceY,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc7f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_d__U_,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc800);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_cNd__,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc808);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__DeaS,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc810);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_ORh,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc818);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Mn_ub,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc820);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_O_,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc828);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NRM,local_18,
               PTR_s_handleChatTopBarMoreLongPressAct_026bc830);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_30;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

