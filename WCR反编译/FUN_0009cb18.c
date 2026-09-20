// FUN_0009cb18 @ 0009cb18

void FUN_0009cb18(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  uint uVar2;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  long local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  long *plVar3;
  
  plVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar3,param_5);
  uVar2 = (uint)plVar3;
  if ((local_28 == 0) || (FUN_0009d25c(), lVar4 = local_28, (uVar2 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_bounds_026ca548);
    bVar1 = true;
    dVar5 = param_3;
    dVar7 = param_3;
    dVar6 = param_2;
    local_60 = param_1;
    local_58 = param_2;
    local_50 = param_3;
    local_48 = param_4;
    if (0.0 < param_3) {
      dVar6 = param_3;
      dVar7 = param_2;
      dVar5 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      bVar1 = dVar5 <= 0.0;
      param_1 = param_3;
      local_80 = param_3;
      local_78 = dVar6;
      local_70 = dVar7;
      local_68 = dVar5;
    }
    if (bVar1) {
      local_38 = 1;
    }
    else {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_headImageView_0269e2a8);
      _objc_retainAutoreleasedReturnValue();
      local_88 = lVar4;
      if (lVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
        local_a8 = dVar5;
        local_a0 = dVar7;
        local_98 = dVar6;
        local_90 = param_1;
        FUN_0009d2f8(lVar4);
        lVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_wxHighlightedImageView_0269e2b0);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        local_b0 = lVar4;
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = lVar4 == local_88;
          (*(code *)PTR__objc_release_02578630)(lVar4);
        }
        lVar4 = local_b0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bounds_026ca548);
          FUN_0009d2f8(dVar5,dVar7,dVar6,param_1,lVar4);
        }
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_88,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

