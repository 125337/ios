// currentContentTextColor @ 01e7b7f8

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoCardView::currentContentTextColor(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDarkModeForBackgroundMedia_026c6fd0);
  bVar1 = (IVar3 & 1) == 0;
  local_60 = local_30;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardLocalTextColorLight_026c6fe0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_60;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardLocalTextColorDark_026c6fd8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_60;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

