// showMessageDoubleTapActionSelector: @ 01a45030

/* Function Stack Size: 0x14 bytes */

void WCRefineGeneralFunctionViewController::showMessageDoubleTapActionSelector_
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
    pcVar1 = &cf_b_emo_KbR;
    if ((local_21 & 1) == 0) {
      pcVar1 = &cf_bbemo_KbR;
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
                 PTR_s_handleMyMessageDoubleTapAction0__026bc890);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleMyMessageDoubleTapAction1__026bc898);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_18,
                 PTR_s_handleMyMessageDoubleTapAction3__026bc8a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_u,local_18,
                 PTR_s_handleMyMessageDoubleTapAction4__026bc8a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleMyMessageDoubleTapAction5__026bc8b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nb,local_18,
                 PTR_s_handleMyMessageDoubleTapAction6__026bc8b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___u,local_18,
                 PTR_s_handleMyMessageDoubleTapAction7__026bc8c0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___ue_,local_18,
                 PTR_s_handleMyMessageDoubleTapAction8__026bc8c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_DeaS,local_18,
                 PTR_s_handleMyMessageDoubleTapAction9__026bc8d0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_ORh,local_18,
                 PTR_s_handleMyMessageDoubleTapAction10_026bc8d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_ed_O,local_18,
                 PTR_s_handleMyMessageDoubleTapAction2__026bc8e0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_lS,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc838);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc840);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc848);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_u,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc850);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc858);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nb,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___u,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc868);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf___ue_,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc870);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_DeaS,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc878);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_ORh,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc880);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_ed_O,local_18,
                 PTR_s_handleOtherMessageDoubleTapActio_026bc888);
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

