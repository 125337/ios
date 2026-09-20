// touchesMoved:withEvent: @ 019e24b8

/* Function Stack Size: 0x20 bytes */

void WCRefineGlyphDrawingCanvasView::touchesMoved_withEvent_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_anyObject_026a4b10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,IVar1,PTR_s_addTouchPoint__026bb058);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

