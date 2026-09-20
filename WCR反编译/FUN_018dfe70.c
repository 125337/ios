// FUN_018dfe70 @ 018dfe70

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_018dfe70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = 0x4030000000000000;
  uVar4 = 0x4030000000000000;
  FUN_018c4b98();
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(uVar4,uVar5,0);
  _UIGraphicsGetCurrentContext();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar5 = 0x3ff0000000000000;
  uVar4 = 0x3ff0000000000000;
  uVar7 = 0x402c000000000000;
  uVar6 = 0x402c000000000000;
  FUN_018c86b0();
  _CGContextFillEllipseInRect(uVar4,uVar5,uVar6,uVar7,uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_0232c678,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  _CGContextSetStrokeColorWithColor(uVar1,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar6 = 0x3ff0000000000000;
  uVar7 = 0x402c000000000000;
  uVar4 = uVar6;
  uVar5 = uVar7;
  FUN_018c86b0();
  _CGContextStrokeEllipseInRect(uVar6,uVar4,uVar7,uVar5);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = DAT_028e4300;
  DAT_028e4300 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _UIGraphicsEndImageContext();
  return;
}

