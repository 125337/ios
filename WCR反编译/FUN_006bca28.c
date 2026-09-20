// FUN_006bca28 @ 006bca28

byte FUN_006bca28(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_118;
  cfstringStruct *local_f8;
  cfstringStruct *local_d8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  uint local_48;
  ulong local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,&cf_NewPersonalQRCodeViewController);
    pcVar3 = local_30;
    if ((uVar4 & 1) == 0) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = pcVar3;
      while (local_50 != (cfstringStruct *)0x0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar3;
        FUN_006bf668();
        bVar1 = ((ulong)pcVar3 & 1) != 0;
        if (bVar1) {
          local_21 = 1;
        }
        local_48 = (uint)bVar1;
        _objc_storeStrong(&local_58,0);
        if (local_48 != 0) goto LAB_006bcc80;
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_50;
        local_50 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_48 = 2;
LAB_006bcc80:
      _objc_storeStrong(&local_50,0);
      if (local_48 == 2) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_d8 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_d8;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityIdentifier_0269ec20);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_f8 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_f8;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityValue_026a68d0);
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_118 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_118;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_4YP);
        if (((((ulong)pcVar3 & 1) == 0) &&
            (pcVar3 = local_68,
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,&cf_4YP),
            ((ulong)pcVar3 & 1) == 0)) &&
           (pcVar3 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf_4YP),
           ((ulong)pcVar3 & 1) == 0)) {
          local_21 = 0;
        }
        else {
          local_21 = 1;
        }
        local_48 = 1;
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

