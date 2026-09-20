// rawCardWidthForAvailableWidth:config: @ 01e74b0c

/* Function Stack Size: 0x20 bytes */

double WCRefineToDoCardView::rawCardWidthForAvailableWidth_config_
                 (ID param_1,SEL param_2,double param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double in_d2;
  double local_b8;
  double local_b0;
  undefined *local_38;
  double local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_38 = (undefined *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  if (local_38 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  local_b0 = local_30;
  if (local_30 < 1.0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = local_b0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardWidth_026a8950);
  dVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardSideMargin_026a8968);
  if (local_b0 <= 0.0) {
    local_b8 = local_30 - dVar3 * 2.0;
    if (local_b8 <= 0.0) {
      local_b8 = 0.0;
    }
    local_18 = local_b8;
  }
  else {
    if (local_30 <= local_b0) {
      local_b0 = local_30;
    }
    local_18 = local_b0;
  }
  _objc_storeStrong(&local_38,0);
  return local_18;
}

