// FUN_008897dc @ 008897dc

void FUN_008897dc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  undefined4 local_60;
  undefined8 local_50;
  long local_48;
  long local_40;
  double local_38;
  double dStack_30;
  long local_28;
  
  local_40 = 0;
  local_38 = param_1;
  dStack_30 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  lVar2 = local_40;
  FUN_00889ad4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  lVar1 = local_48;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar1;
    local_60 = 1;
  }
  else if ((DAT_028cd4e8 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar1;
    local_60 = 1;
  }
  else {
    dStack_68 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_70 = *(double *)PTR__CGSizeZero_025782f8;
    dVar3 = 0.0;
    local_78 = 0.0;
    if (local_48 == 0) {
      if ((local_38 <= 0.0) || (dStack_30 <= 0.0)) {
        dVar4 = 1.0;
        dVar3 = 1.0;
        FUN_00889c6c();
        local_98 = dVar3;
        dStack_90 = dVar4;
        local_70 = dVar3;
        dStack_68 = dVar4;
      }
      else {
        dStack_68 = dStack_30;
        local_70 = local_38;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_size_026cab00);
      lVar2 = local_48;
      local_88 = dVar3;
      dStack_80 = param_2;
      local_70 = dVar3;
      dStack_68 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scale_026ca830);
      local_78 = dVar3;
    }
    FUN_00889c98(local_70,dStack_68,local_78);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_48;
    local_a0 = lVar2;
    if (lVar2 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar2;
    }
    local_60 = 1;
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

