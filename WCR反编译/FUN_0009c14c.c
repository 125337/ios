// FUN_0009c14c @ 0009c14c

void FUN_0009c14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 cfstringStruct *param_5,undefined8 param_6)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  uint local_2c8;
  cfstringStruct *local_2b8;
  undefined1 auStack_240 [48];
  undefined1 auStack_210 [48];
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [48];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [54];
  byte local_7a;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_30 = param_6;
  local_28 = param_5;
  (*DAT_028c8010)(param_5,param_6);
  pcVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = pcVar2;
  FUN_0009da20();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_38;
  local_58[0] = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = pcVar2;
  do {
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_60;
    local_60 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    if (pcVar3 == (cfstringStruct *)0x0) goto LAB_0009c320;
    puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  } while (((ulong)pcVar2 & 1) == 0);
  pcVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_58[0];
  local_58[0] = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
LAB_0009c320:
  local_2b8 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_79 = false;
  bVar1 = local_2b8 == (cfstringStruct *)0x0;
  local_68 = local_2b8;
  if (bVar1) {
    local_2b8 = &cf__nil_;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_2b8;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_2b8;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderHeadInfoEasyView);
  local_2c8 = 1;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderContentHeaderView);
    local_2c8 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_isEqualToString__0269ccc8,&cf_WCFinderFullShareListViewController
                );
      local_2c8 = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_isEqualToString__0269ccc8,
                   &cf_WCFinderCommentDetailViewController);
        local_2c8 = (uint)pcVar2;
      }
    }
  }
  local_7a = (byte)local_2c8 & 1;
  if ((local_2c8 & 1) == 0) {
    FUN_0009da9c(local_38,local_40);
  }
  else {
    _memcpy(auStack_b0,PTR__CGAffineTransformIdentity_025782d8,0x30);
    pcVar2 = local_38;
    _memcpy(auStack_e0,auStack_b0,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTransform__026caad0,auStack_e0);
  }
  local_e8 = (cfstringStruct *)0x0;
  pcVar2 = &cf_headImageView;
  _NSSelectorFromString();
  pcVar3 = local_28;
  local_f0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_methodForSelector__0269e1d8,local_f0);
    pcVar3 = local_28;
    local_100 = pcVar2;
    local_f8 = pcVar2;
    (*(code *)pcVar2)(local_28,local_f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_e8;
    local_e8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_e8 != (cfstringStruct *)0x0) {
    if ((local_7a & 1) == 0) {
      pcVar5 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_38;
      (*(code *)PTR__objc_release_02578630)();
      pcVar2 = local_e8;
      if ((long)pcVar5 - (long)pcVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
        local_180 = param_1;
        local_178 = param_2;
        local_170 = param_3;
        local_168 = param_4;
        FUN_0009d2f8(param_1,param_2,param_3,param_4,pcVar2);
        if (local_e8 == (cfstringStruct *)0x0) {
          _memset(auStack_1b0,0,0x30);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(auStack_1b0,local_e8,PTR_s_transform_0269e178);
        }
        _memcpy(auStack_1e0,PTR__CGAffineTransformIdentity_025782d8,0x30);
        puVar6 = auStack_1b0;
        _CGAffineTransformEqualToTransform(puVar6,auStack_1e0);
        if (((ulong)puVar6 & 1) == 0) {
          _memcpy(auStack_210,PTR__CGAffineTransformIdentity_025782d8,0x30);
          pcVar2 = local_e8;
          _memcpy(auStack_240,auStack_210,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTransform__026caad0,auStack_240);
        }
      }
      else {
        FUN_0009da9c((long)pcVar5 - (long)pcVar3,local_e8,local_40);
      }
    }
    else {
      _memcpy(auStack_130,PTR__CGAffineTransformIdentity_025782d8,0x30);
      pcVar2 = local_e8;
      _memcpy(auStack_160,auStack_130,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTransform__026caad0,auStack_160);
    }
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

