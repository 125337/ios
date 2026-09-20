// listAlignedIconFromImage:side: @ 0110bb2c

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginIconCatalog::listAlignedIconFromImage_side_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulong local_1a0;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  ulong local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulong local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_4c;
  double local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_28 = 0;
    local_4c = 1;
  }
  else {
    if (local_48 <= 0.0) {
      local_170 = 25.0;
    }
    else {
      local_170 = local_48;
    }
    local_58 = local_170;
    local_60 = (double)(long)(local_170 * DAT_02324258);
    if (local_60 < 8.0) {
      local_60 = local_170;
    }
    dVar3 = local_170;
    FUN_0110846c();
    uVar2 = 0;
    local_70 = local_170;
    local_68 = dVar3;
    _UIGraphicsBeginImageContextWithOptions(local_170,dVar3,0);
    _UIGraphicsGetCurrentContext();
    dVar3 = (local_58 - local_60) * 0.5;
    dVar4 = dVar3;
    dVar5 = local_60;
    dVar6 = local_60;
    local_80 = dVar3;
    local_78 = uVar2;
    FUN_0110bae0();
    local_a0 = dVar3;
    local_98 = dVar4;
    local_90 = dVar5;
    local_88 = dVar6;
    if (local_78 != 0) {
      _CGContextSaveGState(local_78);
      dVar3 = local_a0;
      dVar4 = local_98;
      _CGContextAddEllipseInRect(local_a0,local_98,local_90,local_88,local_78);
      _CGContextClip(local_78);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_c8 = 0x3ff0000000000000;
    local_e8 = 1.0;
    local_178 = dVar3;
    if (dVar3 < 1.0) {
      local_178 = 1.0;
    }
    local_d0 = local_178;
    local_a8 = local_178;
    local_c0 = dVar3;
    local_b8 = dVar4;
    local_b0 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_f8 = 0x3ff0000000000000;
    local_180 = local_e8;
    if (local_e8 < 1.0) {
      local_180 = 1.0;
    }
    local_100 = local_180;
    local_d8 = local_180;
    local_110 = local_60 / local_a8;
    local_118 = local_60 / local_180;
    local_188 = local_110;
    if (local_110 < local_118) {
      local_188 = local_118;
    }
    local_120 = local_188;
    local_108 = local_188;
    dVar3 = local_a8 * local_188;
    local_180 = local_180 * local_188;
    local_f0 = local_178;
    local_e0 = local_e8;
    FUN_0110846c();
    uVar2 = local_40;
    dVar4 = local_80 + (local_60 - dVar3) * 0.5;
    dVar5 = local_80 + (local_60 - local_180) * 0.5;
    local_130 = dVar3;
    local_128 = local_180;
    FUN_0110bae0();
    local_150 = dVar4;
    local_148 = dVar5;
    local_140 = dVar3;
    local_138 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar4,dVar5,dVar3,local_180,uVar2,PTR_s_drawInRect__026ca610);
    if (local_78 != 0) {
      uVar2 = local_78;
      _CGContextRestoreGState();
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar2;
    _UIGraphicsEndImageContext();
    uVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_imageWithRenderingMode__026ca690,1);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = uVar2;
    if (uVar2 == 0) {
      local_1a0 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_1a0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_4c = 1;
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

