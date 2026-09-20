// FUN_001dc0e8 @ 001dc0e8

byte FUN_001dc0e8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_f8;
  ulong local_f0;
  undefined4 local_e4;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  ulong local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  _objc_storeStrong(&local_90,param_5);
  bVar1 = true;
  if (local_90 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bounds_026ca548);
    uVar5 = 0x4028000000000000;
    bVar1 = true;
    local_b0 = param_1;
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    if (12.0 <= param_3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bounds_026ca548);
      bVar1 = param_1 < 12.0;
      local_e0 = param_3;
      local_d8 = uVar5;
      local_d0 = param_2;
      local_c8 = param_1;
    }
  }
  uVar3 = local_90;
  if (bVar1) {
    local_81 = 0;
    local_e4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_90;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_90;
      if ((uVar4 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) == 0) {
          FUN_001d1c14();
          local_f0 = uVar3;
          if ((uVar3 == 0) ||
             (uVar4 = local_90,
             (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isKindOfClass__0269cd68,uVar3),
             (uVar4 & 1) == 0)) {
            uVar4 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            local_40 = &cf_Button;
            local_38 = &cf_Indicator;
            local_30 = &cf_Label;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_f8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_40,3);
            _objc_retainAutoreleasedReturnValue();
            FUN_001dc68c();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            uVar3 = local_f8;
            if ((uVar4 & 1) == 0) {
              local_80 = &cf_Image;
              local_78 = &cf_Media;
              local_70 = &cf_Video;
              local_68 = &cf_Player;
              local_60 = &cf_Cover;
              local_58 = &cf_Thumb;
              local_50 = &cf_Preview;
              local_48 = &cf_Picture;
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_80,8);
              _objc_retainAutoreleasedReturnValue();
              FUN_001dc68c();
              local_81 = (byte)uVar3 & 1;
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            else {
              local_81 = 0;
            }
            local_e4 = 1;
            _objc_storeStrong(&local_f8,0);
          }
          else {
            local_81 = 1;
            local_e4 = 1;
          }
        }
        else {
          local_81 = 1;
          local_e4 = 1;
        }
        goto LAB_001dc628;
      }
    }
    local_81 = 0;
    local_e4 = 1;
  }
LAB_001dc628:
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_81 & 1;
}

