// prepareForReuse @ 01fb8e40

/* Function Stack Size: 0x10 bytes */

void WCRefineThemeCardCell::prepareForReuse(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = PTR_WCRefineThemeCardCell_026d02c0;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_prepareForReuse_0269e760);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_coverView_026c9eb8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_badgeLabel_026aa858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_placeholderLabel_026accd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

