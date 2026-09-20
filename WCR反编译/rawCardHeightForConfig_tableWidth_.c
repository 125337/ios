// rawCardHeightForConfig:tableWidth: @ 01e749f4

/* Function Stack Size: 0x20 bytes */

double WCRefineToDoCardView::rawCardHeightForConfig_tableWidth_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  dVar3 = param_4;
  if (local_30 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardHeight_026a8948);
  if (dVar3 <= 0.0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_preferredRawCardHeightForConfig__026c6dd8,local_30);
    local_18 = param_4;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardHeight_026a8948);
    local_18 = dVar3;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

