// calculateCustomWatermarkRect:imageSize:scale:centerX:centerY: @ 00726264

/* Function Stack Size: 0x48 bytes */

CGRect WCRefineScreenshotWatermarkProcessor::
       calculateCustomWatermarkRect_imageSize_scale_centerX_centerY_
                 (ID param_1,SEL param_2,CGSize param_3,CGSize param_4,double param_5,double param_6
                 ,double param_7)

{
  CGRect CVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d3;
  double in_d4;
  double in_d5;
  double in_d6;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  dVar4 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0,param_3.field0_0x0,
             param_3.field1_0x8,param_4.field0_0x0,param_4.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar3 = param_7 * ((param_5 * in_d4) / dVar4);
  dVar4 = dVar3 * (param_6 / param_5);
  FUN_00726448();
  dVar5 = param_7 * in_d5 - dVar3 / 2.0;
  dVar6 = in_d3 * in_d6 - dVar4 / 2.0;
  FUN_007260f8();
  CVar1.field0_0x0.field1_0x8 = dVar6;
  CVar1.field0_0x0.field0_0x0 = dVar5;
  CVar1.field1_0x10.field0_0x0 = dVar3;
  CVar1.field1_0x10.field1_0x8 = dVar4;
  return CVar1;
}

