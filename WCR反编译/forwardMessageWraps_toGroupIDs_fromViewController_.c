// forwardMessageWraps:toGroupIDs:fromViewController: @ 00f70030

/* Function Stack Size: 0x28 bytes */

void WCRefineForwardToGroupHelper::forwardMessageWraps_toGroupIDs_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  IVar2 = local_18;
  uVar1 = local_28;
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_bR_);
  }
  else {
    lVar3 = local_30;
    FUN_00f7016c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_forwardMessageWraps_toUsernames__026ac9e0,uVar1,lVar3,0,local_38);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

