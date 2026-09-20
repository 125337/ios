// rememberResourceName:onImage: @ 00fdeb20

/* Function Stack Size: 0x20 bytes */

void WCRefineIconNameCaptureSupport::rememberResourceName_onImage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  byte local_49;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  ulong local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar4 = local_28;
  if ((uVar3 & 1) == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_88 = local_28;
    local_49 = 0;
    local_59 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_88 = &::cf___;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_88;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_88;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    pcVar4 = local_40;
    FUN_00fddfb0();
    if (((ulong)pcVar4 & 1) == 0) {
      local_34 = 1;
    }
    else {
      pcVar4 = local_40;
      FUN_00fde318();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar4;
      _objc_setAssociatedObject(local_30,&DAT_028e306a,local_40);
      uVar3 = local_30;
      _objc_setAssociatedObject(local_30,&DAT_028e306b,local_68,3);
      _WCRefineIconNameCaptureIsLiveArmedFast();
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_recordCapturedName_kind_image__026ad3c8,local_40,local_68,local_30
                  );
      }
      _objc_storeStrong(&local_68,0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

