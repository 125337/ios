// handleMove: @ 01ed73f0

/* Function Stack Size: 0x18 bytes */

void WCRToDoAdjustmentFloatingPanel::handleMove_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  double in_d1;
  double dVar5;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translationInView__026cabb0,IVar1);
    lVar2 = local_28;
    dVar4 = in_d0;
    dVar5 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (lVar2 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_center_026ca560);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4 + in_d0,dVar5 + in_d1,local_18,PTR_s_setCenter__026ca8c0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGPointZero_025782e0,
                 *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),local_28,
                 PTR_s_setTranslation_inView__026a9fe8,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clampToWindow__026b8140,local_30);
    }
    else {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
      if ((lVar2 == 3) ||
         (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
         lVar2 == 4)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clampToWindow__026b8140,local_30);
        puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
        _NSStringFromCGPoint(dVar4,dVar5);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_setObject_forKey__026ca9e8,IVar1,&cf_WCRToDoAdjustmentPanelOrigin);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

