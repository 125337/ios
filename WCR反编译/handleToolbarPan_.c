// handleToolbarPan: @ 016446c8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::handleToolbarPan_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_translationInView__026cabb0);
  dVar3 = in_d0;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if ((lVar2 == 2) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
     lVar2 == 3)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toolbarDragOffset_026b1e38);
    dVar3 = dVar3 + in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toolbarDragOffset_026b1e38);
    in_d0 = in_d0 + in_d1;
    FUN_0164494c();
    (*(code *)PTR__objc_msgSend_02578628)(dVar3,in_d0,local_18,PTR_s_setToolbarDragOffset__026b1c68)
    ;
    lVar2 = local_28;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGPointZero_025782e0,
               *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),lVar2,
               PTR_s_setTranslation_inView__026a9fe8);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

