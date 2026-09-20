// installWebEdgeLongPressIfNeeded @ 01e87b78

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::installWebEdgeLongPressIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    _objc_getAssociatedObject(param_1,&DAT_028e4831);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_48 = param_1;
    if (param_1 != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_1 != IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_removeGestureRecognizer__026ca808,local_48);
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWebEdgeLongPressGesture__026c7268);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(DAT_02323e88);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_38;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (IVar5 != IVar2) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_removeGestureRecognizer__026ca808);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_38;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addGestureRecognizer__026ca4a8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    IVar2 = local_38;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webEdgeLongPressGesture_026c7260);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar2,&DAT_028e4831,IVar4,1);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

