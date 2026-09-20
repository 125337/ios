// dismissVC @ 01d7af84

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::dismissVC(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  uint local_44;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_PopViewControllerAnimated__026a4db8;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewControllers_0269e348);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_44 = 0;
  if (1 < IVar3) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar1);
    local_44 = (uint)IVar3;
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_s_DismissMyselfAnimated__026a77e0;
  if ((local_44 & 1) == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_DismissMyselfAnimated__026a77e0);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar2,1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

