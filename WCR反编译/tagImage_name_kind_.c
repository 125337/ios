// tagImage:name:kind: @ 00fde4f4

/* Function Stack Size: 0x28 bytes */

void WCRefineIconNameCaptureSupport::tagImage_name_kind_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  cfstringStruct **ppcVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_e0;
  cfstringStruct *local_c0;
  cfstringStruct *local_90;
  cfstringStruct *local_60;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  ppcVar2 = &local_38;
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar2,param_5);
  _WCRefineIconNameCaptureIsLiveArmedFast();
  uVar4 = local_28;
  if (((ulong)ppcVar2 & 1) == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    pcVar5 = local_30;
    if ((uVar4 & 1) == 0) {
      local_3c = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_90 = local_30;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_90 = &::cf___;
      }
      else {
        local_50 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_90;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_90;
      if (!bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_60);
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      pcVar5 = local_48;
      FUN_00fddfb0();
      if (((ulong)pcVar5 & 1) == 0) {
        local_3c = 1;
      }
      else {
        pcVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_WCRefine);
        if (((ulong)pcVar5 & 1) == 0) {
          _objc_setAssociatedObject(local_28,&DAT_028e306a,local_48,3);
          if (local_38 == (cfstringStruct *)0x0) {
            local_c0 = &cf_png;
          }
          else {
            local_c0 = local_38;
          }
          _objc_setAssociatedObject(local_28,&DAT_028e306b,local_c0,3);
          if (local_38 == (cfstringStruct *)0x0) {
            local_e0 = &cf_png;
          }
          else {
            local_e0 = local_38;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_recordCapturedName_kind_image__026ad3c8,local_48,local_e0,
                     local_28);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleAutoCapture_026ad300);
          local_3c = 0;
        }
        else {
          local_3c = 1;
        }
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

