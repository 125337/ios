// FUN_007633ec @ 007633ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_007633ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_5;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_7);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_convertRect_toView__0269ded8,*(undefined8 *)(param_5 + 0x20));
  dVar2 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_convertRect_toView__0269ded8,*(undefined8 *)(param_5 + 0x20));
  (*(code *)PTR__objc_release_02578630)(uVar1);
  dVar3 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar4 = dVar2;
  _CGRectGetMinY(dVar2,uVar5,uVar6,uVar7);
  if (ABS(dVar3 - dVar4) <= 1.0) {
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    _CGRectGetMinX(dVar2,uVar5,uVar6,uVar7);
    local_28 = 1;
    if (param_1 < dVar2) {
      local_28 = 0xffffffffffffffff;
    }
  }
  else {
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    _CGRectGetMinY(dVar2,uVar5,uVar6,uVar7);
    local_28 = 1;
    if (param_1 < dVar2) {
      local_28 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

