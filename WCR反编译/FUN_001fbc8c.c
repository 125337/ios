// FUN_001fbc8c @ 001fbc8c

double FUN_001fbc8c(double param_1,undefined8 param_2,double param_3,double param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  double local_60;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  uVar2 = local_20;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
      if (((uVar2 & 1) != 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8),
         param_1 <= DAT_02323cd0)) {
        local_18 = -1.7976931348623157e+308;
      }
      else {
        uVar2 = local_20;
        FUN_001fbf38();
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
          uVar2 = local_20;
          local_60 = param_3 * param_4;
          if (120.0 <= local_60) {
            puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar2 & 1) != 0) {
              local_60 = local_60 + 2000000.0;
            }
            local_18 = local_60;
          }
          else {
            local_18 = -1.7976931348623157e+308;
          }
        }
        else {
          local_18 = -1.7976931348623157e+308;
        }
      }
      goto LAB_001fbf14;
    }
  }
  local_18 = -1.7976931348623157e+308;
LAB_001fbf14:
  _objc_storeStrong(&local_20,0);
  return local_18;
}

