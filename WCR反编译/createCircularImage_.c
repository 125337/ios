// createCircularImage: @ 01cadb38

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginTopViewController::createCircularImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d1;
  undefined8 uVar7;
  double dVar8;
  double local_138;
  ID local_128;
  double local_120;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_48;
  double local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
  local_48 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
  local_138 = in_d1;
  if (local_48 < in_d1) {
    local_138 = local_48;
  }
  local_78 = local_138;
  local_40 = local_138;
  dVar6 = local_138;
  FUN_01cade20();
  local_88 = local_138;
  local_80 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scale_026ca830);
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(local_88,local_80,local_138);
  _UIGraphicsGetCurrentContext();
  uVar7 = 0;
  dVar3 = 0.0;
  dVar6 = local_40;
  dVar4 = local_40;
  local_90 = uVar1;
  FUN_01cade4c();
  local_b0 = dVar3;
  local_a8 = uVar7;
  local_a0 = dVar6;
  local_98 = dVar4;
  _CGContextAddEllipseInRect(dVar3,uVar7,dVar6,dVar4,local_90);
  _CGContextClip(local_90);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
  dVar8 = 2.0;
  dVar4 = (dVar3 - local_40) / 2.0;
  local_c8 = dVar3;
  local_c0 = uVar7;
  local_b8 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
  uVar1 = 0x4000000000000000;
  local_d0 = (dVar8 - local_40) / 2.0;
  dVar5 = -local_b8;
  dVar3 = -local_d0;
  dVar6 = dVar3;
  local_e0 = dVar4;
  local_d8 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
  dVar4 = dVar6;
  local_110 = dVar6;
  local_108 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
  local_120 = dVar4;
  local_118 = uVar1;
  FUN_01cade4c();
  IVar2 = local_38;
  local_100 = dVar5;
  local_f8 = dVar3;
  local_f0 = dVar6;
  local_e8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar3,dVar6,uVar1,local_38,PTR_s_drawInRect__026ca610)
  ;
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar2;
  _UIGraphicsEndImageContext();
  IVar2 = local_128;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

