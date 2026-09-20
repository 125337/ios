// FUN_007dd048 @ 007dd048

byte FUN_007dd048(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  ulong local_128;
  ulong local_68;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (local_38 == 0)) {
    local_21 = 0;
    local_48 = 1;
    goto LAB_007dd5f4;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_128 = uVar2;
  if (uVar2 == 0) {
    local_58 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_attributedText_0269fcf8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_128 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_128;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_21 = 0;
  }
  else {
    uVar2 = local_50;
    FUN_007dd650();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textAlignment_026a66e8);
      if (uVar2 == 2) {
        local_21 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
        _CGRectGetWidth(param_1,param_2);
        uVar5 = 0x3ff0000000000000;
        if (1.0 < param_1) {
          dVar3 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          _CGRectGetMidX();
          dVar4 = dVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          _CGRectGetMinX(dVar4,uVar5,param_3,param_4);
          if ((param_1 * DAT_02323c78 < dVar4) || (param_1 * DAT_02323c98 < dVar3)) {
            local_21 = 1;
            goto LAB_007dd5e4;
          }
        }
        local_21 = 0;
      }
    }
    else {
      local_21 = 0;
    }
  }
LAB_007dd5e4:
  local_48 = 1;
  _objc_storeStrong(&local_50,0);
LAB_007dd5f4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

