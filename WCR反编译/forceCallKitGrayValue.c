// forceCallKitGrayValue @ 01f4de74

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRefineVersionController::forceCallKitGrayValue(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar2 = &cf_MMContext;
  local_28 = param_2;
  local_20 = param_1;
  _NSClassFromString();
  pcVar3 = &cf_MMConfigMgr;
  local_30 = pcVar2;
  _NSClassFromString();
  if (((local_30 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) ||
     (pcVar2 = local_30, local_38 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (cfstringStruct *)0x1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (cfstringStruct *)0x1;
      local_44 = 1;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_uintFromDynamicConfigForKey_defa_026c9160;
      local_50 = pcVar2;
      if ((pcVar2 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,
                     PTR_s_uintFromDynamicConfigForKey_defa_026c9160), ((ulong)pcVar2 & 1) == 0)) {
        local_18 = (cfstringStruct *)0x1;
      }
      else {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,puVar1,&cf_VoipUseCallKitSwitch,1);
        local_18 = pcVar2;
      }
      local_44 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  return (unsigned_long_long)local_18;
}

