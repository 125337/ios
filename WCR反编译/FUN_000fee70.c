// FUN_000fee70 @ 000fee70

byte FUN_000fee70(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *local_a0;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  pcVar3 = local_20;
  local_39 = 0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = true;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    bVar1 = pcVar3 == (cfstringStruct *)0x0;
    local_38 = pcVar3;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar1) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
    if ((((ulong)pcVar3 & 1) != 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8),
       param_1 <= DAT_02323d38)) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_accessibilityIdentifier_0269ec20);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_a0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_a0;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_hasPrefix__0269d320,&cf_wcr_chat_position_);
      if (((((ulong)pcVar3 & 1) == 0) &&
          (pcVar3 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_wcr_newfile_)
          , ((ulong)pcVar3 & 1) == 0)) &&
         (pcVar3 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_wcr_quote),
         ((ulong)pcVar3 & 1) == 0)) {
        pcVar4 = "MMEdgeTipsView";
        _objc_getClass();
        pcVar5 = "FirstUnReadTipView";
        _objc_getClass();
        if ((pcVar4 == (char *)0x0) ||
           (pcVar3 = local_20,
           (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar4),
           ((ulong)pcVar3 & 1) == 0)) {
          if ((pcVar5 == (char *)0x0) ||
             (pcVar3 = local_20,
             (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar5),
             ((ulong)pcVar3 & 1) == 0)) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
      local_40 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

