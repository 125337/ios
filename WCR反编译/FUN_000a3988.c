// FUN_000a3988 @ 000a3988

void FUN_000a3988(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long local_218;
  undefined *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined4 local_fc;
  long local_f8;
  long local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined *local_a8;
  ulong local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_71;
  undefined *local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
  local_60 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  dStack_48 = param_4;
  local_40 = param_3;
  dStack_38 = param_4;
  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
    local_28 = (undefined *)0x0;
    local_64 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    dVar7 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar5 = local_40;
    dVar6 = dStack_38;
    _UIGraphicsBeginImageContextWithOptions(0);
    (*(code *)PTR__objc_release_02578630)();
    _UIGraphicsGetCurrentContext();
    uVar3 = local_30;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    local_98 = dVar5;
    local_90 = dVar6;
    local_88 = param_4;
    local_80 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_drawViewHierarchyInRect_afterScr_0269e2f8,0);
    local_71 = (undefined1)uVar3;
    if (((uVar3 & 1) == 0) && (local_70 != (undefined *)0x0)) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar3;
    _UIGraphicsEndImageContext();
    uVar3 = local_a0;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_CGImage_0269e0e8);
    if (uVar3 == 0) {
      local_28 = (undefined *)0x0;
      local_64 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      uVar4 = local_30;
      local_e8 = dVar5;
      local_e0 = dVar6;
      local_d8 = param_4;
      local_d0 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      dVar5 = local_e8;
      dVar6 = local_e0;
      dVar7 = local_d8;
      dVar8 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8);
      local_c8 = dVar5;
      local_c0 = dVar6;
      local_b8 = dVar7;
      local_b0 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,dVar6,dVar7,dVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
      local_a8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setClipsToBounds__026ca8c8,0);
      local_f0 = 10;
      local_fc = 1;
      local_108 = (long)((dStack_38 * 10.0) / local_40);
      local_218 = local_108;
      if (local_108 < 2) {
        local_218 = 1;
      }
      local_110 = local_218;
      local_f8 = local_218;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,
                 local_218 * 10);
      _objc_retainAutoreleasedReturnValue();
      local_118 = puVar2;
      for (local_120 = 0; local_120 < local_f8; local_120 = local_120 + 1) {
        for (local_128 = 0; local_128 < local_f0; local_128 = local_128 + 1) {
          local_130 = (local_40 * (double)local_128) / (double)local_f0;
          local_138 = (local_40 * (double)(local_128 + 1)) / (double)local_f0;
          local_140 = (dStack_38 * (double)local_120) / (double)local_f8;
          local_148 = (dStack_38 * (double)(local_120 + 1)) / (double)local_f8;
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          dVar7 = local_138 - local_130;
          dVar8 = local_148 - local_140;
          dVar5 = local_130;
          dVar6 = local_140;
          FUN_000a430c();
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar5,dVar6,dVar7,dVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
          uVar3 = local_a0;
          local_150 = puVar2;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_CGImage_0269e0e8);
          puVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          dVar5 = (double)local_128 / (double)local_f0;
          dVar6 = (double)local_120 / (double)local_f8;
          dVar7 = (double)(1.0 / (float)local_f0);
          dVar8 = (double)(1.0 / (float)local_f8);
          FUN_000a430c();
          puVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar6,dVar7,dVar8);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar1 = local_150;
          puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_center_026ca560);
          (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar6,puVar2,PTR_s_valueWithCGPoint__0269e328)
          ;
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar1,&DAT_028c806b,puVar2,1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addSubview__026ca4c0,local_150);
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_addObject__0269d180,local_150);
          _objc_storeStrong(&local_150,0);
        }
      }
      _objc_setAssociatedObject(local_a8,&DAT_028c806c,local_118,1);
      puVar2 = local_a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_64 = 1;
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

