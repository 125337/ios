// FUN_00670348 @ 00670348

void FUN_00670348(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_attributedText_0269fcf8);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_attributedText_0269fcf8);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 0;
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      local_50[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      bVar1 = false;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_string_0269cc38);
        _objc_retainAutoreleasedReturnValue();
        local_59 = 1;
        local_58 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = pcVar2 != (cfstringStruct *)0x0;
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      if (bVar1) {
        pcVar2 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_string_0269cc38);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        FUN_00667bb8();
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(local_50,0);
      if (local_34 != 0) goto LAB_006707d4;
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      bVar1 = ((ulong)pcVar2 & 1) != 0;
      if (bVar1) {
        pcVar2 = local_68;
        FUN_00667bb8();
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_68,0);
      if (local_34 != 0) goto LAB_006707d4;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
  }
LAB_006707d4:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

