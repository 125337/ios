// FUN_000d1cb0 @ 000d1cb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_000d1cb0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte local_21c;
  ulong local_50;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  uVar5 = local_30;
  puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((uVar5 & 1) == 0) || (local_38 == 0)) {
    local_21 = 0;
  }
  else {
    bVar1 = false;
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
    bVar2 = true;
    if ((uVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8);
      bVar2 = true;
      param_2 = DAT_02323cd0;
      if (DAT_02323cd0 <= param_1) {
        local_50 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar2 = local_50 == 0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar2) {
      local_21 = 0;
    }
    else {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_convertRect_toView__0269ded8,local_38);
      dVar7 = param_4;
      dVar8 = param_3;
      dVar9 = param_2;
      dVar10 = param_1;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      lVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      uVar3 = (uint)lVar6;
      _CGRectIsEmpty(param_1,param_2,param_3,param_4);
      if (((uVar3 & 1) == 0) && (_CGRectIsEmpty(dVar7,dVar8,dVar9,dVar10), (uVar3 & 1) == 0)) {
        local_21c = 0;
        if (dVar9 * 0.75 <= param_3) {
          local_21c = 0;
          if (dVar10 * 0.75 <= param_4) {
            local_21c = 0;
            _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar7,dVar8,dVar9,dVar10);
          }
        }
        local_21 = local_21c & 1;
      }
      else {
        local_21 = 0;
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

