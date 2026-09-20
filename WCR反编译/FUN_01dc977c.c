// FUN_01dc977c @ 01dc977c

void FUN_01dc977c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR_WCRefineSessionStatsViewController_026ce2c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSessionStatsViewController_026ce2c0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_showScanLoadingToast_026c5660);
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_PushViewController_animated__0269cd40);
  if ((uVar2 & 1) == 0) {
    if (local_28 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_20,1,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_pushViewController_animated__0269d590,local_20,1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_PushViewController_animated__0269cd40,local_20,1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

