// FUN_00207e30 @ 00207e30

double FUN_00207e30(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                   uint param_6)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_2a0;
  double local_298;
  double local_288;
  double local_280;
  double local_278;
  double local_178;
  double local_120;
  double local_90;
  double local_88;
  ulong local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  dStack_58 = param_2;
  local_50 = param_3;
  dStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  uVar1 = local_68;
  FUN_00207ce4();
  if ((uVar1 & 1) == 0) {
    FUN_002093f8(local_68);
    local_90 = param_1;
    FUN_0020984c(local_68);
    uVar1 = local_68;
    FUN_0020870c();
    local_88 = param_1;
    if (param_1 < 80.0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_278 = param_3;
      local_288 = param_4;
      if (param_3 < param_4) {
        local_278 = param_4;
        local_288 = param_3;
      }
      local_280 = local_288;
      if ((uVar1 & 1) != 0) {
        local_280 = local_278;
      }
      local_88 = local_280;
      if (local_90 < 1.0) {
        if ((uVar1 & 1) == 0) {
          local_288 = local_278;
        }
        local_90 = local_288;
      }
    }
    FUN_00209c98((uint)uVar1 & 1);
    local_120 = 180.0;
    if (1.0 < local_90) {
      local_298 = local_90 * 0.5;
      if (local_298 <= 56.0) {
        local_298 = 56.0;
      }
      if (local_298 <= 180.0) {
        local_2a0 = local_298;
      }
      else {
        local_2a0 = 180.0;
      }
      local_120 = local_2a0;
    }
    dVar3 = local_60;
    _CGRectGetWidth(local_60,dStack_58,local_50,dStack_48);
    if (local_88 + 0.5 < dVar3) {
      local_178 = local_60;
      dVar4 = dStack_58;
      dVar5 = local_50;
      dVar6 = dStack_48;
      _CGRectGetMidX();
      uVar1 = local_68;
      dVar3 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar1 != 0) {
        uVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        _CGRectGetMidX(dVar3,dVar4,dVar5,dVar6);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_178 = dVar3;
      }
      local_50 = (double)(long)local_88;
      local_60 = (double)(long)(local_178 - local_50 * 0.5);
    }
    dVar3 = local_60;
    _CGRectGetHeight(local_60,dStack_58,local_50,dStack_48);
    if (local_120 + 0.5 < dVar3) {
      dVar3 = local_60;
      _CGRectGetHeight(local_60,dStack_58,local_50,dStack_48);
      dStack_48 = (double)(long)local_120;
      if ((param_6 & 1) == 0) {
        dStack_58 = (double)(long)(dStack_58 + (dVar3 - dStack_48) * 0.5);
      }
    }
  }
  local_40 = local_60;
  dStack_38 = dStack_58;
  local_30 = local_50;
  dStack_28 = dStack_48;
  _objc_storeStrong(&local_68,0);
  return local_40;
}

