// layoutCardHeightForConfig:tableWidth: @ 01e75200

/* Function Stack Size: 0x20 bytes */

double WCRefineToDoCardView::layoutCardHeightForConfig_tableWidth_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  dVar3 = param_4;
  if (local_28 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  FUN_01e74f0c(local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_rawCardHeightForConfig_tableWidt_026c6e18,local_28);
  _objc_storeStrong(&local_28,0);
  return param_4 * dVar3;
}

