// updateStyles @ 01fb77e8

/* Function Stack Size: 0x10 bytes */

void WCRefineThemeRolePillControl::updateStyles(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_buttons_026b44c8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_enumerateObjectsUsingBlock__0269d3d0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28,0);
  return;
}

