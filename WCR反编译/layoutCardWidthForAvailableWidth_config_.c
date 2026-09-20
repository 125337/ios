// layoutCardWidthForAvailableWidth:config: @ 01e752dc

/* Function Stack Size: 0x20 bytes */

double WCRefineToDoCardView::layoutCardWidthForAvailableWidth_config_
                 (ID param_1,SEL param_2,double param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  if (local_30 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  FUN_01e74f0c(local_30);
  dVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_rawCardWidthForAvailableWidth_co_026c6e20,local_30);
  _objc_storeStrong(&local_30,0);
  return dVar3 * param_3;
}

