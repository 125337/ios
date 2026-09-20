// setupGestures @ 01fc8964

/* Function Stack Size: 0x10 bytes */

void WebViewController::setupGestures(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIScreenEdgePanGestureRecognizer_026ce2b0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setEdges__026ca928,2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIScreenEdgePanGestureRecognizer_026ce2b0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setEdges__026ca928,8);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

