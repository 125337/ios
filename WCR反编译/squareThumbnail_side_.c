// squareThumbnail:side: @ 0198ced4

/* Function Stack Size: 0x20 bytes */

ID WCRefineFileManagerViewController::squareThumbnail_side_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  ID local_178;
  double local_158;
  ID local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined *local_68;
  double local_60;
  double local_58;
  undefined4 local_4c;
  double local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = param_4;
  if (local_40 == 0) {
    local_28 = 0;
    local_4c = 1;
  }
  else {
    dVar4 = param_4;
    FUN_0197b3e0();
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_60 = param_4;
    local_58 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _UIGraphicsBeginImageContextWithOptions(local_60,local_58,param_4,0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    uVar8 = 0;
    uVar3 = 0;
    dVar4 = local_48;
    dVar10 = local_48;
    FUN_0198a0ec();
    local_88 = uVar3;
    local_80 = uVar8;
    local_78 = dVar4;
    local_70 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,uVar8,dVar4,dVar10,0x4014000000000000,puVar1,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addClip_026ca4a0);
    dVar4 = local_48;
    dVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    dVar10 = local_48;
    local_98 = dVar4 / dVar5;
    dVar4 = local_48;
    local_a8 = dVar5;
    local_a0 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_d8 = dVar10 / dVar5;
    local_158 = local_d8;
    if (local_d8 <= local_98) {
      local_158 = local_98;
    }
    local_c8 = local_158;
    local_90 = local_158;
    local_c0 = dVar4;
    local_b8 = dVar5;
    local_b0 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    dVar5 = local_158 * local_90;
    dVar4 = local_90;
    local_e0 = local_158;
    local_d0 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    IVar2 = local_40;
    dVar6 = dVar4 * local_90;
    dVar7 = (local_48 - local_d0) / 2.0;
    dVar9 = (local_48 - dVar6) / 2.0;
    dVar10 = local_d0;
    local_f8 = dVar5;
    local_f0 = dVar4;
    local_e8 = dVar6;
    FUN_0198a0ec();
    local_118 = dVar7;
    local_110 = dVar9;
    local_108 = dVar10;
    local_100 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(dVar7,dVar9,dVar10,dVar6,IVar2,PTR_s_drawInRect__026ca610)
    ;
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_120 = IVar2;
    _UIGraphicsEndImageContext();
    if (local_120 == 0) {
      local_178 = local_40;
    }
    else {
      local_178 = local_120;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_178;
    local_4c = 1;
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

