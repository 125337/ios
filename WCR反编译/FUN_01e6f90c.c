// FUN_01e6f90c @ 01e6f90c

void FUN_01e6f90c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_18;
    local_18 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  pcVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
  bVar2 = false;
  bVar1 = false;
  if (((ulong)pcVar4 & 1) == 0) {
    local_38 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardWebURL_026c6dd0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_68 = local_38;
    if (local_38 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    local_58 = local_68;
  }
  else {
    local_28 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardWebHTML_026c6dc8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_50 = local_28;
    if (local_28 == (cfstringStruct *)0x0) {
      local_50 = &cf___;
    }
    local_58 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hash_0269ec90);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_v2__d__lu__lu);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar5);
  return;
}

