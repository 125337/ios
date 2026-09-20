// FUN_007a4dcc @ 007a4dcc

byte FUN_007a4dcc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_21 = true;
  }
  else {
    pcVar1 = &cf_MMUILabel;
    _NSClassFromString();
    uVar3 = local_30;
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) &&
       ((pcVar1 == (cfstringStruct *)0x0 ||
        (uVar3 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar1),
        (uVar3 & 1) == 0)))) {
      uVar3 = local_30;
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_21 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        _CGRectGetWidth(param_1,param_2);
        uVar4 = 0x4046000000000000;
        local_21 = false;
        if (param_1 < 44.0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          _CGRectGetHeight(param_1,uVar4,param_3,param_4);
          local_21 = param_1 < 44.0;
        }
      }
    }
    else {
      local_21 = true;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

