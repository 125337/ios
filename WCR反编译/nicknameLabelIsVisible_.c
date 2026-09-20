// nicknameLabelIsVisible: @ 010deb78

/* Function Stack Size: 0x18 bytes */

bool WCRefineNameplateHelper::nicknameLabelIsVisible_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double in_d0;
  double dVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_d0;
  ulong local_a0;
  ulong local_90;
  ulong local_88;
  ulong local_80 [2];
  double local_70;
  double local_50;
  uint local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
    if (((uVar2 & 1) != 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8), in_d0 < DAT_02323d38))
    {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      uVar2 = local_30;
      dVar4 = DAT_02323d38;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      local_50 = dVar4;
      _CGRectIsEmpty();
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        local_70 = dVar4;
        _CGRectGetWidth(in_d0,dVar4,in_d2,in_d3);
        uVar2 = local_30;
        if (1.0 <= in_d0) {
          puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar3 = local_30;
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_80[0] = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            local_d0 = uVar3;
            if (uVar3 == 0) {
              local_90 = local_80[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_attributedText_0269fcf8);
              _objc_retainAutoreleasedReturnValue();
              local_a0 = local_90;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_d0 = local_a0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_88 = local_d0;
            if (uVar3 == 0) {
              (*(code *)PTR__objc_release_02578630)(local_a0);
              (*(code *)PTR__objc_release_02578630)(local_90);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar2 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
            if (uVar2 == 0) {
              local_11 = 0;
            }
            local_34 = (uint)(uVar2 == 0);
            _objc_storeStrong(&local_88);
            _objc_storeStrong(local_80,0);
            if (local_34 != 0) goto LAB_010def40;
          }
          local_11 = 1;
          local_34 = 1;
          goto LAB_010def40;
        }
      }
      local_11 = 0;
      local_34 = 1;
    }
  }
LAB_010def40:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

