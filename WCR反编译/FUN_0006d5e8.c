// FUN_0006d5e8 @ 0006d5e8

void FUN_0006d5e8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double local_2b8;
  long local_58;
  long local_50 [3];
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_38 = lVar2;
    FUN_00071900();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_38;
    local_50[0] = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x24f6e4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    bVar1 = false;
    local_58 = lVar4;
    if ((lVar4 != 0) && (local_38 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_38);
      dVar5 = param_4;
      uVar8 = param_3;
      uVar9 = param_2;
      dVar7 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      _CGRectGetMidX(dVar5,uVar8,uVar9,dVar7);
      dVar6 = param_1;
      uVar8 = param_3;
      dVar10 = param_4;
      _CGRectGetMidX(param_1,param_2);
      dVar5 = dVar5 - dVar6;
      dVar7 = ABS(dVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      _CGRectGetMidY(dVar7,dVar6,uVar8,dVar10);
      _CGRectGetMidY(param_1,param_2);
      dVar7 = dVar7 - param_1;
      local_2b8 = ABS(dVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      _CGRectGetWidth();
      dVar6 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      _CGRectGetHeight(dVar6,param_1,param_3,param_4);
      if (local_2b8 < dVar6) {
        local_2b8 = dVar6;
      }
      bVar1 = false;
      if (ABS(dVar5) <= local_2b8) {
        bVar1 = ABS(dVar7) <= local_2b8;
      }
    }
    if ((local_58 != 0) && ((local_38 != local_50[0] || (bVar1)))) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
    }
    FUN_0006faf4(local_28);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(local_50,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

