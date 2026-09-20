// FUN_005d835c @ 005d835c

void FUN_005d835c(cfstringStruct *param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b8;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  FUN_005d8714();
  if (((ulong)param_1 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    _WCRMomentsTailHasPostSession();
    if (((ulong)param_1 & 1) == 0) {
      pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        puVar3 = PTR_WCRefineMomentsTailCatalog_026ce7d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_isRegisteredAppID__026a5c78,
                   local_38);
        if (((ulong)puVar3 & 1) == 0) {
          local_b8 = (cfstringStruct *)0x0;
        }
        else {
          local_b8 = local_38;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_b8;
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      _WCRMomentsTailPostSessionAppID();
      _objc_retainAutoreleasedReturnValue();
      local_48 = param_1;
      if (param_1 == (cfstringStruct *)0x0) {
        local_48 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_20 = local_48;
      (*(code *)PTR__objc_release_02578630)(param_1);
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        puVar3 = PTR_WCRefineMomentsTailCatalog_026ce7d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_isRegisteredAppID__026a5c78,
                   local_20);
        if (((ulong)puVar3 & 1) == 0) {
          local_68 = (cfstringStruct *)0x0;
        }
        else {
          local_68 = local_20;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_68;
      }
      local_30 = 1;
      _objc_storeStrong(&local_20,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

