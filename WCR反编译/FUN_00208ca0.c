// FUN_00208ca0 @ 00208ca0

double FUN_00208ca0(double param_1,long param_2,double param_3,double param_4,undefined8 param_5,
                   undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_a0;
  ulong local_70;
  long local_68;
  double local_60;
  long lStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  long lStack_38;
  double local_30;
  double dStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  lStack_58 = param_2;
  local_50 = param_3;
  dStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_6);
  if ((local_70 == 0) ||
     (uVar1 = local_70,
     (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_msgBannerBeautifyEnabled_026a06b8),
     (uVar1 & 1) == 0)) {
    lStack_38 = lStack_58;
    local_40 = local_60;
    dStack_28 = dStack_48;
    local_30 = local_50;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_msgBannerWidth_026a0698);
    dVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_msgBannerHeight_026a06a0);
    if ((param_1 <= 0.0) || (dVar3 <= 0.0)) {
      lStack_38 = lStack_58;
      local_40 = local_60;
      dStack_28 = dStack_48;
      local_30 = local_50;
    }
    else {
      local_a0 = local_60;
      _CGRectGetMidX(local_60,lStack_58,local_50,dStack_48);
      dVar4 = local_60;
      dVar7 = local_50;
      dVar8 = dStack_48;
      _CGRectGetMidY(local_60,lStack_58);
      FUN_001e6228();
      lVar2 = local_68;
      dVar5 = local_a0;
      dVar6 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar2 != 0) {
        lVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        _CGRectGetMidX(dVar5,dVar6,dVar7,dVar8);
        (*(code *)PTR__objc_release_02578630)(lVar2);
        local_a0 = dVar5;
      }
      local_30 = (double)(long)param_1;
      dStack_28 = (double)(long)dVar3;
      local_40 = (double)(long)(local_a0 - local_30 * 0.5);
      lStack_38 = (long)(dVar4 - dStack_28 * 0.5);
    }
  }
  local_60 = local_40;
  lStack_58 = lStack_38;
  local_50 = local_30;
  dStack_48 = dStack_28;
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  return local_40;
}

