// wcr_renderLaserCard: @ 01ddcaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsViewController::wcr_renderLaserCard_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  double in_d0;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ID local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  ID local_188;
  ID local_180;
  ID local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_114;
  double local_108;
  ulong local_f0;
  SEL local_e8;
  ID local_e0;
  ID local_d8;
  undefined1 auStack_d0 [128];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  uVar2 = local_f0;
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_size_026cab00);
    dVar6 = 8.0;
    if (8.0 <= in_d0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_size_026cab00);
      dVar7 = 8.0;
      local_108 = dVar6;
      if (8.0 <= dVar6) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_size_026cab00);
        local_130 = dVar6;
        local_128 = dVar7;
        local_120 = dVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_size_026cab00);
        local_150 = 0x4028000000000000;
        local_158 = 0x4028000000000000;
        dVar5 = local_120 + 24.0;
        dVar8 = dVar7 + 24.0;
        local_148 = dVar6;
        local_140 = dVar7;
        local_138 = dVar7;
        FUN_01ddcf50();
        puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        local_168 = dVar5;
        local_160 = dVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_170 = dVar5;
        if (dVar5 < 3.0) {
          local_170 = 3.0;
        }
        dVar6 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scale_026ca830);
        if (local_170 < dVar6) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scale_026ca830);
          local_170 = dVar6;
        }
        IVar3 = 1;
        _UIGraphicsBeginImageContextWithOptions(local_168,local_160,local_170);
        _UIGraphicsGetCurrentContext();
        local_178 = IVar3;
        _CGColorSpaceCreateDeviceRGB();
        uStack_48 = _UNK_0233a460;
        local_50 = _DAT_0233a458;
        uStack_38 = _UNK_0233a470;
        local_40 = _DAT_0233a468;
        local_180 = IVar3;
        _memcpy(auStack_d0,&DAT_0233a478,0x80);
        IVar4 = local_180;
        _CGGradientCreateWithColorComponents(local_180,auStack_d0,&local_50,4);
        IVar3 = local_178;
        dVar7 = local_168 * 0.5;
        uVar9 = 0;
        local_188 = IVar4;
        FUN_01ddcf7c();
        dVar5 = local_168 * 0.5;
        dVar6 = local_160;
        local_198 = dVar7;
        local_190 = uVar9;
        FUN_01ddcf7c();
        local_1a8 = dVar5;
        local_1a0 = dVar6;
        _CGContextDrawLinearGradient(local_198,local_190,dVar5,dVar6,IVar3,IVar4,0);
        _CGGradientRelease(local_188);
        _CGColorSpaceRelease(local_180);
        uVar9 = local_150;
        uVar10 = local_158;
        dVar6 = local_120;
        dVar7 = local_138;
        FUN_01dca788();
        local_1c8 = uVar9;
        local_1c0 = uVar10;
        local_1b8 = dVar6;
        local_1b0 = dVar7;
        _CGContextSaveGState(local_178);
        puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c8,local_1c0,local_1b8,local_1b0,0x4032000000000000,
                   PTR__OBJC_CLASS___UIBezierPath_026ce268,
                   PTR_s_bezierPathWithRoundedRect_corner_026ca530);
        _objc_retainAutoreleasedReturnValue();
        local_1d0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addClip_026ca4a0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c8,local_1c0,local_1b8,local_1b0,local_f0,PTR_s_drawInRect__026ca610);
        IVar3 = local_178;
        _CGContextRestoreGState();
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = IVar3;
        _UIGraphicsEndImageContext();
        IVar3 = local_1d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = IVar3;
        local_114 = 1;
        _objc_storeStrong(&local_1d8);
        _objc_storeStrong(&local_1d0,0);
        goto LAB_01ddcf08;
      }
    }
  }
  local_d8 = 0;
  local_114 = 1;
LAB_01ddcf08:
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_d8;
}

