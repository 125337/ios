// resyncHostedWebGeometry @ 01e89ea4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::resyncHostedWebGeometry(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID local_40;
  ID local_38;
  undefined4 local_2c;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardSourceMode_026a8828);
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    if (IVar2 == 0) {
      local_2c = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webTableHostIfEligible_026c6f48);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar2;
      if ((IVar2 == 0) ||
         ((((*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isDragging_0269ddf8), (IVar2 & 1) == 0
           && (IVar2 = local_40,
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isDecelerating_0269e888),
              (IVar2 & 1) == 0)) &&
          (IVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isTracking_0269ddf0),
          (IVar2 & 1) == 0)))) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutIfNeeded_026ca790);
        uVar4 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
        uVar3 = *(undefined8 *)PTR__CGPointZero_025782e0;
        IVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scrollView_0269dcc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar4);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureHostedWebFrontmost_026c7018);
        local_2c = 0;
      }
      else {
        local_2c = 1;
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

