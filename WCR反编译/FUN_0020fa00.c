// FUN_0020fa00 @ 0020fa00

byte FUN_0020fa00(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double local_420;
  double local_3b8;
  double local_350;
  double local_2e8;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar3 = local_30;
  if ((local_30 == 0) || (local_38 == 0)) {
    local_21 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      dVar5 = param_3;
      if (param_3 <= 0.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
        local_2e8 = param_2;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
        local_2e8 = param_2;
      }
      local_350 = local_2e8;
      local_3b8 = local_2e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      if (param_3 <= 0.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      if (dVar5 <= 0.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      }
      local_420 = local_3b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      if (dVar5 <= 0.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      }
      if ((((local_2e8 <= 0.0) || (local_350 <= 0.0)) || (local_3b8 <= 0.0)) || (local_420 <= 0.0))
      {
        local_21 = 0;
      }
      else if ((local_3b8 < local_2e8 * 0.75) || (dVar5 = local_350 * 0.75, local_420 < dVar5)) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
        bVar1 = true;
        dVar4 = local_420;
        if (local_420 <= 2.0) {
          dVar4 = 2.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          bVar1 = 2.0 < dVar4;
          dVar5 = dVar4;
        }
        uVar6 = 0x4000000000000000;
        if (bVar1) {
          local_21 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          _CGRectGetMaxX(dVar4,uVar6,dVar5);
          uVar6 = 0x4000000000000000;
          local_2e8 = local_2e8 + 2.0;
          if (dVar4 <= local_2e8) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            _CGRectGetMaxY(dVar4,local_2e8,uVar6,local_420);
            if (dVar4 <= local_350 + 2.0) {
              local_21 = 1;
            }
            else {
              local_21 = 0;
            }
          }
          else {
            local_21 = 0;
          }
        }
      }
    }
    else {
      local_21 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

