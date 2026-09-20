// layoutRowHeightForConfig:tableWidth: @ 01e75424

/* Function Stack Size: 0x20 bytes */

double WCRefineToDoCardView::layoutRowHeightForConfig_tableWidth_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double local_68;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  dVar3 = 1.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardTopSpacing_026a8958);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_layoutCardHeightForConfig_tableW_026a8998,local_28);
  local_68 = dVar3 + param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardBottomSpacing_026a8960);
  local_68 = dVar3 + param_4 + local_68;
  if (local_68 <= 1.0) {
    local_68 = 1.0;
  }
  _objc_storeStrong(&local_28,0);
  return local_68;
}

