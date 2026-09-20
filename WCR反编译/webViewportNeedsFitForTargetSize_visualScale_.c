// webViewportNeedsFitForTargetSize:visualScale: @ 01e78250

/* Function Stack Size: 0x28 bytes */

bool __thiscall
WCRefineToDoCardView::webViewportNeedsFitForTargetSize_visualScale_
          (WCRefineToDoCardView *this,ID param_1,SEL param_2,CGSize param_3,double param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  double dVar5;
  double in_d1;
  double dVar6;
  double in_d2;
  double in_d3;
  
  IVar4 = param_1;
  dVar5 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_webView_026a12c0,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  dVar5 = ABS(dVar5 - param_4);
  bVar1 = true;
  if (dVar5 <= 0.5) {
    dVar5 = ABS(in_d3 - in_d1);
    bVar1 = 0.5 < dVar5;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastWebFitViewportSize_026c6ed8);
  dVar5 = ABS(dVar5 - param_4);
  dVar6 = 0.5;
  bVar2 = true;
  if (dVar5 <= 0.5) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastWebFitViewportSize_026c6ed8);
    dVar5 = ABS(dVar6 - in_d1);
    bVar2 = 0.5 < dVar5;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastWebFitVisualScale_026c6ee0);
  bVar3 = true;
  if ((!bVar1) && (bVar3 = true, !bVar2)) {
    bVar3 = DAT_02323db0 < ABS(dVar5 - in_d2);
  }
  if (bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_4,in_d1,param_1,PTR_s_setLastWebFitViewportSize__026c6ee8);
    (*(code *)PTR__objc_msgSend_02578628)(in_d2,param_1,PTR_s_setLastWebFitVisualScale__026c6ef0);
  }
  return (uint)bVar3;
}

