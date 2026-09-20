// FUN_0020e1d8 @ 0020e1d8

void FUN_0020e1d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double local_1d8;
  double local_d8;
  ulong local_b0;
  ulong local_a0;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar4 = local_28;
    FUN_00214708(local_28,&cf_contentView);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_38 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar4 & 1) == 0) {
      _objc_storeStrong(&local_38,local_28);
    }
    uVar4 = local_28;
    FUN_00214708(local_28,&cf_headImageView);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_28;
    local_50[0] = uVar4;
    FUN_00214708(local_28,&cf_titleLabel);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_58 = uVar6;
    FUN_00214708(local_28,&cf_messageLabel);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    uVar4 = local_50[0];
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    dVar8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar4 & 1) != 0) {
      dVar8 = param_1;
      FUN_002149c8(local_50[0],local_38);
    }
    uVar4 = local_58;
    puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar4 & 1) == 0) {
      local_2c = 1;
    }
    else {
      FUN_00214dd8(local_58);
      uVar4 = local_60;
      bVar3 = false;
      bVar2 = false;
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_1d8 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      bVar1 = false;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isHidden_026ca768);
        bVar1 = false;
        if ((uVar4 & 1) == 0) {
          local_a0 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = true;
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          uVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isKindOfClass__0269cd68,puVar5);
          bVar1 = false;
          if ((uVar4 & 1) != 0) {
            local_b0 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            uVar4 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = uVar4 != 0;
          }
        }
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if (bVar1) {
        FUN_00214dd8(local_60);
      }
      else {
        local_1d8 = 0.0;
      }
      fVar7 = 4.0;
      if (!bVar1) {
        fVar7 = 0.0;
      }
      dVar9 = dVar8 + (double)fVar7 + local_1d8;
      if (1.0 <= dVar9) {
        local_d8 = (double)(long)(param_1 - dVar9 * 0.5);
        if (local_d8 < 0.0) {
          local_d8 = 0.0;
        }
        FUN_002150b0(bVar1,local_d8,dVar8,local_58,local_38);
        if (bVar1 != false) {
          FUN_002150b0(local_d8 + dVar8 + (double)fVar7,local_1d8,local_60,local_38);
        }
        local_2c = 0;
      }
      else {
        local_2c = 1;
      }
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(local_50,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

