// resizedImage:side: @ 0110b750

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginIconCatalog::resizedImage_side_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulong local_170;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  ulong local_120;
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
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
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
      local_138 = 28.0;
    }
    else {
      local_138 = local_48;
    }
    local_58 = local_138;
    dVar3 = local_138;
    FUN_0110846c();
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_68 = local_138;
    local_60 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar3 = local_68;
    dVar4 = local_60;
    _UIGraphicsBeginImageContextWithOptions(local_68,local_60,local_138,0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_90 = 0x3ff0000000000000;
    local_b0 = 1.0;
    local_148 = dVar3;
    if (dVar3 < 1.0) {
      local_148 = 1.0;
    }
    local_98 = local_148;
    local_70 = local_148;
    local_88 = dVar3;
    local_80 = dVar4;
    local_78 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_c0 = 0x3ff0000000000000;
    local_150 = local_b0;
    if (local_b0 < 1.0) {
      local_150 = 1.0;
    }
    local_c8 = local_150;
    local_a0 = local_150;
    local_d8 = local_58 / local_70;
    local_e0 = local_58 / local_150;
    local_158 = local_e0;
    if (local_d8 < local_e0) {
      local_158 = local_d8;
    }
    local_e8 = local_158;
    local_d0 = local_158;
    dVar3 = local_70 * local_158;
    local_150 = local_150 * local_158;
    local_b8 = local_148;
    local_a8 = local_b0;
    FUN_0110846c();
    uVar2 = local_40;
    dVar4 = (local_58 - dVar3) * 0.5;
    dVar5 = (local_58 - local_150) * 0.5;
    local_f8 = dVar3;
    local_f0 = local_150;
    FUN_0110bae0();
    local_118 = dVar4;
    local_110 = dVar5;
    local_108 = dVar3;
    local_100 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar4,dVar5,dVar3,local_150,uVar2,PTR_s_drawInRect__026ca610);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_120 = uVar2;
    _UIGraphicsEndImageContext();
    if (local_120 == 0) {
      local_170 = local_40;
    }
    else {
      local_170 = local_120;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_170;
    local_4c = 1;
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

