// presentUnlockFromViewController: @ 01121184

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::presentUnlockFromViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_48 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPresenter__026af118,local_48);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_plusLongPressFaceIDEnabled_026af028);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentSettingsPasswordAlert_026af108);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_evaluateFaceIDThenUnlockSettings_026af120);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

