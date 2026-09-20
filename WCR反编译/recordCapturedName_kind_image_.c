// recordCapturedName:kind:image: @ 00fddb60

/* Function Stack Size: 0x28 bytes */

void WCRefineIconNameCaptureSupport::recordCapturedName_kind_image_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  ulong *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  cfstringStruct *local_e8;
  cfstringStruct *local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  bool local_71;
  cfstringStruct *local_70;
  byte local_61;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar2,param_5);
  _WCRefineIconNameCaptureIsLiveArmedFast();
  if (((ulong)puVar2 & 1) == 0) {
    local_4c = 1;
    goto LAB_00fddf78;
  }
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  pcVar4 = local_38;
  if (((ulong)puVar3 & 1) == 0) {
    local_4c = 1;
    goto LAB_00fddf78;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_c0 = local_38;
  local_61 = 0;
  local_71 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_c0 = &::cf___;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_c0;
  }
  local_71 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_c0;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar4 = local_58;
  FUN_00fddfb0();
  if (((ulong)pcVar4 & 1) == 0) {
    local_4c = 1;
  }
  else {
    pcVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf_WCRefine);
    pcVar4 = local_40;
    if (((ulong)pcVar5 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      bVar1 = false;
      if (((ulong)pcVar4 & 1) == 0) {
LAB_00fdde34:
        local_e8 = local_58;
        FUN_00fde318(0);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_88 = local_e8;
      }
      else {
        pcVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (pcVar4 == (cfstringStruct *)0x0) goto LAB_00fdde34;
        local_e8 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_e8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      uVar6 = local_48;
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar6 & 1) == 0) {
        uStack_98 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
        local_a0 = *(undefined8 *)PTR__CGSizeZero_025782f8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_size_026cab00);
        local_a0 = in_d0;
        uStack_98 = in_d1;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,uStack_98,local_28,PTR_s_upsertName_kind_pointSize_image__026ad3c0,
                 local_58,local_80,local_48);
      _objc_storeStrong(&local_80,0);
      local_4c = 0;
    }
    else {
      local_4c = 1;
    }
  }
  _objc_storeStrong(&local_58,0);
LAB_00fddf78:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

