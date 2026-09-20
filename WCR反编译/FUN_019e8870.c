// FUN_019e8870 @ 019e8870

void FUN_019e8870(undefined8 param_1)

{
  double dVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  long local_170;
  long local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined *local_50;
  long *local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  undefined *local_28;
  
  dVar1 = DAT_02323d48;
  plVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(plVar2,param_1);
  if (local_30 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_28 = puVar3;
  }
  else {
    local_40 = 0x20;
    _CGColorSpaceCreateDeviceRGB();
    puVar3 = PTR__OBJC_CLASS___NSMutableData_026ce660;
    local_48 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,0x1000);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_mutableBytes_026a3370);
    _CGBitmapContextCreate();
    _CGColorSpaceRelease(local_48);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar3;
    }
    else {
      uVar8 = 0;
      uVar5 = 0;
      uVar12 = 0x4040000000000000;
      uVar11 = 0x4040000000000000;
      FUN_019e39e8();
      _CGContextClearRect(uVar5,uVar8,uVar11,uVar12,puVar3);
      local_1c0 = 1.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      if (local_1c0 <= 1.0) {
        local_1c0 = 1.0;
      }
      dVar6 = 32.0 / local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      local_1c8 = local_1c0;
      if (local_1c0 <= 1.0) {
        local_1c8 = 1.0;
      }
      local_1d0 = 32.0 / local_1c8;
      if (dVar6 < local_1d0) {
        local_1d0 = dVar6;
      }
      dVar6 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar6 = dVar6 * local_1d0;
      dVar9 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar9 = dVar9 * local_1d0;
      FUN_019e3a34();
      dVar7 = (32.0 - dVar6) * 0.5;
      dVar10 = (32.0 - dVar9) * 0.5;
      FUN_019e39e8();
      _CGContextTranslateCTM(0,0x4040000000000000,puVar3);
      _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,puVar3);
      _UIGraphicsPushContext(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar7,dVar10,dVar6,dVar9,local_30,PTR_s_drawInRect__026ca610);
      _UIGraphicsPopContext();
      _CGContextRelease(puVar3);
      puVar3 = local_50;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_bytes_026a9630);
      local_148 = 0.0;
      local_150 = 0.0;
      local_158 = 0.0;
      local_160 = 0.0;
      local_168 = 0;
      for (local_170 = 0; local_170 < 0x400; local_170 = local_170 + 1) {
        lVar4 = local_170 * 4;
        dVar6 = (double)(byte)puVar3[lVar4 + 3] / 255.0;
        if ((DAT_02323cc0 <= dVar6) &&
           ((((double)(byte)puVar3[lVar4] / 255.0 <= dVar1 ||
             ((double)(byte)puVar3[lVar4 + 1] / 255.0 <= dVar1)) ||
            ((double)(byte)puVar3[lVar4 + 2] / 255.0 <= dVar1)))) {
          local_148 = local_148 + dVar6 * ((double)(byte)puVar3[lVar4] / 255.0);
          local_150 = local_150 + dVar6 * ((double)(byte)puVar3[lVar4 + 1] / 255.0);
          local_158 = local_158 + dVar6 * ((double)(byte)puVar3[lVar4 + 2] / 255.0);
          local_160 = local_160 + dVar6;
          local_168 = local_168 + 1;
        }
      }
      if ((local_168 == 0) || (local_160 <= 0.0)) {
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar3;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148 / local_160,local_150 / local_160,local_158 / local_160,
                   0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar3;
      }
    }
    local_34 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

