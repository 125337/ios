// showMessageTripleTapActionSelector: @ 01a4555c

/* Function Stack Size: 0x14 bytes */

void WCRefineGeneralFunctionViewController::showMessageTripleTapActionSelector_
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
    pcVar1 = &cf_bNQ_emo_KbR;
    if ((local_21 & 1) == 0) {
      pcVar1 = &cf_bNQbemo_KbR;
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
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_lS,local_18,
                 PTR_s_handleMyMessageTripleTapAction0__026bc940);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleMyMessageTripleTapAction1__026bc948);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_18,
                 PTR_s_handleMyMessageTripleTapAction3__026bc950);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_u,local_18,
                 PTR_s_handleMyMessageTripleTapAction4__026bc958);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleMyMessageTripleTapAction5__026bc960);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nb,local_18,
                 PTR_s_handleMyMessageTripleTapAction6__026bc968);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___u,local_18,
                 PTR_s_handleMyMessageTripleTapAction7__026bc970);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___ue_,local_18,
                 PTR_s_handleMyMessageTripleTapAction8__026bc978);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_DeaS,local_18,
                 PTR_s_handleMyMessageTripleTapAction9__026bc980);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_ORh,local_18,
                 PTR_s_handleMyMessageTripleTapAction10_026bc988);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_ed_O,local_18,
                 PTR_s_handleMyMessageTripleTapAction2__026bc990);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_lS,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc8e8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc8f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc8f8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_u,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc900);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc908);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nb,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc910);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___u,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc918);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___ue_,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc920);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_DeaS,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc928);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_ORh,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc930);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_ed_O,local_18,
                 PTR_s_handleOtherMessageTripleTapActio_026bc938);
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

