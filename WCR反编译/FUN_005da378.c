// FUN_005da378 @ 005da378

void FUN_005da378(cfstringStruct *param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_1a0;
  undefined **local_178;
  cfstringStruct *local_110;
  undefined **local_e8;
  cfstringStruct *local_b8;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  _WCRMomentsTailHasPostSession();
  if (((ulong)param_1 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_e;
      local_40 = 1;
    }
    else {
      puVar2 = PTR_WCRefineMomentsTailCatalog_026ce7d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_nameForAppID__026a5c60,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_178 = &local_78;
      }
      else {
        local_178 = &local_80;
      }
      pcVar1 = (cfstringStruct *)*local_178;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 < (cfstringStruct *)0xf) {
        local_1a0 = local_88;
      }
      else {
        local_90 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_substringToIndex__0269d6c0,0xe);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_1a0;
      }
      local_a1 = pcVar1 >= (cfstringStruct *)0xf;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_1a0;
      if (local_a1) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      local_40 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  else {
    _WCRMomentsTailPostSessionAppID();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = param_1;
    if (param_1 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_b8;
    (*(code *)PTR__objc_release_02578630)(param_1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_e;
      local_40 = 1;
    }
    else {
      pcVar1 = (cfstringStruct *)PTR_WCRefineMomentsTailCatalog_026ce7d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_nameForAppID__026a5c60,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = (undefined *)pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_e8 = (undefined **)&local_30;
      }
      else {
        local_e8 = &local_48;
      }
      pcVar1 = (cfstringStruct *)*local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_59 = 0;
      local_69 = 0;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 < (cfstringStruct *)0xf) {
        local_110 = local_50;
      }
      else {
        local_110 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,0xe);
        _objc_retainAutoreleasedReturnValue();
        local_59 = 1;
        local_58 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_110;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_110;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      local_40 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

