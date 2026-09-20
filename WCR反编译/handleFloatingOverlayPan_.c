// handleFloatingOverlayPan: @ 0166aad8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::handleFloatingOverlayPan_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  double in_d1;
  double dVar4;
  double dVar5;
  ulong local_a8;
  double local_a0;
  double dStack_98;
  double local_88;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
    local_44 = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (uVar1 == 1) {
      uVar1 = local_40;
      FUN_0164f268(0);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectTextOverlay__026b20f8,local_40);
      }
    }
    uVar1 = local_38;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_translationInView__026cabb0);
    local_58 = in_d0;
    local_50 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
    in_d0 = in_d0 + local_58;
    dVar5 = in_d0;
    dVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
    dVar4 = dVar4 + local_50;
    local_88 = dVar5;
    FUN_0164494c();
    local_a0 = in_d0;
    dStack_98 = dVar4;
    local_68 = in_d0;
    dStack_60 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCenter__026ca8c0);
    uVar1 = local_40;
    _objc_getAssociatedObject(local_40,DAT_028c6018);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_a8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_center_026ca560);
      in_d0 = in_d0 + local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_center_026ca560);
      dVar5 = local_58 + local_50;
      FUN_0164494c();
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,dVar5,local_a8,PTR_s_setCenter__026ca8c0);
    }
    uVar1 = local_38;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGPointZero_025782e0,
               *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),uVar1,
               PTR_s_setTranslation_inView__026a9fe8);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_a8,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

