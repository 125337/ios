// FUN_00063ee8 @ 00063ee8

void FUN_00063ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *local_d8;
  cfstringStruct *local_b8;
  cfstringStruct *local_78;
  undefined *local_68;
  undefined *local_60 [3];
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == (cfstringStruct *)0x0) {
    local_b8 = &cf___;
  }
  else {
    local_b8 = local_40;
  }
  puVar1 = PTR_WCRefineLinkParser_026ce168;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLinkParser_026ce168,PTR_s_extractSupportedURLFromText__0269db90,local_b8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_d8 = (undefined *)0x0;
  }
  else {
    local_d8 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               local_48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60[0] = local_d8;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar1 = local_60[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_host_0269dc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined *)0x0) {
    local_78 = local_30;
    FUN_0006516c(0,local_30,&cf_m_n64MesSvrID);
    if (local_78 == (cfstringStruct *)0x0) {
      local_78 = local_30;
      FUN_0006516c(local_30,&cf_m_n64SvrID);
    }
    if (local_78 == (cfstringStruct *)0x0) {
      pcVar5 = local_30;
      FUN_0006516c(0,local_30,&cf_m_uiMesLocalID);
      if (pcVar5 == (cfstringStruct *)0x0) {
        FUN_0006516c(0,local_30,&cf_m_uiCreateTime);
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____t__llu_c___);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____l__llu);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar1;
      }
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____s__llu)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_setQuery__0269dc58,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_setFragment__0269dc60,0);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar2 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_host_0269dc50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf____u_____);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

