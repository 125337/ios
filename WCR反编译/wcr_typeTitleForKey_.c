// wcr_typeTitleForKey: @ 01dd5fbc

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsViewController::wcr_typeTitleForKey_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_refer);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_pat);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_redpacket);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_transfer)
        ;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = (cfstringStruct *)PTR_WCRefineMessageBlockSupport_026ce0f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_titleForTypeKey__026a41e8,
                     local_30);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_68 = local_30;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_68;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_l_;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__S;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf_b;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_e_g;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

