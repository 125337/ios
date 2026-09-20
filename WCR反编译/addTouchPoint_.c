// addTouchPoint: @ 019e20bc

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineGlyphDrawingCanvasView::addTouchPoint_
          (WCRefineGlyphDrawingCanvasView *this,ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  undefined *puVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  ID local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  double local_18;
  
  local_30 = param_2;
  local_28 = param_1;
  local_20 = in_d0;
  local_18 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_strokes_026bb048,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    in_d1 = 1.7976931348623157e+308;
    in_d0 = 1.7976931348623157e+308;
    FUN_019e22c8();
  }
  else {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  dVar3 = local_20 - in_d0;
  _hypot(dVar3,local_18 - in_d1);
  IVar1 = local_38;
  if (2.0 <= dVar3) {
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,local_18,PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsDisplay_026a3050);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

