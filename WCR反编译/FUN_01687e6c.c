// FUN_01687e6c @ 01687e6c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01687e6c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  long *local_148;
  double local_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  undefined *local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  double local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  long *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long *local_98;
  undefined4 local_8c;
  long local_88;
  double local_80;
  undefined8 uStack_78;
  double local_70;
  double dStack_68;
  undefined *local_60;
  double local_58;
  double local_50;
  undefined8 uStack_48;
  double local_40;
  double dStack_38;
  long local_30;
  undefined *local_28;
  
  FUN_01688b74();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_30 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  dStack_38 = param_4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  if (local_30 == 0) {
    plVar4 = (long *)PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(plVar5);
    (*(code *)PTR__objc_release_02578630)();
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_coordinateSpace_0269cb30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar7 = param_3;
    local_80 = param_1;
    uStack_78 = param_2;
    local_70 = param_3;
    dStack_68 = param_4;
    local_50 = param_1;
    uStack_48 = param_2;
    local_40 = param_3;
    dStack_38 = param_4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screen_0269f4f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = param_3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_windows_0269dde0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    plVar4 = &local_88;
    local_88 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObjectsFromArray__0269d540,local_88);
    _objc_storeStrong(plVar4,0);
    param_3 = dVar7;
  }
  if ((local_40 <= 0.0) || (dStack_38 <= 0.0)) {
    local_28 = (undefined *)0x0;
    local_8c = 1;
  }
  else {
    FUN_0168773c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648;
    local_98 = plVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648,PTR_s_defaultFormat_026ca5e8
              );
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar1,PTR_s_setScale__026caa28);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setOpaque__026ca9f8,0);
    puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
    _objc_alloc();
    dVar8 = dStack_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_40);
    puVar1 = local_60;
    local_b0 = 0;
    local_108 = PTR___NSConcreteGlobalBlock_02578658;
    local_100 = 0xd0800000;
    local_fc = 0;
    local_f8 = FUN_0168911c;
    local_f0 = &DAT_02587e40;
    uStack_d8 = uStack_48;
    local_e0 = local_50;
    dStack_c8 = dStack_38;
    local_d0 = local_40;
    dVar7 = local_40;
    local_a8 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = puVar1;
    local_c0 = &local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_imageWithActions__026ca688,&local_108);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar6;
    if ((local_b0 == 0) && (local_98 != (long *)0x0)) {
      puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
      local_140 = dVar7;
      local_138 = dVar8;
      local_130 = param_3;
      dStack_128 = param_4;
      local_120 = param_3;
      dStack_118 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_3,param_4,puVar6,PTR_s_initWithSize_format__026ca700,local_a0);
      plVar4 = local_98;
      local_168 = PTR___NSConcreteGlobalBlock_02578658;
      local_160 = 0xd0800000;
      local_15c = 0;
      local_158 = FUN_01689698;
      local_150 = &DAT_0257da88;
      local_110 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = plVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_imageWithActions__026ca688,&local_168);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_b8;
      local_b8 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_110,0);
    }
    puVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
    local_8c = 1;
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

