// FUN_016b5200 @ 016b5200

void FUN_016b5200(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double local_1e8;
  double local_1c8;
  double local_1a8;
  double local_180;
  undefined *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined *local_118;
  undefined *local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  double local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
    if (param_1 <= 0.0) {
      local_180 = 1.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
      local_180 = param_1;
    }
    local_40 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    dVar3 = local_180 * local_40;
    dVar4 = local_40;
    local_68 = local_180;
    local_60 = param_2;
    local_58 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    puVar1 = local_30;
    local_98 = dVar4 * local_40;
    local_90 = local_58;
    local_1a8 = local_98;
    if (local_98 <= local_58) {
      local_1a8 = local_58;
    }
    local_a0 = local_1a8;
    local_88 = local_1a8;
    local_80 = dVar3;
    local_78 = dVar4;
    local_70 = local_98;
    if (200.5 < local_1a8) {
      local_a8 = 200.0 / local_1a8;
      dVar4 = 1.0;
      local_c0 = 1.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      local_f8 = (double)(long)(dVar4 * local_a8);
      local_1c8 = local_f8;
      if (local_f8 <= local_c0) {
        local_1c8 = local_c0;
      }
      local_e0 = local_1c8;
      uVar5 = 0x3ff0000000000000;
      local_e8 = 1.0;
      local_d8 = dVar4;
      local_d0 = local_1a8;
      local_c8 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      local_f0 = (double)(long)(local_f8 * local_a8);
      local_1e8 = local_f0;
      if (local_f0 <= local_e8) {
        local_1e8 = local_e8;
      }
      local_108 = local_1e8;
      local_100 = uVar5;
      FUN_01696f7c();
      puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648;
      local_b8 = local_1c8;
      dStack_b0 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648,
                 PTR_s_defaultFormat_026ca5e8);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setOpaque__026ca9f8,0);
      puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,local_110,PTR_s_setScale__026caa28);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
      _objc_alloc();
      dStack_128 = dStack_b0;
      local_130 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,dStack_b0,puVar2,PTR_s_initWithSize_format__026ca700,local_110);
      puVar1 = local_30;
      local_118 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = puVar1;
      dStack_138 = dStack_b0;
      local_140 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageWithActions__026ca688);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar2;
      _objc_storeStrong(&local_148);
      local_34 = 1;
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_110,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

