// stampResourceName:onView: @ 00fdedf4

/* Function Stack Size: 0x20 bytes */

void WCRefineIconNameCaptureSupport::stampResourceName_onView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_d0;
  ulong local_88;
  ulong local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  byte local_59;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  ulong local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_44 = 1;
  }
  else {
    _objc_setAssociatedObject(local_40,&DAT_028e306c);
    _objc_setAssociatedObject(local_40,&DAT_028e306d,0,3);
    pcVar4 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_d0 = local_38;
    local_59 = 0;
    local_69 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_d0 = &::cf___;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d0;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_d0;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    pcVar4 = local_50;
    FUN_00fddfb0();
    if (((ulong)pcVar4 & 1) == 0) {
      local_44 = 1;
    }
    else {
      pcVar4 = local_50;
      FUN_00fde318();
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar4;
      _objc_setAssociatedObject(local_40,&DAT_028e306c,local_50);
      _objc_setAssociatedObject(local_40,&DAT_028e306d,local_78,3);
      uVar3 = local_40;
      local_80 = 0;
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_image);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_88 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) != 0) {
          _objc_storeStrong(&local_80,local_88);
        }
        _objc_storeStrong(&local_88,0);
      }
      else {
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_80;
        local_80 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_rememberResourceName_onImage__026ad3d0,local_50,local_80);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scheduleAutoCapture_026ad300);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

