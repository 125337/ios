// FUN_001da12c @ 001da12c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_001da12c(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long local_38;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  if ((local_30 == 0) || (local_38 == 0)) {
    local_21 = false;
  }
  else {
    uVar2 = (uint)local_30;
    FUN_001d2ddc();
    uVar4 = local_30;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar4 & 1) == 0) {
        local_21 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        uVar4 = local_30;
        if (ABS(param_3 - 56.0) <= 2.0) {
          dVar5 = ABS(param_4 - 40.0);
          dVar8 = 2.0;
          if (dVar5 <= 2.0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_convertRect_toView__0269ded8,local_38)
            ;
            dVar6 = param_1;
            dVar9 = dVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
            if ((dVar9 < 1.0) || (dVar6 < 1.0)) {
              local_21 = false;
            }
            else {
              dVar7 = dVar5;
              _CGRectGetMaxX(dVar5,dVar8,param_2,param_1);
              bVar1 = false;
              if (dVar9 - 2.0 <= dVar7) {
                _CGRectGetMaxY(dVar5,dVar8,param_2,param_1);
                bVar1 = dVar6 - 2.0 <= dVar5;
              }
              local_21 = false;
              if (bVar1) {
                local_21 = param_3 < dVar9 * 0.75 || param_4 < dVar6 * 0.75;
              }
            }
            goto LAB_001da668;
          }
        }
        local_21 = false;
      }
    }
    else {
      local_21 = true;
    }
  }
LAB_001da668:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

