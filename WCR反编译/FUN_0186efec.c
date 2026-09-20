// FUN_0186efec @ 0186efec

void FUN_0186efec(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_40 = &cf___;
    }
    else {
      local_40 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_40;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineShowPrivateFriend);
    if ((((ulong)pcVar2 & 1) == 0) &&
       ((pcVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineHidePrivateFriend),
        ((ulong)pcVar2 & 1) == 0 &&
        (pcVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePrivateFriend),
        ((ulong)pcVar2 & 1) == 0)))) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineShowPluginHub);
      if ((((ulong)pcVar2 & 1) == 0) &&
         ((pcVar2 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineHidePluginHub),
          ((ulong)pcVar2 & 1) == 0 &&
          (pcVar2 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePluginHub),
          local_18 = local_20, ((ulong)pcVar2 & 1) == 0)))) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_WCRefineTogglePluginHub;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_WCRefineTogglePrivateFriend;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

