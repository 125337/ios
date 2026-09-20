// handleVideoWatermarkOpacityConfirmGeneric: @ 018040f4

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::handleVideoWatermarkOpacityConfirmGeneric_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  long_long local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_handleVideoWatermarkOpacityConfirm_ld_);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_handleVideoWatermarkOpacityCancel_ld_);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = local_28;
  local_48 = puVar2;
  _objc_getAssociatedObject(local_28,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_60 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &::cf___;
    if ((local_68 != (cfstringStruct *)0x0) &&
       (pcVar3 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_e8 = &::cf___;
      }
      _objc_storeStrong(&local_70,local_e8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_28;
    _objc_getAssociatedObject(local_28,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)pcVar3->field2_0x10)(pcVar3,local_70);
    }
    _objc_setAssociatedObject(local_28,local_40,0,1);
    _objc_setAssociatedObject(local_28,local_48,0,1);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_60 = 0;
  }
  _objc_storeStrong(&local_50,0);
  return;
}

