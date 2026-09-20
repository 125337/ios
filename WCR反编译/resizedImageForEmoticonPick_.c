// resizedImageForEmoticonPick: @ 00f4efd8

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::resizedImageForEmoticonPick_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined1 *local_1e0;
  double local_1d0;
  double local_1c0;
  double local_1b0;
  undefined1 *local_178;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  double dStack_128;
  double local_118;
  double local_110;
  undefined4 local_104;
  double local_100;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0 [5];
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_44;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined1 *local_28;
  
  local_40 = (undefined1 *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar3 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    local_28 = (undefined1 *)0x0;
    local_44 = 1;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGImage_0269e0e8);
    local_50 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_158 = (undefined1 *)0x0;
    }
    else {
      _CGImageGetWidth();
      local_158 = puVar3;
    }
    local_58 = local_158;
    if (local_50 == (undefined1 *)0x0) {
      local_160 = (undefined1 *)0x0;
    }
    else {
      local_160 = local_50;
      _CGImageGetHeight();
    }
    puVar3 = local_40;
    local_60 = local_160;
    if ((&section_00000248.reloff < local_58) || (&section_00000248.reloff < local_160)) {
      local_68 = PTR_s_scaleToFillSize__026ac4c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_scaleToFillSize__026ac4c0);
      if (((ulong)puVar3 & 1) != 0) {
        local_178 = local_40;
        _object_getClass();
        if (local_178 == (undefined1 *)0x0) {
          local_178 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
        }
        local_70 = local_178;
        local_78 = PTR_s_calculateFitSize_maxWidth_maxHei_026ac4c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178,PTR_s_respondsToSelector__026ca818,
                   PTR_s_calculateFitSize_maxWidth_maxHei_026ac4c8);
        puVar2 = local_70;
        puVar3 = local_78;
        if (((ulong)local_178 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,0x4084000000000000,puVar2,puVar3);
        }
        puVar4 = local_40;
        puVar3 = local_68;
        uVar7 = 0x4084000000000000;
        uVar5 = 0x4084000000000000;
        FUN_00f3845c();
        local_b0 = uVar5;
        local_a8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar7,puVar4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_a0[0] = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        puVar2 = local_a0[0];
        bVar1 = ((ulong)puVar4 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar2;
        }
        local_44 = (uint)bVar1;
        _objc_storeStrong(local_a0,0);
        if (local_44 != 0) goto LAB_00f4f548;
      }
      puVar3 = local_40;
      local_c0 = (double)NEON_ucvtf(local_58);
      local_c8 = (double)NEON_ucvtf(local_60);
      local_1b0 = local_c0;
      if (local_c0 < local_c8) {
        local_1b0 = local_c8;
      }
      local_d0 = local_1b0;
      local_b8 = local_1b0;
      if (640.0 < local_1b0) {
        local_d8 = 640.0 / local_1b0;
        local_ec = 1;
        dVar6 = (double)NEON_ucvtf(local_58);
        local_f8 = (double)(long)(dVar6 * local_d8);
        local_1c0 = local_f8;
        if (local_f8 <= 1.0) {
          local_1c0 = 1.0;
        }
        local_100 = local_1c0;
        local_104 = 1;
        dVar6 = (double)NEON_ucvtf(local_60);
        local_110 = (double)(long)(dVar6 * local_d8);
        local_1d0 = local_110;
        if (local_110 <= 1.0) {
          local_1d0 = 1.0;
        }
        local_118 = local_1d0;
        FUN_00f3845c();
        local_e8 = local_1c0;
        dStack_e0 = local_1d0;
        _UIGraphicsBeginImageContextWithOptions(local_1c0,local_1d0,0x3ff0000000000000,1);
        uStack_138 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
        local_140 = *(undefined8 *)PTR__CGPointZero_025782e0;
        dStack_128 = dStack_e0;
        local_130 = local_e8;
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,uStack_138,local_e8,dStack_e0,local_40,PTR_s_drawInRect__026ca610);
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar3;
        _UIGraphicsEndImageContext();
        if (local_148 == (undefined1 *)0x0) {
          local_1e0 = local_40;
        }
        else {
          local_1e0 = local_148;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_1e0;
        local_44 = 1;
        _objc_storeStrong(&local_148,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar3;
        local_44 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
      local_44 = 1;
    }
  }
LAB_00f4f548:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

