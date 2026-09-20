// gestureRecognizer:shouldReceiveTouch: @ 01e760f4

/* Function Stack Size: 0x20 bytes */

bool WCRefineToDoCardView::gestureRecognizer_shouldReceiveTouch_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint local_84;
  ID local_68;
  undefined8 local_58;
  ID local_48;
  undefined8 local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar5 = local_30;
  puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar5 & 1) == 0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    local_84 = 0;
    if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      local_84 = 0;
      if (local_48 != 0) {
        local_58 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_68 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        uVar8 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isDescendantOfView__026ca760);
        local_84 = (uint)uVar8;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if ((local_84 & 1) == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    IVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_touchIsInCardEdgeActivationZone__026c6e60,local_38);
    local_11 = (byte)IVar6 & 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

