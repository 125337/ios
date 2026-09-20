// pushKeywordAlertHistoryViewControllerFrom:animated: @ 00f9bdd0

/* Function Stack Size: 0x1c bytes */

bool WCRefineHelper::pushKeywordAlertHistoryViewControllerFrom_animated_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  byte local_31;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_keywordAlertHistoryViewControlle_026acd70);
  local_40 = IVar1;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_showModernToast__0269ce78,&cf_SSU_ub_gR_e_TQ);
    local_11 = 0;
    local_44 = 1;
  }
  else {
    _objc_alloc_init();
    local_50 = IVar1;
    if (IVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_showModernToast__0269ce78,&cf_SSU_ubSb);
      local_11 = 0;
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setHidesBottomBarWhenPushed__0269db60);
      if ((IVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      }
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar1;
      if (IVar1 == 0) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationContrioller_0269d628);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_58;
        local_58 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      if (local_58 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_showModernToast__0269ce78,&cf_S_MRubelSb);
        local_11 = 0;
      }
      else {
        IVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,
                   PTR_s_PushViewController_animated__0269cd40);
        if ((IVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_pushViewController_animated__0269d590,local_50,local_31 & 1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_PushViewController_animated__0269cd40,local_50,local_31 & 1);
        }
        local_11 = 1;
      }
      local_44 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

