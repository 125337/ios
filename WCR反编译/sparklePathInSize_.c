// sparklePathInSize: @ 0170e4bc

/* Function Stack Size: 0x18 bytes */

ID SwitchThemesDayNight::sparklePathInSize_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  dVar2 = param_3 / 2.0;
  local_48 = dVar2 * DAT_02323e88;
  dVar3 = dVar2;
  local_40 = dVar2;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  FUN_0170e490();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_58 = dVar2;
  local_50 = dVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = local_50 - local_40;
  dVar3 = local_58;
  local_60 = puVar1;
  FUN_0170e490();
  (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar2,puVar1,PTR_s_moveToPoint__026a01b0);
  puVar1 = local_60;
  dVar2 = local_58 + local_40;
  dVar3 = local_50;
  FUN_0170e490();
  dVar4 = local_58 + local_48;
  dVar5 = local_50 - local_48;
  FUN_0170e490();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar2,dVar3,dVar4,dVar5,puVar1,PTR_s_addQuadCurveToPoint_controlPoint_026b3920);
  puVar1 = local_60;
  dVar4 = local_50 + local_40;
  dVar3 = local_58;
  FUN_0170e490();
  dVar2 = local_58 + local_48;
  dVar5 = local_50 + local_48;
  FUN_0170e490();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar3,dVar4,dVar2,dVar5,puVar1,PTR_s_addQuadCurveToPoint_controlPoint_026b3920);
  puVar1 = local_60;
  dVar2 = local_58 - local_40;
  dVar3 = local_50;
  FUN_0170e490();
  dVar4 = local_58 - local_48;
  dVar5 = local_50 + local_48;
  FUN_0170e490();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar2,dVar3,dVar4,dVar5,puVar1,PTR_s_addQuadCurveToPoint_controlPoint_026b3920);
  puVar1 = local_60;
  dVar4 = local_50 - local_40;
  dVar3 = local_58;
  FUN_0170e490();
  dVar2 = local_58 - local_48;
  dVar5 = local_50 - local_48;
  FUN_0170e490();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar3,dVar4,dVar2,dVar5,puVar1,PTR_s_addQuadCurveToPoint_controlPoint_026b3920);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_closePath_026a66f8);
  puVar1 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

