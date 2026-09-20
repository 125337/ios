// handleTranslateStickerPan: @ 0167a0f8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::handleTranslateStickerPan_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  double in_d0;
  double dVar4;
  double in_d1;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_30 = lVar2;
  if (lVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_translationInView__026cabb0);
    dVar4 = in_d0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_center_026ca560);
    dVar4 = dVar4 + in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_center_026ca560);
    in_d0 = in_d0 + in_d1;
    FUN_0164494c();
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,in_d0,local_30,PTR_s_setCenter__026ca8c0);
    lVar1 = local_28;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGPointZero_025782e0,
               *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),lVar1,
               PTR_s_setTranslation_inView__026a9fe8);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

