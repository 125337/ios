// FUN_018245e4 @ 018245e4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_018245e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  
  dVar6 = 16.0;
  dVar4 = 16.0;
  FUN_018247bc();
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar4,dVar6,0);
  _UIGraphicsGetCurrentContext();
  dVar4 = dVar4 - 2.0;
  dVar6 = dVar6 - 2.0;
  uVar7 = 0x3ff0000000000000;
  uVar5 = 0x3ff0000000000000;
  FUN_01815654();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _CGContextFillEllipseInRect(uVar5,uVar7,dVar4,dVar6,uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b50,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  _CGContextSetStrokeColorWithColor(uVar1,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _CGContextSetLineWidth(0x3ff0000000000000,uVar1);
  _CGContextStrokeEllipseInRect(uVar5,uVar7,dVar4,dVar6);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = DAT_028e4278;
  DAT_028e4278 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _UIGraphicsEndImageContext();
  return;
}

