// viewWillLayoutSubviews @ 01eb3774

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListEditorViewController::viewWillLayoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = PTR_WCRefineToDoListEditorViewController_026d01d8;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_viewWillLayoutSubviews_0269f360);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundGradient_026b32f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

