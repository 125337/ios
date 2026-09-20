// FUN_007845d4 @ 007845d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_007845d4(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5,long *param_6,undefined1 *param_7)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  long local_118;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  long local_e8;
  double local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  double local_b0;
  undefined8 uStack_a8;
  byte local_81;
  double local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  undefined1 *local_58;
  long *local_50;
  long local_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if (param_6 != (long *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  local_58 = param_7;
  local_50 = param_6;
  if (local_48 == 0) {
    if (param_7 != (undefined1 *)0x0) {
      *param_7 = 1;
    }
    uStack_38 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_40 = *(double *)PTR__CGRectZero_025782f0;
    uStack_28 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    local_5c = 1;
    goto LAB_00784b68;
  }
  uStack_78 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
  local_80 = *(double *)PTR__CGRectNull_025782e8;
  uStack_68 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
  dVar3 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
  local_81 = 0;
  lVar2 = local_48;
  local_70 = dVar3;
  FUN_00785174(local_48,local_48,0,&local_80,&local_81);
  uVar1 = (uint)lVar2;
  if ((local_81 & 1) != 0) {
    uStack_b8 = uStack_78;
    local_c0 = local_80;
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    dVar3 = local_80;
    param_2 = uStack_78;
    param_3 = local_70;
    param_4 = uStack_68;
    _CGRectIsNull();
    if ((uVar1 & 1) == 0) {
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      uStack_c8 = uStack_68;
      local_d0 = local_70;
      dVar3 = local_80;
      param_2 = uStack_78;
      param_3 = local_70;
      param_4 = uStack_68;
      _CGRectIsEmpty();
      if ((uVar1 & 1) == 0) {
        lVar2 = local_48;
        FUN_00785968();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = lVar2;
        if (local_50 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_50 = lVar2;
        }
        uStack_108 = uStack_78;
        local_110 = local_80;
        uStack_f8 = uStack_68;
        local_100 = local_70;
        dVar3 = local_80;
        uVar5 = uStack_78;
        dVar4 = local_70;
        uVar7 = uStack_68;
        _CGRectInset();
        local_5c = 1;
        local_40 = dVar3;
        uStack_38 = uVar5;
        local_30 = dVar4;
        uStack_28 = uVar7;
        _objc_storeStrong(&local_e8,0);
        goto LAB_00784b68;
      }
    }
  }
  lVar2 = local_48;
  FUN_00785968();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = dVar3;
  uVar5 = param_2;
  dVar6 = param_3;
  uVar7 = param_4;
  local_118 = lVar2;
  if ((lVar2 == 0) || (lVar2 == local_48)) {
LAB_00784ae4:
    if (local_58 != (undefined1 *)0x0) {
      *local_58 = 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_40 = dVar4;
    uStack_38 = uVar5;
    local_30 = dVar6;
    uStack_28 = uVar7;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_48);
    uVar1 = (uint)lVar2;
    dVar4 = dVar3;
    uVar5 = param_2;
    dVar6 = param_3;
    uVar7 = param_4;
    _CGRectIsNull();
    if (((uVar1 & 1) != 0) ||
       (dVar4 = dVar3, uVar5 = param_2, dVar6 = param_3, uVar7 = param_4, _CGRectIsEmpty(),
       (uVar1 & 1) != 0)) goto LAB_00784ae4;
    dVar4 = dVar3;
    dVar6 = param_3;
    uVar7 = param_4;
    _CGRectGetWidth(dVar3,param_2);
    uVar5 = 0x4018000000000000;
    if (dVar4 < 6.0) goto LAB_00784ae4;
    dVar4 = dVar3;
    dVar6 = param_3;
    uVar7 = param_4;
    _CGRectGetHeight(dVar3,param_2);
    lVar2 = local_118;
    uVar5 = 0x4018000000000000;
    if (dVar4 < 6.0) goto LAB_00784ae4;
    if (local_50 != (long *)0x0) {
      _objc_retainAutorelease();
      *local_50 = lVar2;
    }
    _CGRectInset();
    local_40 = dVar3;
    uStack_38 = param_2;
    local_30 = param_3;
    uStack_28 = param_4;
  }
  local_5c = 1;
  _objc_storeStrong(&local_118,0);
LAB_00784b68:
  _objc_storeStrong(&local_48,0);
  return local_40;
}

