// FUN_0007c690 @ 0007c690

undefined8
FUN_0007c690(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
            undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  ulong local_80 [3];
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  long local_50;
  ulong local_48;
  undefined8 local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  uVar4 = local_48;
  if ((local_48 == 0) || (local_50 == 0)) {
    dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    local_40 = *(undefined8 *)PTR__CGRectZero_025782f0;
    local_54 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar4;
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_headImageView);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_68;
    dVar7 = param_3;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_80[0] = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_bounds_026ca548);
      dVar6 = 0.5;
      bVar1 = false;
      dVar7 = param_2;
      param_4 = param_1;
      if (0.5 < param_3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_bounds_026ca548);
        bVar1 = 0.5 < param_1;
        dVar7 = dVar6;
        param_4 = param_3;
      }
      param_2 = 0.5;
      if (bVar1) {
        _objc_storeStrong(&local_60,local_80[0]);
      }
      _objc_storeStrong(local_80,0);
    }
    _objc_storeStrong(&local_68,0);
    dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    uVar5 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
      local_40 = uVar5;
      local_30 = dVar7;
      dStack_28 = param_4;
      dStack_38 = param_2;
    }
    else {
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_convertRect_toView__0269ded8,local_50);
      local_40 = uVar5;
      local_30 = dVar7;
      dStack_28 = param_4;
      dStack_38 = param_2;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    if ((local_30 <= 0.5) || (dStack_28 <= 0.5)) {
      dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
      local_40 = *(undefined8 *)PTR__CGRectZero_025782f0;
    }
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

