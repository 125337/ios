// handleHTMLEdgeLongPress: @ 0080f71c

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileBgHTMLEdgePress::handleHTMLEdgeLongPress_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_148;
  ID local_98;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (((lVar1 == 3) ||
      (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
      lVar1 == 4)) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
     lVar1 == 5)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTriggered__026a8bc0,0);
  }
  else {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if ((lVar1 == 1) &&
       (IVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggered_026a8bc8),
       lVar1 = local_38, (IVar2 & 1) == 0)) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_locationInView__026ca798);
      uVar5 = in_d0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      IVar3 = local_28;
      uVar4 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,uVar4,uVar5,in_d2,in_d3,IVar2,
                 PTR_s_pointIsInHTMLEdgeActivationZone__026a8bb8);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((IVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTriggered__026a8bc0,1);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_profileCardView_026a8ba0);
        _objc_retainAutoreleasedReturnValue();
        local_148 = IVar2;
        if (IVar2 == 0) {
          local_98 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
          _objc_retainAutoreleasedReturnValue();
          local_148 = local_98;
        }
        FUN_0080fbc0(local_148);
        if (IVar2 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

