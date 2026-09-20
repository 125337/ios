// showSwipeQuoteOppositeActionSelector: @ 01a4223c

/* Function Stack Size: 0x14 bytes */

void WCRefineGeneralFunctionViewController::showSwipeQuoteOppositeActionSelector_
               (ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  ID IVar3;
  char *local_40;
  cfstringStruct *local_38;
  char *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  pcVar2 = "WCUIActionSheet";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    pcVar1 = &cf_b_eSKbRR_O;
    if ((local_21 & 1) == 0) {
      pcVar1 = &cf_bbeSKbRR_O;
    }
    local_30 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_30;
    local_38 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    if ((local_21 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_18,
                 PTR_s_handleMySwipeOppositeAction1__026bc708);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_lS,local_18,
                 PTR_s_handleMySwipeOppositeAction2__026bc710);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_6e,local_18,
                 PTR_s_handleMySwipeOppositeAction5__026bc718);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_18,
                 PTR_s_handleMySwipeOppositeAction4__026bc720);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleMySwipeOppositeAction0__026bc728);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___u,local_18,
                 PTR_s_handleMySwipeOppositeAction3__026bc730);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_d,local_18,
                 PTR_s_handleMySwipeOppositeAction8__026bc738);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleMySwipeOppositeAction9__026bc740);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_u,local_18,
                 PTR_s_handleMySwipeOppositeAction10__026bc748);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nb,local_18,
                 PTR_s_handleMySwipeOppositeAction11__026bc750);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_ORh,local_18,
                 PTR_s_handleMySwipeOppositeAction12__026bc758);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_dV,local_18,
                 PTR_s_handleMySwipeOppositeAction6__026bc760);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_eR_O,local_18,
                 PTR_s_handleMySwipeOppositeAction7__026bc768);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_18,
                 PTR_s_handleOtherSwipeOppositeAction1__026bc6a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_lS,local_18,
                 PTR_s_handleOtherSwipeOppositeAction2__026bc6a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_6e,local_18,
                 PTR_s_handleOtherSwipeOppositeAction5__026bc6b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_18,
                 PTR_s_handleOtherSwipeOppositeAction4__026bc6b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleOtherSwipeOppositeAction0__026bc6c0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___u,local_18,
                 PTR_s_handleOtherSwipeOppositeAction3__026bc6c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_d,local_18,
                 PTR_s_handleOtherSwipeOppositeAction8__026bc6d0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleOtherSwipeOppositeAction9__026bc6d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_u,local_18,
                 PTR_s_handleOtherSwipeOppositeAction10_026bc6e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nb,local_18,
                 PTR_s_handleOtherSwipeOppositeAction11_026bc6e8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_ORh,local_18,
                 PTR_s_handleOtherSwipeOppositeAction12_026bc6f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_dV,local_18,
                 PTR_s_handleOtherSwipeOppositeAction6__026bc6f8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_eR_O,local_18,
                 PTR_s_handleOtherSwipeOppositeAction7__026bc700);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_40;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

