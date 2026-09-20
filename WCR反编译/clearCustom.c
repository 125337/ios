// clearCustom @ 01c4f074

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateSpecialUserDetailViewController::clearCustom(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setRemovedExclusive__026c1c98,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDraftDirty__026c1be8,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeNameplateSpecialUser__026c1ca0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification();
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__ydhQ__);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_PopViewControllerAnimated__026a4db8;
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_PopViewControllerAnimated__026a4db8);
  if ((IVar2 & 1) == 0) {
    if (local_28 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_popViewControllerAnimated__0269ede0,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

