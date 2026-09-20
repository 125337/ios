// FUN_00f89938 @ 00f89938

void FUN_00f89938(double param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint local_104;
  long local_38;
  ulong local_30;
  undefined8 *local_28;
  
  local_30 = 0;
  local_28 = param_5;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  if ((((local_28 != (undefined8 *)0x0) && (local_30 != 0)) && (local_38 != 0)) &&
     ((uVar2 = local_30, dVar4 = param_1,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768), (uVar2 & 1) == 0 &&
      ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8), DAT_02323d38 <= dVar4))
     )) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_104 = 1;
    if (uVar2 != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      local_104 = (uint)uVar3;
      _CGRectIsEmpty();
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    if ((local_104 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertRect_toView__0269ded8,local_38);
      if ((4.0 <= param_3) && (4.0 <= param_4)) {
        if (0.0 < param_1) {
          _CGRectInset();
        }
        puVar1 = local_28;
        uVar5 = *local_28;
        uVar6 = local_28[1];
        uVar7 = local_28[2];
        uVar8 = local_28[3];
        _CGRectUnion();
        puVar1[1] = uVar6;
        *puVar1 = uVar5;
        puVar1[3] = uVar8;
        puVar1[2] = uVar7;
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

