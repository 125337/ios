// webView:startURLSchemeTask: @ 01edcce8

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoAssetSchemeHandlerSettings::webView_startURLSchemeTask_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_250;
  undefined *local_210;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_198;
  undefined *local_170;
  cfstringStruct *local_168;
  undefined4 local_160;
  bool local_159;
  undefined *local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  bool local_139;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  cfstringStruct *local_110;
  bool local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  SEL local_98;
  ID local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  local_a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a8,param_4);
  pcVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_request_026a1c88);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c1 = 0;
  local_198 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_1a8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1a8 = &::cf___;
    }
    local_198 = local_1a8;
    local_c0 = pcVar4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = local_198;
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  while (pcVar2 = local_b8,
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hasPrefix__0269d320,&cf__),
        ((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_b8;
    local_b8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_host_0269dc50);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1c0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_1c0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_asset);
  local_e1 = 0;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_1d0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1d0;
  }
  else {
    local_1d0 = local_b8;
  }
  local_e1 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_1d0;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  pcVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  local_101 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1e0 = &::cf___;
  }
  else {
    local_1e0 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = local_1e0;
  }
  local_101 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_1e0;
  if ((local_101 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  pcVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
  local_1f0 = local_f0;
  local_129 = 0;
  local_139 = false;
  bVar1 = pcVar2 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2);
  if (bVar1) {
    local_1f0 = &::cf___;
  }
  else {
    pcVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
    local_118 = (undefined1 *)((long)&pcVar2[-1].field3_0x18 + 7);
    local_80 = 1;
    local_78 = 1;
    local_120 = 1;
    local_88 = local_118;
    local_70 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_subarrayWithRange__0269d848,1,local_118);
    _objc_retainAutoreleasedReturnValue();
    local_129 = 1;
    local_128 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_138 = local_1f0;
  }
  local_139 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = local_1f0;
  if ((local_139 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  pcVar2 = local_f8;
  FUN_01edd77c(local_f8,local_110);
  _objc_retainAutoreleasedReturnValue();
  local_159 = false;
  local_148 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_210 = (undefined *)0x0;
  }
  else {
    local_210 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_158 = local_210;
  }
  local_159 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_210;
  if ((local_159 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_158);
  }
  puVar5 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
  pcVar2 = local_a8;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSError_026ce470,PTR_s_errorWithDomain_code_userInfo__026a1648,
               &cf_WCRefineToDoAsset,0x194,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_didFailWithError__026a1c80);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_160 = 1;
  }
  else {
    pcVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01eddf5c();
    _objc_retainAutoreleasedReturnValue();
    local_168 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar6 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
    _objc_alloc();
    pcVar2 = local_b0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_68 = &cf_Content_Type;
    if (local_168 == (cfstringStruct *)0x0) {
      local_250 = &cf_application_octet_stream;
    }
    else {
      local_250 = local_168;
    }
    local_48 = local_250;
    local_60 = &cf_Content_Length;
    puVar7 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_Access_Control_Allow_Origin;
    local_38 = &cf__;
    local_50 = &cf_Cache_Control;
    local_30 = &cf_no_cache;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_initWithURL_statusCode_HTTPVersi_026a1c98,pcVar2,200,&cf_HTTP_1_1);
    local_170 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_didReceiveResponse__026a1ca0,local_170);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_didReceiveData__026a1ca8,local_150);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_didFinish_026a1cb0);
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
    local_160 = 0;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

