// imagePointFromDisplayPoint: @ 01d4c764

/* Function Stack Size: 0x20 bytes */

CGPoint WCRefineScreenshotFrameEditorViewController::imagePointFromDisplayPoint_
                  (ID param_1,SEL param_2,CGPoint param_3)

{
  CGPoint CVar1;
  double in_d0;
  double dVar2;
  double in_d1;
  double dVar3;
  
  dVar2 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_displayScale_026b6d38,param_3.field0_0x0,param_3.field1_0x8);
  dVar2 = in_d0 / dVar2;
  dVar3 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayScale_026b6d38);
  dVar3 = in_d1 / dVar3;
  FUN_01d47748();
  CVar1.field1_0x8 = dVar3;
  CVar1.field0_0x0 = dVar2;
  return CVar1;
}

